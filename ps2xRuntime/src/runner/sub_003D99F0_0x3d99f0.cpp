#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D99F0
// Address: 0x3d99f0 - 0x3d9c10
void sub_003D99F0_0x3d99f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D99F0_0x3d99f0");
#endif

    switch (ctx->pc) {
        case 0x3d99f0u: goto label_3d99f0;
        case 0x3d99f4u: goto label_3d99f4;
        case 0x3d99f8u: goto label_3d99f8;
        case 0x3d99fcu: goto label_3d99fc;
        case 0x3d9a00u: goto label_3d9a00;
        case 0x3d9a04u: goto label_3d9a04;
        case 0x3d9a08u: goto label_3d9a08;
        case 0x3d9a0cu: goto label_3d9a0c;
        case 0x3d9a10u: goto label_3d9a10;
        case 0x3d9a14u: goto label_3d9a14;
        case 0x3d9a18u: goto label_3d9a18;
        case 0x3d9a1cu: goto label_3d9a1c;
        case 0x3d9a20u: goto label_3d9a20;
        case 0x3d9a24u: goto label_3d9a24;
        case 0x3d9a28u: goto label_3d9a28;
        case 0x3d9a2cu: goto label_3d9a2c;
        case 0x3d9a30u: goto label_3d9a30;
        case 0x3d9a34u: goto label_3d9a34;
        case 0x3d9a38u: goto label_3d9a38;
        case 0x3d9a3cu: goto label_3d9a3c;
        case 0x3d9a40u: goto label_3d9a40;
        case 0x3d9a44u: goto label_3d9a44;
        case 0x3d9a48u: goto label_3d9a48;
        case 0x3d9a4cu: goto label_3d9a4c;
        case 0x3d9a50u: goto label_3d9a50;
        case 0x3d9a54u: goto label_3d9a54;
        case 0x3d9a58u: goto label_3d9a58;
        case 0x3d9a5cu: goto label_3d9a5c;
        case 0x3d9a60u: goto label_3d9a60;
        case 0x3d9a64u: goto label_3d9a64;
        case 0x3d9a68u: goto label_3d9a68;
        case 0x3d9a6cu: goto label_3d9a6c;
        case 0x3d9a70u: goto label_3d9a70;
        case 0x3d9a74u: goto label_3d9a74;
        case 0x3d9a78u: goto label_3d9a78;
        case 0x3d9a7cu: goto label_3d9a7c;
        case 0x3d9a80u: goto label_3d9a80;
        case 0x3d9a84u: goto label_3d9a84;
        case 0x3d9a88u: goto label_3d9a88;
        case 0x3d9a8cu: goto label_3d9a8c;
        case 0x3d9a90u: goto label_3d9a90;
        case 0x3d9a94u: goto label_3d9a94;
        case 0x3d9a98u: goto label_3d9a98;
        case 0x3d9a9cu: goto label_3d9a9c;
        case 0x3d9aa0u: goto label_3d9aa0;
        case 0x3d9aa4u: goto label_3d9aa4;
        case 0x3d9aa8u: goto label_3d9aa8;
        case 0x3d9aacu: goto label_3d9aac;
        case 0x3d9ab0u: goto label_3d9ab0;
        case 0x3d9ab4u: goto label_3d9ab4;
        case 0x3d9ab8u: goto label_3d9ab8;
        case 0x3d9abcu: goto label_3d9abc;
        case 0x3d9ac0u: goto label_3d9ac0;
        case 0x3d9ac4u: goto label_3d9ac4;
        case 0x3d9ac8u: goto label_3d9ac8;
        case 0x3d9accu: goto label_3d9acc;
        case 0x3d9ad0u: goto label_3d9ad0;
        case 0x3d9ad4u: goto label_3d9ad4;
        case 0x3d9ad8u: goto label_3d9ad8;
        case 0x3d9adcu: goto label_3d9adc;
        case 0x3d9ae0u: goto label_3d9ae0;
        case 0x3d9ae4u: goto label_3d9ae4;
        case 0x3d9ae8u: goto label_3d9ae8;
        case 0x3d9aecu: goto label_3d9aec;
        case 0x3d9af0u: goto label_3d9af0;
        case 0x3d9af4u: goto label_3d9af4;
        case 0x3d9af8u: goto label_3d9af8;
        case 0x3d9afcu: goto label_3d9afc;
        case 0x3d9b00u: goto label_3d9b00;
        case 0x3d9b04u: goto label_3d9b04;
        case 0x3d9b08u: goto label_3d9b08;
        case 0x3d9b0cu: goto label_3d9b0c;
        case 0x3d9b10u: goto label_3d9b10;
        case 0x3d9b14u: goto label_3d9b14;
        case 0x3d9b18u: goto label_3d9b18;
        case 0x3d9b1cu: goto label_3d9b1c;
        case 0x3d9b20u: goto label_3d9b20;
        case 0x3d9b24u: goto label_3d9b24;
        case 0x3d9b28u: goto label_3d9b28;
        case 0x3d9b2cu: goto label_3d9b2c;
        case 0x3d9b30u: goto label_3d9b30;
        case 0x3d9b34u: goto label_3d9b34;
        case 0x3d9b38u: goto label_3d9b38;
        case 0x3d9b3cu: goto label_3d9b3c;
        case 0x3d9b40u: goto label_3d9b40;
        case 0x3d9b44u: goto label_3d9b44;
        case 0x3d9b48u: goto label_3d9b48;
        case 0x3d9b4cu: goto label_3d9b4c;
        case 0x3d9b50u: goto label_3d9b50;
        case 0x3d9b54u: goto label_3d9b54;
        case 0x3d9b58u: goto label_3d9b58;
        case 0x3d9b5cu: goto label_3d9b5c;
        case 0x3d9b60u: goto label_3d9b60;
        case 0x3d9b64u: goto label_3d9b64;
        case 0x3d9b68u: goto label_3d9b68;
        case 0x3d9b6cu: goto label_3d9b6c;
        case 0x3d9b70u: goto label_3d9b70;
        case 0x3d9b74u: goto label_3d9b74;
        case 0x3d9b78u: goto label_3d9b78;
        case 0x3d9b7cu: goto label_3d9b7c;
        case 0x3d9b80u: goto label_3d9b80;
        case 0x3d9b84u: goto label_3d9b84;
        case 0x3d9b88u: goto label_3d9b88;
        case 0x3d9b8cu: goto label_3d9b8c;
        case 0x3d9b90u: goto label_3d9b90;
        case 0x3d9b94u: goto label_3d9b94;
        case 0x3d9b98u: goto label_3d9b98;
        case 0x3d9b9cu: goto label_3d9b9c;
        case 0x3d9ba0u: goto label_3d9ba0;
        case 0x3d9ba4u: goto label_3d9ba4;
        case 0x3d9ba8u: goto label_3d9ba8;
        case 0x3d9bacu: goto label_3d9bac;
        case 0x3d9bb0u: goto label_3d9bb0;
        case 0x3d9bb4u: goto label_3d9bb4;
        case 0x3d9bb8u: goto label_3d9bb8;
        case 0x3d9bbcu: goto label_3d9bbc;
        case 0x3d9bc0u: goto label_3d9bc0;
        case 0x3d9bc4u: goto label_3d9bc4;
        case 0x3d9bc8u: goto label_3d9bc8;
        case 0x3d9bccu: goto label_3d9bcc;
        case 0x3d9bd0u: goto label_3d9bd0;
        case 0x3d9bd4u: goto label_3d9bd4;
        case 0x3d9bd8u: goto label_3d9bd8;
        case 0x3d9bdcu: goto label_3d9bdc;
        case 0x3d9be0u: goto label_3d9be0;
        case 0x3d9be4u: goto label_3d9be4;
        case 0x3d9be8u: goto label_3d9be8;
        case 0x3d9becu: goto label_3d9bec;
        case 0x3d9bf0u: goto label_3d9bf0;
        case 0x3d9bf4u: goto label_3d9bf4;
        case 0x3d9bf8u: goto label_3d9bf8;
        case 0x3d9bfcu: goto label_3d9bfc;
        case 0x3d9c00u: goto label_3d9c00;
        case 0x3d9c04u: goto label_3d9c04;
        case 0x3d9c08u: goto label_3d9c08;
        case 0x3d9c0cu: goto label_3d9c0c;
        default: break;
    }

    ctx->pc = 0x3d99f0u;

