#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E1910
// Address: 0x3e1910 - 0x3e1b70
void sub_003E1910_0x3e1910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1910_0x3e1910");
#endif

    switch (ctx->pc) {
        case 0x3e1910u: goto label_3e1910;
        case 0x3e1914u: goto label_3e1914;
        case 0x3e1918u: goto label_3e1918;
        case 0x3e191cu: goto label_3e191c;
        case 0x3e1920u: goto label_3e1920;
        case 0x3e1924u: goto label_3e1924;
        case 0x3e1928u: goto label_3e1928;
        case 0x3e192cu: goto label_3e192c;
        case 0x3e1930u: goto label_3e1930;
        case 0x3e1934u: goto label_3e1934;
        case 0x3e1938u: goto label_3e1938;
        case 0x3e193cu: goto label_3e193c;
        case 0x3e1940u: goto label_3e1940;
        case 0x3e1944u: goto label_3e1944;
        case 0x3e1948u: goto label_3e1948;
        case 0x3e194cu: goto label_3e194c;
        case 0x3e1950u: goto label_3e1950;
        case 0x3e1954u: goto label_3e1954;
        case 0x3e1958u: goto label_3e1958;
        case 0x3e195cu: goto label_3e195c;
        case 0x3e1960u: goto label_3e1960;
        case 0x3e1964u: goto label_3e1964;
        case 0x3e1968u: goto label_3e1968;
        case 0x3e196cu: goto label_3e196c;
        case 0x3e1970u: goto label_3e1970;
        case 0x3e1974u: goto label_3e1974;
        case 0x3e1978u: goto label_3e1978;
        case 0x3e197cu: goto label_3e197c;
        case 0x3e1980u: goto label_3e1980;
        case 0x3e1984u: goto label_3e1984;
        case 0x3e1988u: goto label_3e1988;
        case 0x3e198cu: goto label_3e198c;
        case 0x3e1990u: goto label_3e1990;
        case 0x3e1994u: goto label_3e1994;
        case 0x3e1998u: goto label_3e1998;
        case 0x3e199cu: goto label_3e199c;
        case 0x3e19a0u: goto label_3e19a0;
        case 0x3e19a4u: goto label_3e19a4;
        case 0x3e19a8u: goto label_3e19a8;
        case 0x3e19acu: goto label_3e19ac;
        case 0x3e19b0u: goto label_3e19b0;
        case 0x3e19b4u: goto label_3e19b4;
        case 0x3e19b8u: goto label_3e19b8;
        case 0x3e19bcu: goto label_3e19bc;
        case 0x3e19c0u: goto label_3e19c0;
        case 0x3e19c4u: goto label_3e19c4;
        case 0x3e19c8u: goto label_3e19c8;
        case 0x3e19ccu: goto label_3e19cc;
        case 0x3e19d0u: goto label_3e19d0;
        case 0x3e19d4u: goto label_3e19d4;
        case 0x3e19d8u: goto label_3e19d8;
        case 0x3e19dcu: goto label_3e19dc;
        case 0x3e19e0u: goto label_3e19e0;
        case 0x3e19e4u: goto label_3e19e4;
        case 0x3e19e8u: goto label_3e19e8;
        case 0x3e19ecu: goto label_3e19ec;
        case 0x3e19f0u: goto label_3e19f0;
        case 0x3e19f4u: goto label_3e19f4;
        case 0x3e19f8u: goto label_3e19f8;
        case 0x3e19fcu: goto label_3e19fc;
        case 0x3e1a00u: goto label_3e1a00;
        case 0x3e1a04u: goto label_3e1a04;
        case 0x3e1a08u: goto label_3e1a08;
        case 0x3e1a0cu: goto label_3e1a0c;
        case 0x3e1a10u: goto label_3e1a10;
        case 0x3e1a14u: goto label_3e1a14;
        case 0x3e1a18u: goto label_3e1a18;
        case 0x3e1a1cu: goto label_3e1a1c;
        case 0x3e1a20u: goto label_3e1a20;
        case 0x3e1a24u: goto label_3e1a24;
        case 0x3e1a28u: goto label_3e1a28;
        case 0x3e1a2cu: goto label_3e1a2c;
        case 0x3e1a30u: goto label_3e1a30;
        case 0x3e1a34u: goto label_3e1a34;
        case 0x3e1a38u: goto label_3e1a38;
        case 0x3e1a3cu: goto label_3e1a3c;
        case 0x3e1a40u: goto label_3e1a40;
        case 0x3e1a44u: goto label_3e1a44;
        case 0x3e1a48u: goto label_3e1a48;
        case 0x3e1a4cu: goto label_3e1a4c;
        case 0x3e1a50u: goto label_3e1a50;
        case 0x3e1a54u: goto label_3e1a54;
        case 0x3e1a58u: goto label_3e1a58;
        case 0x3e1a5cu: goto label_3e1a5c;
        case 0x3e1a60u: goto label_3e1a60;
        case 0x3e1a64u: goto label_3e1a64;
        case 0x3e1a68u: goto label_3e1a68;
        case 0x3e1a6cu: goto label_3e1a6c;
        case 0x3e1a70u: goto label_3e1a70;
        case 0x3e1a74u: goto label_3e1a74;
        case 0x3e1a78u: goto label_3e1a78;
        case 0x3e1a7cu: goto label_3e1a7c;
        case 0x3e1a80u: goto label_3e1a80;
        case 0x3e1a84u: goto label_3e1a84;
        case 0x3e1a88u: goto label_3e1a88;
        case 0x3e1a8cu: goto label_3e1a8c;
        case 0x3e1a90u: goto label_3e1a90;
        case 0x3e1a94u: goto label_3e1a94;
        case 0x3e1a98u: goto label_3e1a98;
        case 0x3e1a9cu: goto label_3e1a9c;
        case 0x3e1aa0u: goto label_3e1aa0;
        case 0x3e1aa4u: goto label_3e1aa4;
        case 0x3e1aa8u: goto label_3e1aa8;
        case 0x3e1aacu: goto label_3e1aac;
        case 0x3e1ab0u: goto label_3e1ab0;
        case 0x3e1ab4u: goto label_3e1ab4;
        case 0x3e1ab8u: goto label_3e1ab8;
        case 0x3e1abcu: goto label_3e1abc;
        case 0x3e1ac0u: goto label_3e1ac0;
        case 0x3e1ac4u: goto label_3e1ac4;
        case 0x3e1ac8u: goto label_3e1ac8;
        case 0x3e1accu: goto label_3e1acc;
        case 0x3e1ad0u: goto label_3e1ad0;
        case 0x3e1ad4u: goto label_3e1ad4;
        case 0x3e1ad8u: goto label_3e1ad8;
        case 0x3e1adcu: goto label_3e1adc;
        case 0x3e1ae0u: goto label_3e1ae0;
        case 0x3e1ae4u: goto label_3e1ae4;
        case 0x3e1ae8u: goto label_3e1ae8;
        case 0x3e1aecu: goto label_3e1aec;
        case 0x3e1af0u: goto label_3e1af0;
        case 0x3e1af4u: goto label_3e1af4;
        case 0x3e1af8u: goto label_3e1af8;
        case 0x3e1afcu: goto label_3e1afc;
        case 0x3e1b00u: goto label_3e1b00;
        case 0x3e1b04u: goto label_3e1b04;
        case 0x3e1b08u: goto label_3e1b08;
        case 0x3e1b0cu: goto label_3e1b0c;
        case 0x3e1b10u: goto label_3e1b10;
        case 0x3e1b14u: goto label_3e1b14;
        case 0x3e1b18u: goto label_3e1b18;
        case 0x3e1b1cu: goto label_3e1b1c;
        case 0x3e1b20u: goto label_3e1b20;
        case 0x3e1b24u: goto label_3e1b24;
        case 0x3e1b28u: goto label_3e1b28;
        case 0x3e1b2cu: goto label_3e1b2c;
        case 0x3e1b30u: goto label_3e1b30;
        case 0x3e1b34u: goto label_3e1b34;
        case 0x3e1b38u: goto label_3e1b38;
        case 0x3e1b3cu: goto label_3e1b3c;
        case 0x3e1b40u: goto label_3e1b40;
        case 0x3e1b44u: goto label_3e1b44;
        case 0x3e1b48u: goto label_3e1b48;
        case 0x3e1b4cu: goto label_3e1b4c;
        case 0x3e1b50u: goto label_3e1b50;
        case 0x3e1b54u: goto label_3e1b54;
        case 0x3e1b58u: goto label_3e1b58;
        case 0x3e1b5cu: goto label_3e1b5c;
        case 0x3e1b60u: goto label_3e1b60;
        case 0x3e1b64u: goto label_3e1b64;
        case 0x3e1b68u: goto label_3e1b68;
        case 0x3e1b6cu: goto label_3e1b6c;
        default: break;
    }

    ctx->pc = 0x3e1910u;

