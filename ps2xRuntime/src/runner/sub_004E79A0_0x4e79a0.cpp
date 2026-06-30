#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E79A0
// Address: 0x4e79a0 - 0x4e7c10
void sub_004E79A0_0x4e79a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E79A0_0x4e79a0");
#endif

    switch (ctx->pc) {
        case 0x4e79a0u: goto label_4e79a0;
        case 0x4e79a4u: goto label_4e79a4;
        case 0x4e79a8u: goto label_4e79a8;
        case 0x4e79acu: goto label_4e79ac;
        case 0x4e79b0u: goto label_4e79b0;
        case 0x4e79b4u: goto label_4e79b4;
        case 0x4e79b8u: goto label_4e79b8;
        case 0x4e79bcu: goto label_4e79bc;
        case 0x4e79c0u: goto label_4e79c0;
        case 0x4e79c4u: goto label_4e79c4;
        case 0x4e79c8u: goto label_4e79c8;
        case 0x4e79ccu: goto label_4e79cc;
        case 0x4e79d0u: goto label_4e79d0;
        case 0x4e79d4u: goto label_4e79d4;
        case 0x4e79d8u: goto label_4e79d8;
        case 0x4e79dcu: goto label_4e79dc;
        case 0x4e79e0u: goto label_4e79e0;
        case 0x4e79e4u: goto label_4e79e4;
        case 0x4e79e8u: goto label_4e79e8;
        case 0x4e79ecu: goto label_4e79ec;
        case 0x4e79f0u: goto label_4e79f0;
        case 0x4e79f4u: goto label_4e79f4;
        case 0x4e79f8u: goto label_4e79f8;
        case 0x4e79fcu: goto label_4e79fc;
        case 0x4e7a00u: goto label_4e7a00;
        case 0x4e7a04u: goto label_4e7a04;
        case 0x4e7a08u: goto label_4e7a08;
        case 0x4e7a0cu: goto label_4e7a0c;
        case 0x4e7a10u: goto label_4e7a10;
        case 0x4e7a14u: goto label_4e7a14;
        case 0x4e7a18u: goto label_4e7a18;
        case 0x4e7a1cu: goto label_4e7a1c;
        case 0x4e7a20u: goto label_4e7a20;
        case 0x4e7a24u: goto label_4e7a24;
        case 0x4e7a28u: goto label_4e7a28;
        case 0x4e7a2cu: goto label_4e7a2c;
        case 0x4e7a30u: goto label_4e7a30;
        case 0x4e7a34u: goto label_4e7a34;
        case 0x4e7a38u: goto label_4e7a38;
        case 0x4e7a3cu: goto label_4e7a3c;
        case 0x4e7a40u: goto label_4e7a40;
        case 0x4e7a44u: goto label_4e7a44;
        case 0x4e7a48u: goto label_4e7a48;
        case 0x4e7a4cu: goto label_4e7a4c;
        case 0x4e7a50u: goto label_4e7a50;
        case 0x4e7a54u: goto label_4e7a54;
        case 0x4e7a58u: goto label_4e7a58;
        case 0x4e7a5cu: goto label_4e7a5c;
        case 0x4e7a60u: goto label_4e7a60;
        case 0x4e7a64u: goto label_4e7a64;
        case 0x4e7a68u: goto label_4e7a68;
        case 0x4e7a6cu: goto label_4e7a6c;
        case 0x4e7a70u: goto label_4e7a70;
        case 0x4e7a74u: goto label_4e7a74;
        case 0x4e7a78u: goto label_4e7a78;
        case 0x4e7a7cu: goto label_4e7a7c;
        case 0x4e7a80u: goto label_4e7a80;
        case 0x4e7a84u: goto label_4e7a84;
        case 0x4e7a88u: goto label_4e7a88;
        case 0x4e7a8cu: goto label_4e7a8c;
        case 0x4e7a90u: goto label_4e7a90;
        case 0x4e7a94u: goto label_4e7a94;
        case 0x4e7a98u: goto label_4e7a98;
        case 0x4e7a9cu: goto label_4e7a9c;
        case 0x4e7aa0u: goto label_4e7aa0;
        case 0x4e7aa4u: goto label_4e7aa4;
        case 0x4e7aa8u: goto label_4e7aa8;
        case 0x4e7aacu: goto label_4e7aac;
        case 0x4e7ab0u: goto label_4e7ab0;
        case 0x4e7ab4u: goto label_4e7ab4;
        case 0x4e7ab8u: goto label_4e7ab8;
        case 0x4e7abcu: goto label_4e7abc;
        case 0x4e7ac0u: goto label_4e7ac0;
        case 0x4e7ac4u: goto label_4e7ac4;
        case 0x4e7ac8u: goto label_4e7ac8;
        case 0x4e7accu: goto label_4e7acc;
        case 0x4e7ad0u: goto label_4e7ad0;
        case 0x4e7ad4u: goto label_4e7ad4;
        case 0x4e7ad8u: goto label_4e7ad8;
        case 0x4e7adcu: goto label_4e7adc;
        case 0x4e7ae0u: goto label_4e7ae0;
        case 0x4e7ae4u: goto label_4e7ae4;
        case 0x4e7ae8u: goto label_4e7ae8;
        case 0x4e7aecu: goto label_4e7aec;
        case 0x4e7af0u: goto label_4e7af0;
        case 0x4e7af4u: goto label_4e7af4;
        case 0x4e7af8u: goto label_4e7af8;
        case 0x4e7afcu: goto label_4e7afc;
        case 0x4e7b00u: goto label_4e7b00;
        case 0x4e7b04u: goto label_4e7b04;
        case 0x4e7b08u: goto label_4e7b08;
        case 0x4e7b0cu: goto label_4e7b0c;
        case 0x4e7b10u: goto label_4e7b10;
        case 0x4e7b14u: goto label_4e7b14;
        case 0x4e7b18u: goto label_4e7b18;
        case 0x4e7b1cu: goto label_4e7b1c;
        case 0x4e7b20u: goto label_4e7b20;
        case 0x4e7b24u: goto label_4e7b24;
        case 0x4e7b28u: goto label_4e7b28;
        case 0x4e7b2cu: goto label_4e7b2c;
        case 0x4e7b30u: goto label_4e7b30;
        case 0x4e7b34u: goto label_4e7b34;
        case 0x4e7b38u: goto label_4e7b38;
        case 0x4e7b3cu: goto label_4e7b3c;
        case 0x4e7b40u: goto label_4e7b40;
        case 0x4e7b44u: goto label_4e7b44;
        case 0x4e7b48u: goto label_4e7b48;
        case 0x4e7b4cu: goto label_4e7b4c;
        case 0x4e7b50u: goto label_4e7b50;
        case 0x4e7b54u: goto label_4e7b54;
        case 0x4e7b58u: goto label_4e7b58;
        case 0x4e7b5cu: goto label_4e7b5c;
        case 0x4e7b60u: goto label_4e7b60;
        case 0x4e7b64u: goto label_4e7b64;
        case 0x4e7b68u: goto label_4e7b68;
        case 0x4e7b6cu: goto label_4e7b6c;
        case 0x4e7b70u: goto label_4e7b70;
        case 0x4e7b74u: goto label_4e7b74;
        case 0x4e7b78u: goto label_4e7b78;
        case 0x4e7b7cu: goto label_4e7b7c;
        case 0x4e7b80u: goto label_4e7b80;
        case 0x4e7b84u: goto label_4e7b84;
        case 0x4e7b88u: goto label_4e7b88;
        case 0x4e7b8cu: goto label_4e7b8c;
        case 0x4e7b90u: goto label_4e7b90;
        case 0x4e7b94u: goto label_4e7b94;
        case 0x4e7b98u: goto label_4e7b98;
        case 0x4e7b9cu: goto label_4e7b9c;
        case 0x4e7ba0u: goto label_4e7ba0;
        case 0x4e7ba4u: goto label_4e7ba4;
        case 0x4e7ba8u: goto label_4e7ba8;
        case 0x4e7bacu: goto label_4e7bac;
        case 0x4e7bb0u: goto label_4e7bb0;
        case 0x4e7bb4u: goto label_4e7bb4;
        case 0x4e7bb8u: goto label_4e7bb8;
        case 0x4e7bbcu: goto label_4e7bbc;
        case 0x4e7bc0u: goto label_4e7bc0;
        case 0x4e7bc4u: goto label_4e7bc4;
        case 0x4e7bc8u: goto label_4e7bc8;
        case 0x4e7bccu: goto label_4e7bcc;
        case 0x4e7bd0u: goto label_4e7bd0;
        case 0x4e7bd4u: goto label_4e7bd4;
        case 0x4e7bd8u: goto label_4e7bd8;
        case 0x4e7bdcu: goto label_4e7bdc;
        case 0x4e7be0u: goto label_4e7be0;
        case 0x4e7be4u: goto label_4e7be4;
        case 0x4e7be8u: goto label_4e7be8;
        case 0x4e7becu: goto label_4e7bec;
        case 0x4e7bf0u: goto label_4e7bf0;
        case 0x4e7bf4u: goto label_4e7bf4;
        case 0x4e7bf8u: goto label_4e7bf8;
        case 0x4e7bfcu: goto label_4e7bfc;
        case 0x4e7c00u: goto label_4e7c00;
        case 0x4e7c04u: goto label_4e7c04;
        case 0x4e7c08u: goto label_4e7c08;
        case 0x4e7c0cu: goto label_4e7c0c;
        default: break;
    }

    ctx->pc = 0x4e79a0u;