label_3d99f0:
    // 0x3d99f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d99f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3d99f4:
    // 0x3d99f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d99f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d99f8:
    // 0x3d99f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d99f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3d99fc:
    // 0x3d99fc: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x3d99fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_3d9a00:
    // 0x3d9a00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d9a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d9a04:
    // 0x3d9a04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d9a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d9a08:
    // 0x3d9a08: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3d9a08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d9a0c:
    // 0x3d9a0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d9a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d9a10:
    // 0x3d9a10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d9a10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d9a14:
    // 0x3d9a14: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3d9a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3d9a18:
    // 0x3d9a18: 0xc0a7a88  jal         func_29EA20
label_3d9a1c:
    if (ctx->pc == 0x3D9A1Cu) {
        ctx->pc = 0x3D9A1Cu;
            // 0x3d9a1c: 0x24050220  addiu       $a1, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->pc = 0x3D9A20u;
        goto label_3d9a20;
    }
    ctx->pc = 0x3D9A18u;
    SET_GPR_U32(ctx, 31, 0x3D9A20u);
    ctx->pc = 0x3D9A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9A18u;
            // 0x3d9a1c: 0x24050220  addiu       $a1, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9A20u; }
        if (ctx->pc != 0x3D9A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9A20u; }
        if (ctx->pc != 0x3D9A20u) { return; }
    }
    ctx->pc = 0x3D9A20u;