label_3e1910:
    // 0x3e1910: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3e1910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3e1914:
    // 0x3e1914: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3e1914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3e1918:
    // 0x3e1918: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3e1918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_3e191c:
    // 0x3e191c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e191cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e1920:
    // 0x3e1920: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3e1920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3e1924:
    // 0x3e1924: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3e1924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3e1928:
    // 0x3e1928: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3e1928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3e192c:
    // 0x3e192c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3e192cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e1930:
    // 0x3e1930: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3e1930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3e1934:
    // 0x3e1934: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3e1934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_3e1938:
    // 0x3e1938: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e1938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3e193c:
    // 0x3e193c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3e193cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e1940:
    // 0x3e1940: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e1940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3e1944:
    // 0x3e1944: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e1944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e1948:
    // 0x3e1948: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e1948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e194c:
    // 0x3e194c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3e194cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3e1950:
    // 0x3e1950: 0x8c863e58  lw          $a2, 0x3E58($a0)
    ctx->pc = 0x3e1950u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15960)));
label_3e1954:
    // 0x3e1954: 0x8c77077c  lw          $s7, 0x77C($v1)
    ctx->pc = 0x3e1954u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1916)));
label_3e1958:
    // 0x3e1958: 0x8c650780  lw          $a1, 0x780($v1)
    ctx->pc = 0x3e1958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1920)));
