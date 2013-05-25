//
//  epub_jni.h
//  ePub3
//
//  Created by AnFengDe on 2013-05-24.
//  Copyright (c) 2012-2013 The Readium Foundation and contributors.
//
//  The Readium SDK is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//


#include <jni.h>

#ifndef _EPUB_JNI_H_
#define _EPUB_JNI_H_
#ifdef __cplusplus
extern "C" {
#endif

int Java_com_readium_EPubJNI_openBook(JNIEnv* env, jobject thiz, jstring jPath);


void Java_com_readium_EPubJNI_closeBook(JNIEnv* env, jobject thiz, int handle);

#ifdef __cplusplus
}
#endif
#endif