label_4e79a0:
    // 0x4e79a0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4e79a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_4e79a4:
    // 0x4e79a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4e79a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4e79a8:
    // 0x4e79a8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4e79a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4e79ac:
    // 0x4e79ac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4e79acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4e79b0:
    // 0x4e79b0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4e79b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_4e79b4:
    // 0x4e79b4: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4e79b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4e79b8:
    // 0x4e79b8: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x4e79b8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4e79bc:
    // 0x4e79bc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4e79bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4e79c0:
    // 0x4e79c0: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x4e79c0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4e79c4:
    // 0x4e79c4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4e79c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4e79c8:
    // 0x4e79c8: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x4e79c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4e79cc:
    // 0x4e79cc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4e79ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4e79d0:
    // 0x4e79d0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4e79d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e79d4:
    // 0x4e79d4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4e79d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4e79d8:
    // 0x4e79d8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4e79d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4e79dc:
    // 0x4e79dc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4e79dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4e79e0:
    // 0x4e79e0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x4e79e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4e79e4:
    // 0x4e79e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e79e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e79e8:
    // 0x4e79e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4e79e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4e79ec:
    // 0x4e79ec: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4e79ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4e79f0:
    // 0x4e79f0: 0xa3ab00cf  sb          $t3, 0xCF($sp)
    ctx->pc = 0x4e79f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 207), (uint8_t)GPR_U32(ctx, 11));