label_3e195c:
    // 0x3e195c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3e195cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e1960:
    // 0x3e1960: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x3e1960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_3e1964:
    // 0x3e1964: 0x906300c0  lbu         $v1, 0xC0($v1)
    ctx->pc = 0x3e1964u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 192)));
label_3e1968:
    // 0x3e1968: 0x54640003  bnel        $v1, $a0, . + 4 + (0x3 << 2)
label_3e196c:
    if (ctx->pc == 0x3E196Cu) {
        ctx->pc = 0x3E196Cu;
            // 0x3e196c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->pc = 0x3E1970u;
        goto label_3e1970;
    }
    ctx->pc = 0x3E1968u;
    {
        const bool branch_taken_0x3e1968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3e1968) {
            ctx->pc = 0x3E196Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1968u;
            // 0x3e196c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E1978u;
            goto label_3e1978;
        }
    }
    ctx->pc = 0x3E1970u;
label_3e1970:
    // 0x3e1970: 0x10000005  b           . + 4 + (0x5 << 2)
label_3e1974:
    if (ctx->pc == 0x3E1974u) {
        ctx->pc = 0x3E1974u;
            // 0x3e1974: 0x64140001  daddiu      $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3E1978u;
        goto label_3e1978;
    }
    ctx->pc = 0x3E1970u;
    {
        const bool branch_taken_0x3e1970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1970u;
            // 0x3e1974: 0x64140001  daddiu      $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1970) {
            ctx->pc = 0x3E1988u;
            goto label_3e1988;
        }
    }
    ctx->pc = 0x3E1978u;