label_3d9a20:
    // 0x3d9a20: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x3d9a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_3d9a24:
    // 0x3d9a24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d9a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d9a28:
    // 0x3d9a28: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_3d9a2c:
    if (ctx->pc == 0x3D9A2Cu) {
        ctx->pc = 0x3D9A2Cu;
            // 0x3d9a2c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3D9A30u;
        goto label_3d9a30;
    }
    ctx->pc = 0x3D9A28u;
    {
        const bool branch_taken_0x3d9a28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9A28u;
            // 0x3d9a2c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9a28) {
            ctx->pc = 0x3D9A78u;
            goto label_3d9a78;
        }
    }
    ctx->pc = 0x3D9A30u;
label_3d9a30:
    // 0x3d9a30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d9a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d9a34:
    // 0x3d9a34: 0xc088ef4  jal         func_223BD0
label_3d9a38:
    if (ctx->pc == 0x3D9A38u) {
        ctx->pc = 0x3D9A38u;
            // 0x3d9a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D9A3Cu;
        goto label_3d9a3c;
    }
    ctx->pc = 0x3D9A34u;
    SET_GPR_U32(ctx, 31, 0x3D9A3Cu);
    ctx->pc = 0x3D9A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9A34u;
            // 0x3d9a38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9A3Cu; }
        if (ctx->pc != 0x3D9A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9A3Cu; }
        if (ctx->pc != 0x3D9A3Cu) { return; }
    }
    ctx->pc = 0x3D9A3Cu;
label_3d9a3c:
    // 0x3d9a3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3d9a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3d9a40:
    // 0x3d9a40: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3d9a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3d9a44:
    // 0x3d9a44: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x3d9a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_3d9a48:
    // 0x3d9a48: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x3d9a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_3d9a4c:
    // 0x3d9a4c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3d9a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3d9a50:
    // 0x3d9a50: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x3d9a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_3d9a54:
    // 0x3d9a54: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d9a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d9a58:
    // 0x3d9a58: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3d9a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3d9a5c:
    // 0x3d9a5c: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x3d9a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_3d9a60:
    // 0x3d9a60: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x3d9a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_3d9a64:
    // 0x3d9a64: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3d9a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_3d9a68:
    // 0x3d9a68: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3d9a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3d9a6c:
    // 0x3d9a6c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x3d9a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3d9a70:
    // 0x3d9a70: 0xc088b38  jal         func_222CE0
label_3d9a74:
    if (ctx->pc == 0x3D9A74u) {
        ctx->pc = 0x3D9A74u;
            // 0x3d9a74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D9A78u;
        goto label_3d9a78;
    }
    ctx->pc = 0x3D9A70u;
    SET_GPR_U32(ctx, 31, 0x3D9A78u);
    ctx->pc = 0x3D9A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9A70u;
            // 0x3d9a74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9A78u; }
        if (ctx->pc != 0x3D9A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9A78u; }
        if (ctx->pc != 0x3D9A78u) { return; }
    }
    ctx->pc = 0x3D9A78u;
label_3d9a78:
    // 0x3d9a78: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x3d9a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_3d9a7c:
    // 0x3d9a7c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d9a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d9a80:
    // 0x3d9a80: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3d9a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3d9a84:
    // 0x3d9a84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d9a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d9a88:
    // 0x3d9a88: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3d9a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d9a8c:
    // 0x3d9a8c: 0xc08c164  jal         func_230590