label_4e79f4:
    // 0x4e79f4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4e79f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4e79f8:
    // 0x4e79f8: 0x90860194  lbu         $a2, 0x194($a0)
    ctx->pc = 0x4e79f8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 404)));
label_4e79fc:
    // 0x4e79fc: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x4e79fcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_4e7a00:
    // 0x4e7a00: 0x8c5089e0  lw          $s0, -0x7620($v0)
    ctx->pc = 0x4e7a00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4e7a04:
    // 0x4e7a04: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x4e7a04u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
label_4e7a08:
    // 0x4e7a08: 0x90840195  lbu         $a0, 0x195($a0)
    ctx->pc = 0x4e7a08u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 405)));
label_4e7a0c:
    // 0x4e7a0c: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4e7a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4e7a10:
    // 0x4e7a10: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x4e7a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_4e7a14:
    // 0x4e7a14: 0x10830036  beq         $a0, $v1, . + 4 + (0x36 << 2)
label_4e7a18:
    if (ctx->pc == 0x4E7A18u) {
        ctx->pc = 0x4E7A18u;
            // 0x4e7a18: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x4E7A1Cu;
        goto label_4e7a1c;
    }
    ctx->pc = 0x4E7A14u;
    {
        const bool branch_taken_0x4e7a14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x4E7A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7A14u;
            // 0x4e7a18: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7a14) {
            ctx->pc = 0x4E7AF0u;
            goto label_4e7af0;
        }
    }
    ctx->pc = 0x4E7A1Cu;
label_4e7a1c:
    // 0x4e7a1c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4e7a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4e7a20:
    // 0x4e7a20: 0x1082002b  beq         $a0, $v0, . + 4 + (0x2B << 2)
label_4e7a24:
    if (ctx->pc == 0x4E7A24u) {
        ctx->pc = 0x4E7A28u;
        goto label_4e7a28;
    }
    ctx->pc = 0x4E7A20u;
    {
        const bool branch_taken_0x4e7a20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e7a20) {
            ctx->pc = 0x4E7AD0u;
            goto label_4e7ad0;
        }
    }
    ctx->pc = 0x4E7A28u;
label_4e7a28:
    // 0x4e7a28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4e7a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e7a2c:
    // 0x4e7a2c: 0x50820016  beql        $a0, $v0, . + 4 + (0x16 << 2)
label_4e7a30:
    if (ctx->pc == 0x4E7A30u) {
        ctx->pc = 0x4E7A30u;
            // 0x4e7a30: 0x28a1001f  slti        $at, $a1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->pc = 0x4E7A34u;
        goto label_4e7a34;
    }
    ctx->pc = 0x4E7A2Cu;
    {
        const bool branch_taken_0x4e7a2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4e7a2c) {
            ctx->pc = 0x4E7A30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7A2Cu;
            // 0x4e7a30: 0x28a1001f  slti        $at, $a1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E7A88u;
            goto label_4e7a88;
        }
    }
    ctx->pc = 0x4E7A34u;