label_3e1978:
    // 0x3e1978: 0xe5182a  slt         $v1, $a3, $a1
    ctx->pc = 0x3e1978u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3e197c:
    // 0x3e197c: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
label_3e1980:
    if (ctx->pc == 0x3E1980u) {
        ctx->pc = 0x3E1980u;
            // 0x3e1980: 0xc71821  addu        $v1, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->pc = 0x3E1984u;
        goto label_3e1984;
    }
    ctx->pc = 0x3E197Cu;
    {
        const bool branch_taken_0x3e197c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e197c) {
            ctx->pc = 0x3E1980u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E197Cu;
            // 0x3e1980: 0xc71821  addu        $v1, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E1964u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e1964;
        }
    }
    ctx->pc = 0x3E1984u;
label_3e1984:
    // 0x3e1984: 0x0  nop
    ctx->pc = 0x3e1984u;
    // NOP
label_3e1988:
    // 0x3e1988: 0x3c1300af  lui         $s3, 0xAF
    ctx->pc = 0x3e1988u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)175 << 16));
label_3e198c:
    // 0x3e198c: 0x26730e80  addiu       $s3, $s3, 0xE80
    ctx->pc = 0x3e198cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3712));
label_3e1990:
    // 0x3e1990: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3e1990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e1994:
    // 0x3e1994: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x3e1994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3e1998:
    // 0x3e1998: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x3e1998u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e199c:
    // 0x3e199c: 0x8e750004  lw          $s5, 0x4($s3)
    ctx->pc = 0x3e199cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3e19a0:
    // 0x3e19a0: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x3e19a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_3e19a4:
    // 0x3e19a4: 0x8ea40db0  lw          $a0, 0xDB0($s5)
    ctx->pc = 0x3e19a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3504)));
label_3e19a8:
    // 0x3e19a8: 0x1083005d  beq         $a0, $v1, . + 4 + (0x5D << 2)
label_3e19ac:
    if (ctx->pc == 0x3E19ACu) {
        ctx->pc = 0x3E19B0u;
        goto label_3e19b0;
    }
    ctx->pc = 0x3E19A8u;
    {
        const bool branch_taken_0x3e19a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e19a8) {
            ctx->pc = 0x3E1B20u;
            goto label_3e1b20;
        }
    }
    ctx->pc = 0x3E19B0u;
label_3e19b0:
    // 0x3e19b0: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x3e19b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3e19b4:
    // 0x3e19b4: 0x14830012  bne         $a0, $v1, . + 4 + (0x12 << 2)
label_3e19b8:
    if (ctx->pc == 0x3E19B8u) {
        ctx->pc = 0x3E19BCu;
        goto label_3e19bc;
    }
    ctx->pc = 0x3E19B4u;
    {
        const bool branch_taken_0x3e19b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e19b4) {
            ctx->pc = 0x3E1A00u;
            goto label_3e1a00;
        }
    }
    ctx->pc = 0x3E19BCu;
label_3e19bc:
    // 0x3e19bc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3e19bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3e19c0:
    // 0x3e19c0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3e19c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3e19c4:
    // 0x3e19c4: 0xc6410298  lwc1        $f1, 0x298($s2)
    ctx->pc = 0x3e19c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e19c8:
    // 0x3e19c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3e19c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e19cc:
    // 0x3e19cc: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x3e19ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e19d0:
    // 0x3e19d0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3e19d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3e19d4:
    // 0x3e19d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3e19d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e19d8:
    // 0x3e19d8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_3e19dc:
    if (ctx->pc == 0x3E19DCu) {
        ctx->pc = 0x3E19DCu;
            // 0x3e19dc: 0xe6410298  swc1        $f1, 0x298($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 664), bits); }
        ctx->pc = 0x3E19E0u;
        goto label_3e19e0;
    }
    ctx->pc = 0x3E19D8u;
    {
        const bool branch_taken_0x3e19d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E19DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E19D8u;
            // 0x3e19dc: 0xe6410298  swc1        $f1, 0x298($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 664), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e19d8) {
            ctx->pc = 0x3E1A00u;
            goto label_3e1a00;
        }
    }
    ctx->pc = 0x3E19E0u;