label_3d9a90:
    if (ctx->pc == 0x3D9A90u) {
        ctx->pc = 0x3D9A90u;
            // 0x3d9a90: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D9A94u;
        goto label_3d9a94;
    }
    ctx->pc = 0x3D9A8Cu;
    SET_GPR_U32(ctx, 31, 0x3D9A94u);
    ctx->pc = 0x3D9A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9A8Cu;
            // 0x3d9a90: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9A94u; }
        if (ctx->pc != 0x3D9A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9A94u; }
        if (ctx->pc != 0x3D9A94u) { return; }
    }
    ctx->pc = 0x3D9A94u;
label_3d9a94:
    // 0x3d9a94: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x3d9a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_3d9a98:
    // 0x3d9a98: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x3d9a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3d9a9c:
    // 0x3d9a9c: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x3d9a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_3d9aa0:
    // 0x3d9aa0: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x3d9aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_3d9aa4:
    // 0x3d9aa4: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
label_3d9aa8:
    if (ctx->pc == 0x3D9AA8u) {
        ctx->pc = 0x3D9AA8u;
            // 0x3d9aa8: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->pc = 0x3D9AACu;
        goto label_3d9aac;
    }
    ctx->pc = 0x3D9AA4u;
    {
        const bool branch_taken_0x3d9aa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d9aa4) {
            ctx->pc = 0x3D9AA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9AA4u;
            // 0x3d9aa8: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D9ABCu;
            goto label_3d9abc;
        }
    }
    ctx->pc = 0x3D9AACu;
label_3d9aac:
    // 0x3d9aac: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3d9aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3d9ab0:
    // 0x3d9ab0: 0xc0a728c  jal         func_29CA30
label_3d9ab4:
    if (ctx->pc == 0x3D9AB4u) {
        ctx->pc = 0x3D9AB4u;
            // 0x3d9ab4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3D9AB8u;
        goto label_3d9ab8;
    }
    ctx->pc = 0x3D9AB0u;
    SET_GPR_U32(ctx, 31, 0x3D9AB8u);
    ctx->pc = 0x3D9AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9AB0u;
            // 0x3d9ab4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9AB8u; }
        if (ctx->pc != 0x3D9AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9AB8u; }
        if (ctx->pc != 0x3D9AB8u) { return; }
    }
    ctx->pc = 0x3D9AB8u;
label_3d9ab8:
    // 0x3d9ab8: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x3d9ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3d9abc:
    // 0x3d9abc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3d9abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3d9ac0:
    // 0x3d9ac0: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x3d9ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
label_3d9ac4:
    // 0x3d9ac4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3d9ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3d9ac8:
    // 0x3d9ac8: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x3d9ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3d9acc:
    // 0x3d9acc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d9accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3d9ad0:
    // 0x3d9ad0: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x3d9ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_3d9ad4:
    // 0x3d9ad4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d9ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3d9ad8:
    // 0x3d9ad8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d9ad8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d9adc:
    // 0x3d9adc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d9adcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d9ae0:
    // 0x3d9ae0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d9ae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d9ae4:
    // 0x3d9ae4: 0x3e00008  jr          $ra
label_3d9ae8:
    if (ctx->pc == 0x3D9AE8u) {
        ctx->pc = 0x3D9AE8u;
            // 0x3d9ae8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3D9AECu;
        goto label_3d9aec;
    }
    ctx->pc = 0x3D9AE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9AE4u;
            // 0x3d9ae8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D9AECu;
label_3d9aec:
    // 0x3d9aec: 0x0  nop
    ctx->pc = 0x3d9aecu;
    // NOP
label_3d9af0:
    // 0x3d9af0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d9af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3d9af4:
    // 0x3d9af4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3d9af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3d9af8:
    // 0x3d9af8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3d9af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3d9afc:
    // 0x3d9afc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d9afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3d9b00:
    // 0x3d9b00: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3d9b00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d9b04:
    // 0x3d9b04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d9b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3d9b08:
    // 0x3d9b08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d9b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d9b0c:
    // 0x3d9b0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d9b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d9b10:
    // 0x3d9b10: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x3d9b10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3d9b14:
    // 0x3d9b14: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_3d9b18:
    if (ctx->pc == 0x3D9B18u) {
        ctx->pc = 0x3D9B18u;
            // 0x3d9b18: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D9B1Cu;
        goto label_3d9b1c;
    }
    ctx->pc = 0x3D9B14u;
    {
        const bool branch_taken_0x3d9b14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9B14u;
            // 0x3d9b18: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9b14) {
            ctx->pc = 0x3D9B58u;
            goto label_3d9b58;
        }
    }
    ctx->pc = 0x3D9B1Cu;