label_4e7a34:
    // 0x4e7a34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4e7a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e7a38:
    // 0x4e7a38: 0x1085000c  beq         $a0, $a1, . + 4 + (0xC << 2)
label_4e7a3c:
    if (ctx->pc == 0x4E7A3Cu) {
        ctx->pc = 0x4E7A40u;
        goto label_4e7a40;
    }
    ctx->pc = 0x4E7A38u;
    {
        const bool branch_taken_0x4e7a38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x4e7a38) {
            ctx->pc = 0x4E7A6Cu;
            goto label_4e7a6c;
        }
    }
    ctx->pc = 0x4E7A40u;
label_4e7a40:
    // 0x4e7a40: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4e7a44:
    if (ctx->pc == 0x4E7A44u) {
        ctx->pc = 0x4E7A48u;
        goto label_4e7a48;
    }
    ctx->pc = 0x4E7A40u;
    {
        const bool branch_taken_0x4e7a40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e7a40) {
            ctx->pc = 0x4E7A50u;
            goto label_4e7a50;
        }
    }
    ctx->pc = 0x4E7A48u;
label_4e7a48:
    // 0x4e7a48: 0x10000031  b           . + 4 + (0x31 << 2)
label_4e7a4c:
    if (ctx->pc == 0x4E7A4Cu) {
        ctx->pc = 0x4E7A4Cu;
            // 0x4e7a4c: 0x83a200cf  lb          $v0, 0xCF($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 207)));
        ctx->pc = 0x4E7A50u;
        goto label_4e7a50;
    }
    ctx->pc = 0x4E7A48u;
    {
        const bool branch_taken_0x4e7a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7A48u;
            // 0x4e7a4c: 0x83a200cf  lb          $v0, 0xCF($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 207)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7a48) {
            ctx->pc = 0x4E7B10u;
            goto label_4e7b10;
        }
    }
    ctx->pc = 0x4E7A50u;
label_4e7a50:
    // 0x4e7a50: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4e7a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4e7a54:
    // 0x4e7a54: 0xc0506ac  jal         func_141AB0
label_4e7a58:
    if (ctx->pc == 0x4E7A58u) {
        ctx->pc = 0x4E7A58u;
            // 0x4e7a58: 0x8c44aaa8  lw          $a0, -0x5558($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945448)));
        ctx->pc = 0x4E7A5Cu;
        goto label_4e7a5c;
    }
    ctx->pc = 0x4E7A54u;
    SET_GPR_U32(ctx, 31, 0x4E7A5Cu);
    ctx->pc = 0x4E7A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7A54u;
            // 0x4e7a58: 0x8c44aaa8  lw          $a0, -0x5558($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7A5Cu; }
        if (ctx->pc != 0x4E7A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7A5Cu; }
        if (ctx->pc != 0x4E7A5Cu) { return; }
    }
    ctx->pc = 0x4E7A5Cu;
label_4e7a5c:
    // 0x4e7a5c: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x4e7a5cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_4e7a60:
    // 0x4e7a60: 0x2411000a  addiu       $s1, $zero, 0xA
    ctx->pc = 0x4e7a60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4e7a64:
    // 0x4e7a64: 0x10000029  b           . + 4 + (0x29 << 2)
label_4e7a68:
    if (ctx->pc == 0x4E7A68u) {
        ctx->pc = 0x4E7A68u;
            // 0x4e7a68: 0x26528ec0  addiu       $s2, $s2, -0x7140 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938304));
        ctx->pc = 0x4E7A6Cu;
        goto label_4e7a6c;
    }
    ctx->pc = 0x4E7A64u;
    {
        const bool branch_taken_0x4e7a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7A64u;
            // 0x4e7a68: 0x26528ec0  addiu       $s2, $s2, -0x7140 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7a64) {
            ctx->pc = 0x4E7B0Cu;
            goto label_4e7b0c;
        }
    }
    ctx->pc = 0x4E7A6Cu;
label_4e7a6c:
    // 0x4e7a6c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4e7a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4e7a70:
    // 0x4e7a70: 0xc0506ac  jal         func_141AB0