label_3e19e0:
    // 0x3e19e0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3e19e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e19e4:
    // 0x3e19e4: 0x8c830e30  lw          $v1, 0xE30($a0)
    ctx->pc = 0x3e19e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3632)));
label_3e19e8:
    // 0x3e19e8: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x3e19e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3e19ec:
    // 0x3e19ec: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_3e19f0:
    if (ctx->pc == 0x3E19F0u) {
        ctx->pc = 0x3E19F4u;
        goto label_3e19f4;
    }
    ctx->pc = 0x3E19ECu;
    {
        const bool branch_taken_0x3e19ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e19ec) {
            ctx->pc = 0x3E1A00u;
            goto label_3e1a00;
        }
    }
    ctx->pc = 0x3E19F4u;
label_3e19f4:
    // 0x3e19f4: 0xc0c1c38  jal         func_3070E0
label_3e19f8:
    if (ctx->pc == 0x3E19F8u) {
        ctx->pc = 0x3E19FCu;
        goto label_3e19fc;
    }
    ctx->pc = 0x3E19F4u;
    SET_GPR_U32(ctx, 31, 0x3E19FCu);
    ctx->pc = 0x3070E0u;
    if (runtime->hasFunction(0x3070E0u)) {
        auto targetFn = runtime->lookupFunction(0x3070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E19FCu; }
        if (ctx->pc != 0x3E19FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003070E0_0x3070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E19FCu; }
        if (ctx->pc != 0x3E19FCu) { return; }
    }
    ctx->pc = 0x3E19FCu;
label_3e19fc:
    // 0x3e19fc: 0x0  nop
    ctx->pc = 0x3e19fcu;
    // NOP
label_3e1a00:
    // 0x3e1a00: 0x8ea40db0  lw          $a0, 0xDB0($s5)
    ctx->pc = 0x3e1a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3504)));
label_3e1a04:
    // 0x3e1a04: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x3e1a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3e1a08:
    // 0x3e1a08: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_3e1a0c:
    if (ctx->pc == 0x3E1A0Cu) {
        ctx->pc = 0x3E1A10u;
        goto label_3e1a10;
    }
    ctx->pc = 0x3E1A08u;
    {
        const bool branch_taken_0x3e1a08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e1a08) {
            ctx->pc = 0x3E1A20u;
            goto label_3e1a20;
        }
    }
    ctx->pc = 0x3E1A10u;
label_3e1a10:
    // 0x3e1a10: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3e1a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3e1a14:
    // 0x3e1a14: 0x1483003e  bne         $a0, $v1, . + 4 + (0x3E << 2)
label_3e1a18:
    if (ctx->pc == 0x3E1A18u) {
        ctx->pc = 0x3E1A1Cu;
        goto label_3e1a1c;
    }
    ctx->pc = 0x3E1A14u;
    {
        const bool branch_taken_0x3e1a14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e1a14) {
            ctx->pc = 0x3E1B10u;
            goto label_3e1b10;
        }
    }
    ctx->pc = 0x3E1A1Cu;
label_3e1a1c:
    // 0x3e1a1c: 0x0  nop
    ctx->pc = 0x3e1a1cu;
    // NOP
label_3e1a20:
    // 0x3e1a20: 0xc6c1027c  lwc1        $f1, 0x27C($s6)
    ctx->pc = 0x3e1a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e1a24:
    // 0x3e1a24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3e1a24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e1a28:
    // 0x3e1a28: 0x0  nop
    ctx->pc = 0x3e1a28u;
    // NOP
label_3e1a2c:
    // 0x3e1a2c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3e1a2cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e1a30:
    // 0x3e1a30: 0x45010029  bc1t        . + 4 + (0x29 << 2)
