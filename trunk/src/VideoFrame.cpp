/** 
 * This code is written by Roozbeh Zabihollahi and with Marc Manthey 
 * partnership.
 *
 * Copyright (c) 2008 iPronto, All Rights Reserved.
 *
 * This software is the confidential and proprietary information
 * of iPronto. ("Confidential Information").  You shall
 * not disclose such Confidential Information and shall use it only in
 * accordance with the terms of the license agreement you entered into.
 *
 * IPRONTO MAKES NO REPRESENTATIONS OR WARRANTIES ABOUT THE SUITABILITY OF
 * THE SOFTWARE, EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
 * TO THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
 * PARTICULAR PURPOSE, OR NON-INFRINGEMENT. IPRONTO SHALL NOT BE LIABLE FOR
 * ANY DAMAGES SUFFERED BY LICENSEE AS A RESULT OF USING, MODIFYING OR
 * DISTRIBUTING THIS SOFTWARE OR ITS DERIVATIVES.
 */

#include "Stdafx.h"
#include "VideoFrame.h"

int VideoFrame::getSize()
{
	return m_image->imageSize;
}

char *VideoFrame::getRawDataPtr()
{
	return m_image->imageData;
}

void VideoFrame::resizeImage(int targetWidth, int targetHeight)
{
	IplImage *newImg = cvCreateImage(cvSize(targetWidth, targetHeight), IPL_DEPTH_8U, 3);
	cvResize(m_image, newImg);
	if (m_ownImage) {
		cvReleaseImage(&m_image);
	}
	m_image = newImg;
	m_ownImage = true;
}