label_4e7a74:
    if (ctx->pc == 0x4E7A74u) {
        ctx->pc = 0x4E7A74u;
            // 0x4e7a74: 0x8c44aaa8  lw          $a0, -0x5558($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945448)));
        ctx->pc = 0x4E7A78u;
        goto label_4e7a78;
    }
    ctx->pc = 0x4E7A70u;
    SET_GPR_U32(ctx, 31, 0x4E7A78u);
    ctx->pc = 0x4E7A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7A70u;
            // 0x4e7a74: 0x8c44aaa8  lw          $a0, -0x5558($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7A78u; }
        if (ctx->pc != 0x4E7A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7A78u; }
        if (ctx->pc != 0x4E7A78u) { return; }
    }
    ctx->pc = 0x4E7A78u;
label_4e7a78:
    // 0x4e7a78: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x4e7a78u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_4e7a7c:
    // 0x4e7a7c: 0x24110025  addiu       $s1, $zero, 0x25
    ctx->pc = 0x4e7a7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_4e7a80:
    // 0x4e7a80: 0x10000022  b           . + 4 + (0x22 << 2)
label_4e7a84:
    if (ctx->pc == 0x4E7A84u) {
        ctx->pc = 0x4E7A84u;
            // 0x4e7a84: 0x26528ec0  addiu       $s2, $s2, -0x7140 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938304));
        ctx->pc = 0x4E7A88u;
        goto label_4e7a88;
    }
    ctx->pc = 0x4E7A80u;
    {
        const bool branch_taken_0x4e7a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7A80u;
            // 0x4e7a84: 0x26528ec0  addiu       $s2, $s2, -0x7140 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7a80) {
            ctx->pc = 0x4E7B0Cu;
            goto label_4e7b0c;
        }
    }
    ctx->pc = 0x4E7A88u;
label_4e7a88:
    // 0x4e7a88: 0x50200009  beql        $at, $zero, . + 4 + (0x9 << 2)
label_4e7a8c:
    if (ctx->pc == 0x4E7A8Cu) {
        ctx->pc = 0x4E7A8Cu;
            // 0x4e7a8c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E7A90u;
        goto label_4e7a90;
    }
    ctx->pc = 0x4E7A88u;
    {
        const bool branch_taken_0x4e7a88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e7a88) {
            ctx->pc = 0x4E7A8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7A88u;
            // 0x4e7a8c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E7AB0u;
            goto label_4e7ab0;
        }
    }
    ctx->pc = 0x4E7A90u;
label_4e7a90:
    // 0x4e7a90: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4e7a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4e7a94:
    // 0x4e7a94: 0x8c44aaa8  lw          $a0, -0x5558($v0)
    ctx->pc = 0x4e7a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945448)));
label_4e7a98:
    // 0x4e7a98: 0xc0506ac  jal         func_141AB0
label_4e7a9c:
    if (ctx->pc == 0x4E7A9Cu) {
        ctx->pc = 0x4E7A9Cu;
            // 0x4e7a9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E7AA0u;
        goto label_4e7aa0;
    }
    ctx->pc = 0x4E7A98u;
    SET_GPR_U32(ctx, 31, 0x4E7AA0u);
    ctx->pc = 0x4E7A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7A98u;
            // 0x4e7a9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7AA0u; }
        if (ctx->pc != 0x4E7AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7AA0u; }
        if (ctx->pc != 0x4E7AA0u) { return; }
    }
    ctx->pc = 0x4E7AA0u;
label_4e7aa0:
    // 0x4e7aa0: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x4e7aa0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_4e7aa4:
    // 0x4e7aa4: 0x24110040  addiu       $s1, $zero, 0x40
    ctx->pc = 0x4e7aa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_4e7aa8:
    // 0x4e7aa8: 0x10000018  b           . + 4 + (0x18 << 2)
label_4e7aac:
    if (ctx->pc == 0x4E7AACu) {
        ctx->pc = 0x4E7AACu;
            // 0x4e7aac: 0x26528ec0  addiu       $s2, $s2, -0x7140 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938304));
        ctx->pc = 0x4E7AB0u;
        goto label_4e7ab0;
    }
    ctx->pc = 0x4E7AA8u;
    {
        const bool branch_taken_0x4e7aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7AA8u;
            // 0x4e7aac: 0x26528ec0  addiu       $s2, $s2, -0x7140 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7aa8) {
            ctx->pc = 0x4E7B0Cu;
            goto label_4e7b0c;
        }
    }
    ctx->pc = 0x4E7AB0u;
label_4e7ab0:
    // 0x4e7ab0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4e7ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4e7ab4:
    // 0x4e7ab4: 0x8c44aaa8  lw          $a0, -0x5558($v0)
    ctx->pc = 0x4e7ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945448)));
label_4e7ab8:
    // 0x4e7ab8: 0xc0506ac  jal         func_141AB0