label_3e1a34:
    if (ctx->pc == 0x3E1A34u) {
        ctx->pc = 0x3E1A38u;
        goto label_3e1a38;
    }
    ctx->pc = 0x3E1A30u;
    {
        const bool branch_taken_0x3e1a30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e1a30) {
            ctx->pc = 0x3E1AD8u;
            goto label_3e1ad8;
        }
    }
    ctx->pc = 0x3E1A38u;
label_3e1a38:
    // 0x3e1a38: 0xc6a20a7c  lwc1        $f2, 0xA7C($s5)
    ctx->pc = 0x3e1a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e1a3c:
    // 0x3e1a3c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3e1a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_3e1a40:
    // 0x3e1a40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e1a40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e1a44:
    // 0x3e1a44: 0x0  nop
    ctx->pc = 0x3e1a44u;
    // NOP
label_3e1a48:
    // 0x3e1a48: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x3e1a48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e1a4c:
    // 0x3e1a4c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_3e1a50:
    if (ctx->pc == 0x3E1A50u) {
        ctx->pc = 0x3E1A54u;
        goto label_3e1a54;
    }
    ctx->pc = 0x3E1A4Cu;
    {
        const bool branch_taken_0x3e1a4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e1a4c) {
            ctx->pc = 0x3E1A60u;
            goto label_3e1a60;
        }
    }
    ctx->pc = 0x3E1A54u;
label_3e1a54:
    // 0x3e1a54: 0x1000000a  b           . + 4 + (0xA << 2)
label_3e1a58:
    if (ctx->pc == 0x3E1A58u) {
        ctx->pc = 0x3E1A58u;
            // 0x3e1a58: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x3E1A5Cu;
        goto label_3e1a5c;
    }
    ctx->pc = 0x3E1A54u;
    {
        const bool branch_taken_0x3e1a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1A54u;
            // 0x3e1a58: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1a54) {
            ctx->pc = 0x3E1A80u;
            goto label_3e1a80;
        }
    }
    ctx->pc = 0x3E1A5Cu;
label_3e1a5c:
    // 0x3e1a5c: 0x0  nop
    ctx->pc = 0x3e1a5cu;
    // NOP
label_3e1a60:
    // 0x3e1a60: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x3e1a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_3e1a64:
    // 0x3e1a64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e1a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e1a68:
    // 0x3e1a68: 0x0  nop
    ctx->pc = 0x3e1a68u;
    // NOP
label_3e1a6c:
    // 0x3e1a6c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3e1a6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e1a70:
    // 0x3e1a70: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_3e1a74:
    if (ctx->pc == 0x3E1A74u) {
        ctx->pc = 0x3E1A78u;
        goto label_3e1a78;
    }
    ctx->pc = 0x3E1A70u;
    {
        const bool branch_taken_0x3e1a70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e1a70) {
            ctx->pc = 0x3E1A80u;
            goto label_3e1a80;
        }
    }
    ctx->pc = 0x3E1A78u;
label_3e1a78:
    // 0x3e1a78: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x3e1a78u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_3e1a7c:
    // 0x3e1a7c: 0x0  nop
    ctx->pc = 0x3e1a7cu;
    // NOP
label_3e1a80:
    // 0x3e1a80: 0x3c023f08  lui         $v0, 0x3F08
    ctx->pc = 0x3e1a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16136 << 16));
label_3e1a84:
    // 0x3e1a84: 0x46011003  div.s       $f0, $f2, $f1
    ctx->pc = 0x3e1a84u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[1];
label_3e1a88:
    // 0x3e1a88: 0x8ea60a5c  lw          $a2, 0xA5C($s5)
    ctx->pc = 0x3e1a88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2652)));
label_3e1a8c:
    // 0x3e1a8c: 0x34434bdb  ori         $v1, $v0, 0x4BDB
    ctx->pc = 0x3e1a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19419);