label_3d9b1c:
    // 0x3d9b1c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3d9b1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d9b20:
    // 0x3d9b20: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3d9b20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d9b24:
    // 0x3d9b24: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3d9b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d9b28:
    // 0x3d9b28: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x3d9b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_3d9b2c:
    // 0x3d9b2c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3d9b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3d9b30:
    // 0x3d9b30: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3d9b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d9b34:
    // 0x3d9b34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d9b34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d9b38:
    // 0x3d9b38: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3d9b38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3d9b3c:
    // 0x3d9b3c: 0x320f809  jalr        $t9
label_3d9b40:
    if (ctx->pc == 0x3D9B40u) {
        ctx->pc = 0x3D9B44u;
        goto label_3d9b44;
    }
    ctx->pc = 0x3D9B3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D9B44u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D9B44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D9B44u; }
            if (ctx->pc != 0x3D9B44u) { return; }
        }
        }
    }
    ctx->pc = 0x3D9B44u;
label_3d9b44:
    // 0x3d9b44: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x3d9b44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3d9b48:
    // 0x3d9b48: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3d9b48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3d9b4c:
    // 0x3d9b4c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x3d9b4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3d9b50:
    // 0x3d9b50: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_3d9b54:
    if (ctx->pc == 0x3D9B54u) {
        ctx->pc = 0x3D9B54u;
            // 0x3d9b54: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3D9B58u;
        goto label_3d9b58;
    }
    ctx->pc = 0x3D9B50u;
    {
        const bool branch_taken_0x3d9b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D9B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9B50u;
            // 0x3d9b54: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9b50) {
            ctx->pc = 0x3D9B28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3d9b28;
        }
    }
    ctx->pc = 0x3D9B58u;
label_3d9b58:
    // 0x3d9b58: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3d9b58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d9b5c:
    // 0x3d9b5c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3d9b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3d9b60:
    // 0x3d9b60: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3d9b60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d9b64:
    // 0x3d9b64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d9b64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d9b68:
    // 0x3d9b68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d9b68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d9b6c:
    // 0x3d9b6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d9b6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d9b70:
    // 0x3d9b70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d9b70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d9b74:
    // 0x3d9b74: 0x3e00008  jr          $ra
label_3d9b78:
    if (ctx->pc == 0x3D9B78u) {
        ctx->pc = 0x3D9B78u;
            // 0x3d9b78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3D9B7Cu;
        goto label_3d9b7c;
    }
    ctx->pc = 0x3D9B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9B74u;
            // 0x3d9b78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D9B7Cu;
label_3d9b7c:
    // 0x3d9b7c: 0x0  nop
    ctx->pc = 0x3d9b7cu;
    // NOP
label_3d9b80:
    // 0x3d9b80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d9b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3d9b84:
    // 0x3d9b84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d9b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3d9b88:
    // 0x3d9b88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d9b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d9b8c:
    // 0x3d9b8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d9b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d9b90:
    // 0x3d9b90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d9b90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d9b94:
    // 0x3d9b94: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_3d9b98:
    if (ctx->pc == 0x3D9B98u) {
        ctx->pc = 0x3D9B98u;
            // 0x3d9b98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D9B9Cu;
        goto label_3d9b9c;
    }
    ctx->pc = 0x3D9B94u;
    {
        const bool branch_taken_0x3d9b94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9B94u;
            // 0x3d9b98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9b94) {
            ctx->pc = 0x3D9BF0u;
            goto label_3d9bf0;
        }
    }
    ctx->pc = 0x3D9B9Cu;
label_3d9b9c:
    // 0x3d9b9c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d9b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3d9ba0:
    // 0x3d9ba0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d9ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3d9ba4:
    // 0x3d9ba4: 0x24639790  addiu       $v1, $v1, -0x6870
    ctx->pc = 0x3d9ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940560));
label_3d9ba8:
    // 0x3d9ba8: 0x244297c8  addiu       $v0, $v0, -0x6838
    ctx->pc = 0x3d9ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940616));