label_4e7abc:
    if (ctx->pc == 0x4E7ABCu) {
        ctx->pc = 0x4E7ABCu;
            // 0x4e7abc: 0x2694ffec  addiu       $s4, $s4, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967276));
        ctx->pc = 0x4E7AC0u;
        goto label_4e7ac0;
    }
    ctx->pc = 0x4E7AB8u;
    SET_GPR_U32(ctx, 31, 0x4E7AC0u);
    ctx->pc = 0x4E7ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7AB8u;
            // 0x4e7abc: 0x2694ffec  addiu       $s4, $s4, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7AC0u; }
        if (ctx->pc != 0x4E7AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7AC0u; }
        if (ctx->pc != 0x4E7AC0u) { return; }
    }
    ctx->pc = 0x4E7AC0u;
label_4e7ac0:
    // 0x4e7ac0: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x4e7ac0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_4e7ac4:
    // 0x4e7ac4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4e7ac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e7ac8:
    // 0x4e7ac8: 0x10000010  b           . + 4 + (0x10 << 2)
label_4e7acc:
    if (ctx->pc == 0x4E7ACCu) {
        ctx->pc = 0x4E7ACCu;
            // 0x4e7acc: 0x26529400  addiu       $s2, $s2, -0x6C00 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294939648));
        ctx->pc = 0x4E7AD0u;
        goto label_4e7ad0;
    }
    ctx->pc = 0x4E7AC8u;
    {
        const bool branch_taken_0x4e7ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7AC8u;
            // 0x4e7acc: 0x26529400  addiu       $s2, $s2, -0x6C00 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294939648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7ac8) {
            ctx->pc = 0x4E7B0Cu;
            goto label_4e7b0c;
        }
    }
    ctx->pc = 0x4E7AD0u;
label_4e7ad0:
    // 0x4e7ad0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4e7ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4e7ad4:
    // 0x4e7ad4: 0x8c44aaa8  lw          $a0, -0x5558($v0)
    ctx->pc = 0x4e7ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945448)));
label_4e7ad8:
    // 0x4e7ad8: 0xc0506ac  jal         func_141AB0
label_4e7adc:
    if (ctx->pc == 0x4E7ADCu) {
        ctx->pc = 0x4E7ADCu;
            // 0x4e7adc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4E7AE0u;
        goto label_4e7ae0;
    }
    ctx->pc = 0x4E7AD8u;
    SET_GPR_U32(ctx, 31, 0x4E7AE0u);
    ctx->pc = 0x4E7ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7AD8u;
            // 0x4e7adc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7AE0u; }
        if (ctx->pc != 0x4E7AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7AE0u; }
        if (ctx->pc != 0x4E7AE0u) { return; }
    }
    ctx->pc = 0x4E7AE0u;
label_4e7ae0:
    // 0x4e7ae0: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x4e7ae0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_4e7ae4:
    // 0x4e7ae4: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x4e7ae4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4e7ae8:
    // 0x4e7ae8: 0x10000008  b           . + 4 + (0x8 << 2)
label_4e7aec:
    if (ctx->pc == 0x4E7AECu) {
        ctx->pc = 0x4E7AECu;
            // 0x4e7aec: 0x26529400  addiu       $s2, $s2, -0x6C00 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294939648));
        ctx->pc = 0x4E7AF0u;
        goto label_4e7af0;
    }
    ctx->pc = 0x4E7AE8u;
    {
        const bool branch_taken_0x4e7ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7AE8u;
            // 0x4e7aec: 0x26529400  addiu       $s2, $s2, -0x6C00 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294939648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7ae8) {
            ctx->pc = 0x4E7B0Cu;
            goto label_4e7b0c;
        }
    }
    ctx->pc = 0x4E7AF0u;
label_4e7af0:
    // 0x4e7af0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4e7af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4e7af4:
    // 0x4e7af4: 0x8c44aaa8  lw          $a0, -0x5558($v0)
    ctx->pc = 0x4e7af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945448)));
label_4e7af8:
    // 0x4e7af8: 0xc0506ac  jal         func_141AB0
label_4e7afc:
    if (ctx->pc == 0x4E7AFCu) {
        ctx->pc = 0x4E7AFCu;
            // 0x4e7afc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4E7B00u;
        goto label_4e7b00;
    }
    ctx->pc = 0x4E7AF8u;
    SET_GPR_U32(ctx, 31, 0x4E7B00u);
    ctx->pc = 0x4E7AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7AF8u;
            // 0x4e7afc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7B00u; }
        if (ctx->pc != 0x4E7B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7B00u; }
        if (ctx->pc != 0x4E7B00u) { return; }
    }
    ctx->pc = 0x4E7B00u;