label_3e1a90:
    // 0x3e1a90: 0x3c0541f0  lui         $a1, 0x41F0
    ctx->pc = 0x3e1a90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16880 << 16));
label_3e1a94:
    // 0x3e1a94: 0x3c023f6d  lui         $v0, 0x3F6D
    ctx->pc = 0x3e1a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16237 << 16));
label_3e1a98:
    // 0x3e1a98: 0x3c04428c  lui         $a0, 0x428C
    ctx->pc = 0x3e1a98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17036 << 16));
label_3e1a9c:
    // 0x3e1a9c: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x3e1a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_3e1aa0:
    // 0x3e1aa0: 0xe4c001c8  swc1        $f0, 0x1C8($a2)
    ctx->pc = 0x3e1aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 456), bits); }
label_3e1aa4:
    // 0x3e1aa4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3e1aa4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e1aa8:
    // 0x3e1aa8: 0x0  nop
    ctx->pc = 0x3e1aa8u;
    // NOP
label_3e1aac:
    // 0x3e1aac: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x3e1aacu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3e1ab0:
    // 0x3e1ab0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3e1ab0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e1ab4:
    // 0x3e1ab4: 0x0  nop
    ctx->pc = 0x3e1ab4u;
    // NOP
label_3e1ab8:
    // 0x3e1ab8: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x3e1ab8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[0];
label_3e1abc:
    // 0x3e1abc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3e1abcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e1ac0:
    // 0x3e1ac0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3e1ac0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e1ac4:
    // 0x3e1ac4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3e1ac4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3e1ac8:
    // 0x3e1ac8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3e1ac8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3e1acc:
    // 0x3e1acc: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x3e1accu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_3e1ad0:
    // 0x3e1ad0: 0xe4c001c0  swc1        $f0, 0x1C0($a2)
    ctx->pc = 0x3e1ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 448), bits); }
label_3e1ad4:
    // 0x3e1ad4: 0x0  nop
    ctx->pc = 0x3e1ad4u;
    // NOP
label_3e1ad8:
    // 0x3e1ad8: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x3e1ad8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3e1adc:
    // 0x3e1adc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3e1adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3e1ae0:
    // 0x3e1ae0: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3e1ae0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3e1ae4:
    // 0x3e1ae4: 0x320f809  jalr        $t9
label_3e1ae8:
    if (ctx->pc == 0x3E1AE8u) {
        ctx->pc = 0x3E1AE8u;
            // 0x3e1ae8: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x3E1AECu;
        goto label_3e1aec;
    }
    ctx->pc = 0x3E1AE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E1AECu);
        ctx->pc = 0x3E1AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1AE4u;
            // 0x3e1ae8: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E1AECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E1AECu; }
            if (ctx->pc != 0x3E1AECu) { return; }
        }
        }
    }
    ctx->pc = 0x3E1AECu;
label_3e1aec:
    // 0x3e1aec: 0x16800008  bnez        $s4, . + 4 + (0x8 << 2)
label_3e1af0:
    if (ctx->pc == 0x3E1AF0u) {
        ctx->pc = 0x3E1AF4u;
        goto label_3e1af4;
    }
    ctx->pc = 0x3E1AECu;
    {
        const bool branch_taken_0x3e1aec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e1aec) {
            ctx->pc = 0x3E1B10u;
            goto label_3e1b10;
        }
    }
    ctx->pc = 0x3E1AF4u;
label_3e1af4:
    // 0x3e1af4: 0x8ea20a68  lw          $v0, 0xA68($s5)
    ctx->pc = 0x3e1af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2664)));
label_3e1af8:
    // 0x3e1af8: 0x26a30a50  addiu       $v1, $s5, 0xA50
    ctx->pc = 0x3e1af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 2640));
label_3e1afc:
    // 0x3e1afc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e1afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3e1b00:
    // 0x3e1b00: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3e1b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e1b04:
    // 0x3e1b04: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3e1b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e1b08:
    // 0x3e1b08: 0xc0f0f84  jal         func_3C3E10