label_3d9bac:
    // 0x3d9bac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3d9bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3d9bb0:
    // 0x3d9bb0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_3d9bb4:
    if (ctx->pc == 0x3D9BB4u) {
        ctx->pc = 0x3D9BB4u;
            // 0x3d9bb4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x3D9BB8u;
        goto label_3d9bb8;
    }
    ctx->pc = 0x3D9BB0u;
    {
        const bool branch_taken_0x3d9bb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9BB0u;
            // 0x3d9bb4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9bb0) {
            ctx->pc = 0x3D9BD8u;
            goto label_3d9bd8;
        }
    }
    ctx->pc = 0x3D9BB8u;
label_3d9bb8:
    // 0x3d9bb8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3d9bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3d9bbc:
    // 0x3d9bbc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3d9bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3d9bc0:
    // 0x3d9bc0: 0x24639890  addiu       $v1, $v1, -0x6770
    ctx->pc = 0x3d9bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940816));
label_3d9bc4:
    // 0x3d9bc4: 0x244298c8  addiu       $v0, $v0, -0x6738
    ctx->pc = 0x3d9bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940872));
label_3d9bc8:
    // 0x3d9bc8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3d9bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3d9bcc:
    // 0x3d9bcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d9bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d9bd0:
    // 0x3d9bd0: 0xc0f6704  jal         func_3D9C10
label_3d9bd4:
    if (ctx->pc == 0x3D9BD4u) {
        ctx->pc = 0x3D9BD4u;
            // 0x3d9bd4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x3D9BD8u;
        goto label_3d9bd8;
    }
    ctx->pc = 0x3D9BD0u;
    SET_GPR_U32(ctx, 31, 0x3D9BD8u);
    ctx->pc = 0x3D9BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9BD0u;
            // 0x3d9bd4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D9C10u;
    if (runtime->hasFunction(0x3D9C10u)) {
        auto targetFn = runtime->lookupFunction(0x3D9C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9BD8u; }
        if (ctx->pc != 0x3D9BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D9C10_0x3d9c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9BD8u; }
        if (ctx->pc != 0x3D9BD8u) { return; }
    }
    ctx->pc = 0x3D9BD8u;
label_3d9bd8:
    // 0x3d9bd8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3d9bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_3d9bdc:
    // 0x3d9bdc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3d9bdcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3d9be0:
    // 0x3d9be0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3d9be4:
    if (ctx->pc == 0x3D9BE4u) {
        ctx->pc = 0x3D9BE4u;
            // 0x3d9be4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D9BE8u;
        goto label_3d9be8;
    }
    ctx->pc = 0x3D9BE0u;
    {
        const bool branch_taken_0x3d9be0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3d9be0) {
            ctx->pc = 0x3D9BE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9BE0u;
            // 0x3d9be4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D9BF4u;
            goto label_3d9bf4;
        }
    }
    ctx->pc = 0x3D9BE8u;
label_3d9be8:
    // 0x3d9be8: 0xc0400a8  jal         func_1002A0
label_3d9bec:
    if (ctx->pc == 0x3D9BECu) {
        ctx->pc = 0x3D9BECu;
            // 0x3d9bec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D9BF0u;
        goto label_3d9bf0;
    }
    ctx->pc = 0x3D9BE8u;
    SET_GPR_U32(ctx, 31, 0x3D9BF0u);
    ctx->pc = 0x3D9BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9BE8u;
            // 0x3d9bec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9BF0u; }
        if (ctx->pc != 0x3D9BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9BF0u; }
        if (ctx->pc != 0x3D9BF0u) { return; }
    }
    ctx->pc = 0x3D9BF0u;
label_3d9bf0:
    // 0x3d9bf0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d9bf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d9bf4:
    // 0x3d9bf4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d9bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3d9bf8:
    // 0x3d9bf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d9bf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d9bfc:
    // 0x3d9bfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d9bfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d9c00:
    // 0x3d9c00: 0x3e00008  jr          $ra
label_3d9c04:
    if (ctx->pc == 0x3D9C04u) {
        ctx->pc = 0x3D9C04u;
            // 0x3d9c04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3D9C08u;
        goto label_3d9c08;
    }
    ctx->pc = 0x3D9C00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9C00u;
            // 0x3d9c04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D9C08u;
label_3d9c08:
    // 0x3d9c08: 0x0  nop
    ctx->pc = 0x3d9c08u;
    // NOP
label_3d9c0c:
    // 0x3d9c0c: 0x0  nop
    ctx->pc = 0x3d9c0cu;
    // NOP
}