label_4e7b00:
    // 0x4e7b00: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x4e7b00u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_4e7b04:
    // 0x4e7b04: 0x24110022  addiu       $s1, $zero, 0x22
    ctx->pc = 0x4e7b04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_4e7b08:
    // 0x4e7b08: 0x26529400  addiu       $s2, $s2, -0x6C00
    ctx->pc = 0x4e7b08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294939648));
label_4e7b0c:
    // 0x4e7b0c: 0x83a200cf  lb          $v0, 0xCF($sp)
    ctx->pc = 0x4e7b0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 207)));
label_4e7b10:
    // 0x4e7b10: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x4e7b10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e7b14:
    // 0x4e7b14: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_4e7b18:
    if (ctx->pc == 0x4E7B18u) {
        ctx->pc = 0x4E7B1Cu;
        goto label_4e7b1c;
    }
    ctx->pc = 0x4E7B14u;
    {
        const bool branch_taken_0x4e7b14 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4e7b14) {
            ctx->pc = 0x4E7B2Cu;
            goto label_4e7b2c;
        }
    }
    ctx->pc = 0x4E7B1Cu;
label_4e7b1c:
    // 0x4e7b1c: 0xc6a00134  lwc1        $f0, 0x134($s5)
    ctx->pc = 0x4e7b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e7b20:
    // 0x4e7b20: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x4e7b20u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_4e7b24:
    // 0x4e7b24: 0x1000000a  b           . + 4 + (0xA << 2)
label_4e7b28:
    if (ctx->pc == 0x4E7B28u) {
        ctx->pc = 0x4E7B28u;
            // 0x4e7b28: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x4E7B2Cu;
        goto label_4e7b2c;
    }
    ctx->pc = 0x4E7B24u;
    {
        const bool branch_taken_0x4e7b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7B24u;
            // 0x4e7b28: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7b24) {
            ctx->pc = 0x4E7B50u;
            goto label_4e7b50;
        }
    }
    ctx->pc = 0x4E7B2Cu;
label_4e7b2c:
    // 0x4e7b2c: 0x4430009  bgezl       $v0, . + 4 + (0x9 << 2)
label_4e7b30:
    if (ctx->pc == 0x4E7B30u) {
        ctx->pc = 0x4E7B30u;
            // 0x4e7b30: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4E7B34u;
        goto label_4e7b34;
    }
    ctx->pc = 0x4E7B2Cu;
    {
        const bool branch_taken_0x4e7b2c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4e7b2c) {
            ctx->pc = 0x4E7B30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7B2Cu;
            // 0x4e7b30: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E7B54u;
            goto label_4e7b54;
        }
    }
    ctx->pc = 0x4E7B34u;
label_4e7b34:
    // 0x4e7b34: 0xc6a10134  lwc1        $f1, 0x134($s5)
    ctx->pc = 0x4e7b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e7b38:
    // 0x4e7b38: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x4e7b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_4e7b3c:
    // 0x4e7b3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4e7b3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e7b40:
    // 0x4e7b40: 0x0  nop
    ctx->pc = 0x4e7b40u;
    // NOP
label_4e7b44:
    // 0x4e7b44: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4e7b44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_4e7b48:
    // 0x4e7b48: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x4e7b48u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_4e7b4c:
    // 0x4e7b4c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x4e7b4cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_4e7b50:
    // 0x4e7b50: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4e7b50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e7b54:
    // 0x4e7b54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e7b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e7b58:
    // 0x4e7b58: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4e7b58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4e7b5c:
    // 0x4e7b5c: 0x320f809  jalr        $t9
label_4e7b60:
    if (ctx->pc == 0x4E7B60u) {
        ctx->pc = 0x4E7B60u;
            // 0x4e7b60: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4E7B64u;
        goto label_4e7b64;
    }
    ctx->pc = 0x4E7B5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E7B64u);
        ctx->pc = 0x4E7B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7B5Cu;
            // 0x4e7b60: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E7B64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E7B64u; }
            if (ctx->pc != 0x4E7B64u) { return; }
        }
        }
    }
    ctx->pc = 0x4E7B64u;
label_4e7b64:
    // 0x4e7b64: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x4e7b64u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e7b68:
    // 0x4e7b68: 0x2341021  addu        $v0, $s1, $s4
    ctx->pc = 0x4e7b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_4e7b6c:
    // 0x4e7b6c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x4e7b6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4e7b70:
    // 0x4e7b70: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4e7b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4e7b74:
    // 0x4e7b74: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x4e7b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4e7b78:
    // 0x4e7b78: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x4e7b78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_4e7b7c:
    // 0x4e7b7c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4e7b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4e7b80:
    // 0x4e7b80: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4e7b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4e7b84:
    // 0x4e7b84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4e7b84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e7b88:
    // 0x4e7b88: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x4e7b88u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e7b8c:
    // 0x4e7b8c: 0x0  nop
    ctx->pc = 0x4e7b8cu;
    // NOP