label_3e1b0c:
    if (ctx->pc == 0x3E1B0Cu) {
        ctx->pc = 0x3E1B0Cu;
            // 0x3e1b0c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x3E1B10u;
        goto label_3e1b10;
    }
    ctx->pc = 0x3E1B08u;
    SET_GPR_U32(ctx, 31, 0x3E1B10u);
    ctx->pc = 0x3E1B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1B08u;
            // 0x3e1b0c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3E10u;
    if (runtime->hasFunction(0x3C3E10u)) {
        auto targetFn = runtime->lookupFunction(0x3C3E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1B10u; }
        if (ctx->pc != 0x3E1B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3E10_0x3c3e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E1B10u; }
        if (ctx->pc != 0x3E1B10u) { return; }
    }
    ctx->pc = 0x3E1B10u;
label_3e1b10:
    // 0x3e1b10: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
label_3e1b14:
    if (ctx->pc == 0x3E1B14u) {
        ctx->pc = 0x3E1B18u;
        goto label_3e1b18;
    }
    ctx->pc = 0x3E1B10u;
    {
        const bool branch_taken_0x3e1b10 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e1b10) {
            ctx->pc = 0x3E1B20u;
            goto label_3e1b20;
        }
    }
    ctx->pc = 0x3E1B18u;
label_3e1b18:
    // 0x3e1b18: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e1b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e1b1c:
    // 0x3e1b1c: 0xaea30a70  sw          $v1, 0xA70($s5)
    ctx->pc = 0x3e1b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2672), GPR_U32(ctx, 3));
label_3e1b20:
    // 0x3e1b20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3e1b20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3e1b24:
    // 0x3e1b24: 0x217182a  slt         $v1, $s0, $s7
    ctx->pc = 0x3e1b24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_3e1b28:
    // 0x3e1b28: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x3e1b28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_3e1b2c:
    // 0x3e1b2c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x3e1b2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_3e1b30:
    // 0x3e1b30: 0x1460ff9a  bnez        $v1, . + 4 + (-0x66 << 2)
label_3e1b34:
    if (ctx->pc == 0x3E1B34u) {
        ctx->pc = 0x3E1B34u;
            // 0x3e1b34: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3E1B38u;
        goto label_3e1b38;
    }
    ctx->pc = 0x3E1B30u;
    {
        const bool branch_taken_0x3e1b30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E1B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1B30u;
            // 0x3e1b34: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1b30) {
            ctx->pc = 0x3E199Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e199c;
        }
    }
    ctx->pc = 0x3E1B38u;
label_3e1b38:
    // 0x3e1b38: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3e1b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3e1b3c:
    // 0x3e1b3c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3e1b3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3e1b40:
    // 0x3e1b40: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3e1b40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e1b44:
    // 0x3e1b44: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3e1b44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e1b48:
    // 0x3e1b48: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3e1b48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e1b4c:
    // 0x3e1b4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e1b4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e1b50:
    // 0x3e1b50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e1b50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e1b54:
    // 0x3e1b54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e1b54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e1b58:
    // 0x3e1b58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e1b58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e1b5c:
    // 0x3e1b5c: 0x3e00008  jr          $ra
label_3e1b60:
    if (ctx->pc == 0x3E1B60u) {
        ctx->pc = 0x3E1B60u;
            // 0x3e1b60: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3E1B64u;
        goto label_3e1b64;
    }
    ctx->pc = 0x3E1B5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E1B5Cu;
            // 0x3e1b60: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E1B64u;
label_3e1b64:
    // 0x3e1b64: 0x0  nop
    ctx->pc = 0x3e1b64u;
    // NOP
label_3e1b68:
    // 0x3e1b68: 0x0  nop
    ctx->pc = 0x3e1b68u;
    // NOP
label_3e1b6c:
    // 0x3e1b6c: 0x0  nop
    ctx->pc = 0x3e1b6cu;
    // NOP
}