label_4e7b90:
    // 0x4e7b90: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4e7b90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4e7b94:
    // 0x4e7b94: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x4e7b94u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e7b98:
    // 0x4e7b98: 0x0  nop
    ctx->pc = 0x4e7b98u;
    // NOP
label_4e7b9c:
    // 0x4e7b9c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4e7b9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4e7ba0:
    // 0x4e7ba0: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x4e7ba0u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e7ba4:
    // 0x4e7ba4: 0x0  nop
    ctx->pc = 0x4e7ba4u;
    // NOP
label_4e7ba8:
    // 0x4e7ba8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4e7ba8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4e7bac:
    // 0x4e7bac: 0x46151301  sub.s       $f12, $f2, $f21
    ctx->pc = 0x4e7bacu;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[21]);
label_4e7bb0:
    // 0x4e7bb0: 0x46151380  add.s       $f14, $f2, $f21
    ctx->pc = 0x4e7bb0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[2], ctx->f[21]);
label_4e7bb4:
    // 0x4e7bb4: 0x46140b41  sub.s       $f13, $f1, $f20
    ctx->pc = 0x4e7bb4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_4e7bb8:
    // 0x4e7bb8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4e7bb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4e7bbc:
    // 0x4e7bbc: 0xc0bc284  jal         func_2F0A10
label_4e7bc0:
    if (ctx->pc == 0x4E7BC0u) {
        ctx->pc = 0x4E7BC0u;
            // 0x4e7bc0: 0x46140bc0  add.s       $f15, $f1, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
        ctx->pc = 0x4E7BC4u;
        goto label_4e7bc4;
    }
    ctx->pc = 0x4E7BBCu;
    SET_GPR_U32(ctx, 31, 0x4E7BC4u);
    ctx->pc = 0x4E7BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7BBCu;
            // 0x4e7bc0: 0x46140bc0  add.s       $f15, $f1, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7BC4u; }
        if (ctx->pc != 0x4E7BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E7BC4u; }
        if (ctx->pc != 0x4E7BC4u) { return; }
    }
    ctx->pc = 0x4E7BC4u;
label_4e7bc4:
    // 0x4e7bc4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4e7bc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e7bc8:
    // 0x4e7bc8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4e7bc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4e7bcc:
    // 0x4e7bcc: 0x320f809  jalr        $t9
label_4e7bd0:
    if (ctx->pc == 0x4E7BD0u) {
        ctx->pc = 0x4E7BD0u;
            // 0x4e7bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E7BD4u;
        goto label_4e7bd4;
    }
    ctx->pc = 0x4E7BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E7BD4u);
        ctx->pc = 0x4E7BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7BCCu;
            // 0x4e7bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E7BD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E7BD4u; }
            if (ctx->pc != 0x4E7BD4u) { return; }
        }
        }
    }
    ctx->pc = 0x4E7BD4u;
label_4e7bd4:
    // 0x4e7bd4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4e7bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4e7bd8:
    // 0x4e7bd8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4e7bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4e7bdc:
    // 0x4e7bdc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4e7bdcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4e7be0:
    // 0x4e7be0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4e7be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4e7be4:
    // 0x4e7be4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4e7be4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4e7be8:
    // 0x4e7be8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4e7be8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4e7bec:
    // 0x4e7bec: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4e7becu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4e7bf0:
    // 0x4e7bf0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4e7bf0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4e7bf4:
    // 0x4e7bf4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4e7bf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e7bf8:
    // 0x4e7bf8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4e7bf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e7bfc:
    // 0x4e7bfc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e7bfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e7c00:
    // 0x4e7c00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4e7c00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e7c04:
    // 0x4e7c04: 0x3e00008  jr          $ra
label_4e7c08:
    if (ctx->pc == 0x4E7C08u) {
        ctx->pc = 0x4E7C08u;
            // 0x4e7c08: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x4E7C0Cu;
        goto label_4e7c0c;
    }
    ctx->pc = 0x4E7C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E7C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E7C04u;
            // 0x4e7c08: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E7C0Cu;
label_4e7c0c:
    // 0x4e7c0c: 0x0  nop
    ctx->pc = 0x4e7c0cu;
    // NOP
}
