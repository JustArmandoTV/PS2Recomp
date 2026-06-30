#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F5B20
// Address: 0x4f5b20 - 0x4f5d00
void sub_004F5B20_0x4f5b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F5B20_0x4f5b20");
#endif

    switch (ctx->pc) {
        case 0x4f5b78u: goto label_4f5b78;
        case 0x4f5bd4u: goto label_4f5bd4;
        case 0x4f5becu: goto label_4f5bec;
        case 0x4f5c10u: goto label_4f5c10;
        case 0x4f5c18u: goto label_4f5c18;
        case 0x4f5c34u: goto label_4f5c34;
        case 0x4f5c68u: goto label_4f5c68;
        case 0x4f5c90u: goto label_4f5c90;
        case 0x4f5ca0u: goto label_4f5ca0;
        case 0x4f5cb4u: goto label_4f5cb4;
        default: break;
    }

    ctx->pc = 0x4f5b20u;

    // 0x4f5b20: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4f5b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4f5b24: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4f5b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x4f5b28: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x4f5b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x4f5b2c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4f5b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x4f5b30: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4f5b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x4f5b34: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4f5b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x4f5b38: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4f5b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4f5b3c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4f5b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4f5b40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4f5b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4f5b44: 0x80830027  lb          $v1, 0x27($a0)
    ctx->pc = 0x4f5b44u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 39)));
    // 0x4f5b48: 0x8c5489d0  lw          $s4, -0x7630($v0)
    ctx->pc = 0x4f5b48u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x4f5b4c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x4f5b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4f5b50: 0xa0820027  sb          $v0, 0x27($a0)
    ctx->pc = 0x4f5b50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 39), (uint8_t)GPR_U32(ctx, 2));
    // 0x4f5b54: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x4f5b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x4f5b58: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x4f5b58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x4f5b5c: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x4f5b5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x4f5b60: 0x10200043  beqz        $at, . + 4 + (0x43 << 2)
    ctx->pc = 0x4F5B60u;
    {
        const bool branch_taken_0x4f5b60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5B60u;
            // 0x4f5b64: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5b60) {
            ctx->pc = 0x4F5C70u;
            goto label_4f5c70;
        }
    }
    ctx->pc = 0x4F5B68u;
    // 0x4f5b68: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x4f5b68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x4f5b6c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4f5b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x4f5b70: 0x24a5cbb0  addiu       $a1, $a1, -0x3450
    ctx->pc = 0x4f5b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953904));
    // 0x4f5b74: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x4f5b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_4f5b78:
    // 0x4f5b78: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x4f5b78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f5b7c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4f5b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4f5b80: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x4f5b80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4f5b84: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4f5b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4f5b88: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4f5b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4f5b8c: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4F5B8Cu;
    {
        const bool branch_taken_0x4f5b8c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4f5b8c) {
            ctx->pc = 0x4F5B78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f5b78;
        }
    }
    ctx->pc = 0x4F5B94u;
    // 0x4f5b94: 0x82440026  lb          $a0, 0x26($s2)
    ctx->pc = 0x4f5b94u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 38)));
    // 0x4f5b98: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4f5b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4f5b9c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4f5b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4f5ba0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x4f5ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x4f5ba4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4f5ba4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5ba8: 0x26910080  addiu       $s1, $s4, 0x80
    ctx->pc = 0x4f5ba8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    // 0x4f5bac: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x4f5bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4f5bb0: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x4f5bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x4f5bb4: 0xa2460026  sb          $a2, 0x26($s2)
    ctx->pc = 0x4f5bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 38), (uint8_t)GPR_U32(ctx, 6));
    // 0x4f5bb8: 0x80950080  lb          $s5, 0x80($a0)
    ctx->pc = 0x4f5bb8u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x4f5bbc: 0x8290002a  lb          $s0, 0x2A($s4)
    ctx->pc = 0x4f5bbcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 42)));
    // 0x4f5bc0: 0x8c73a348  lw          $s3, -0x5CB8($v1)
    ctx->pc = 0x4f5bc0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943560)));
    // 0x4f5bc4: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x4f5bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
    // 0x4f5bc8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4f5bc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5bcc: 0xc0b3a28  jal         func_2CE8A0
    ctx->pc = 0x4F5BCCu;
    SET_GPR_U32(ctx, 31, 0x4F5BD4u);
    ctx->pc = 0x4F5BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5BCCu;
            // 0x4f5bd0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5BD4u; }
        if (ctx->pc != 0x4F5BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5BD4u; }
        if (ctx->pc != 0x4F5BD4u) { return; }
    }
    ctx->pc = 0x4F5BD4u;
label_4f5bd4:
    // 0x4f5bd4: 0x26640004  addiu       $a0, $s3, 0x4
    ctx->pc = 0x4f5bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x4f5bd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4f5bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5bdc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4f5bdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5be0: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x4f5be0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x4f5be4: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x4F5BE4u;
    SET_GPR_U32(ctx, 31, 0x4F5BECu);
    ctx->pc = 0x4F5BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5BE4u;
            // 0x4f5be8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5BECu; }
        if (ctx->pc != 0x4F5BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5BECu; }
        if (ctx->pc != 0x4F5BECu) { return; }
    }
    ctx->pc = 0x4F5BECu;
label_4f5bec:
    // 0x4f5bec: 0x82420027  lb          $v0, 0x27($s2)
    ctx->pc = 0x4f5becu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 39)));
    // 0x4f5bf0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4F5BF0u;
    {
        const bool branch_taken_0x4f5bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F5BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5BF0u;
            // 0x4f5bf4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5bf0) {
            ctx->pc = 0x4F5C10u;
            goto label_4f5c10;
        }
    }
    ctx->pc = 0x4F5BF8u;
    // 0x4f5bf8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x4f5bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4f5bfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f5bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5c00: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x4f5c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4f5c04: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4f5c04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5c08: 0xc0b8f50  jal         func_2E3D40
    ctx->pc = 0x4F5C08u;
    SET_GPR_U32(ctx, 31, 0x4F5C10u);
    ctx->pc = 0x4F5C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5C08u;
            // 0x4f5c0c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3D40u;
    if (runtime->hasFunction(0x2E3D40u)) {
        auto targetFn = runtime->lookupFunction(0x2E3D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5C10u; }
        if (ctx->pc != 0x4F5C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E3D40_0x2e3d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5C10u; }
        if (ctx->pc != 0x4F5C10u) { return; }
    }
    ctx->pc = 0x4F5C10u;
label_4f5c10:
    // 0x4f5c10: 0xc040180  jal         func_100600
    ctx->pc = 0x4F5C10u;
    SET_GPR_U32(ctx, 31, 0x4F5C18u);
    ctx->pc = 0x4F5C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5C10u;
            // 0x4f5c14: 0x24040cbc  addiu       $a0, $zero, 0xCBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5C18u; }
        if (ctx->pc != 0x4F5C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5C18u; }
        if (ctx->pc != 0x4F5C18u) { return; }
    }
    ctx->pc = 0x4F5C18u;
label_4f5c18:
    // 0x4f5c18: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4f5c18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5c1c: 0x52600030  beql        $s3, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x4F5C1Cu;
    {
        const bool branch_taken_0x4f5c1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f5c1c) {
            ctx->pc = 0x4F5C20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5C1Cu;
            // 0x4f5c20: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F5CE0u;
            goto label_4f5ce0;
        }
    }
    ctx->pc = 0x4F5C24u;
    // 0x4f5c24: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4f5c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x4f5c28: 0x8c4489d0  lw          $a0, -0x7630($v0)
    ctx->pc = 0x4f5c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x4f5c2c: 0xc0b909c  jal         func_2E4270
    ctx->pc = 0x4F5C2Cu;
    SET_GPR_U32(ctx, 31, 0x4F5C34u);
    ctx->pc = 0x4F5C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5C2Cu;
            // 0x4f5c30: 0x82450026  lb          $a1, 0x26($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 38)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4270u;
    if (runtime->hasFunction(0x2E4270u)) {
        auto targetFn = runtime->lookupFunction(0x2E4270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5C34u; }
        if (ctx->pc != 0x4F5C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4270_0x2e4270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5C34u; }
        if (ctx->pc != 0x4F5C34u) { return; }
    }
    ctx->pc = 0x4F5C34u;
label_4f5c34:
    // 0x4f5c34: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x4f5c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4f5c38: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4f5c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4f5c3c: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x4f5c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x4f5c40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4f5c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5c44: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4f5c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5c48: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x4f5c48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5c4c: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x4f5c4cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5c50: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x4f5c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4f5c54: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x4f5c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x4f5c58: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x4f5c58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5c5c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x4f5c5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5c60: 0xc0cd08c  jal         func_334230
    ctx->pc = 0x4F5C60u;
    SET_GPR_U32(ctx, 31, 0x4F5C68u);
    ctx->pc = 0x4F5C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5C60u;
            // 0x4f5c64: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334230u;
    if (runtime->hasFunction(0x334230u)) {
        auto targetFn = runtime->lookupFunction(0x334230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5C68u; }
        if (ctx->pc != 0x4F5C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00334230_0x334230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5C68u; }
        if (ctx->pc != 0x4F5C68u) { return; }
    }
    ctx->pc = 0x4F5C68u;
label_4f5c68:
    // 0x4f5c68: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x4F5C68u;
    {
        const bool branch_taken_0x4f5c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f5c68) {
            ctx->pc = 0x4F5CDCu;
            goto label_4f5cdc;
        }
    }
    ctx->pc = 0x4F5C70u;
label_4f5c70:
    // 0x4f5c70: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4f5c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4f5c74: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4f5c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x4f5c78: 0x8c630ec8  lw          $v1, 0xEC8($v1)
    ctx->pc = 0x4f5c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3784)));
    // 0x4f5c7c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4f5c7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5c80: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x4f5c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x4f5c84: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x4f5c84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5c88: 0x8c740008  lw          $s4, 0x8($v1)
    ctx->pc = 0x4f5c88u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4f5c8c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x4f5c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_4f5c90:
    // 0x4f5c90: 0x9245000c  lbu         $a1, 0xC($s2)
    ctx->pc = 0x4f5c90u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x4f5c94: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x4f5c94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4f5c98: 0xc120538  jal         func_4814E0
    ctx->pc = 0x4F5C98u;
    SET_GPR_U32(ctx, 31, 0x4F5CA0u);
    ctx->pc = 0x4F5C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5C98u;
            // 0x4f5c9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4814E0u;
    if (runtime->hasFunction(0x4814E0u)) {
        auto targetFn = runtime->lookupFunction(0x4814E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5CA0u; }
        if (ctx->pc != 0x4F5CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004814E0_0x4814e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5CA0u; }
        if (ctx->pc != 0x4F5CA0u) { return; }
    }
    ctx->pc = 0x4F5CA0u;
label_4f5ca0:
    // 0x4f5ca0: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x4f5ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x4f5ca4: 0x9245000c  lbu         $a1, 0xC($s2)
    ctx->pc = 0x4f5ca4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x4f5ca8: 0x9046000d  lbu         $a2, 0xD($v0)
    ctx->pc = 0x4f5ca8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
    // 0x4f5cac: 0xc120528  jal         func_4814A0
    ctx->pc = 0x4F5CACu;
    SET_GPR_U32(ctx, 31, 0x4F5CB4u);
    ctx->pc = 0x4F5CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5CACu;
            // 0x4f5cb0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4814A0u;
    if (runtime->hasFunction(0x4814A0u)) {
        auto targetFn = runtime->lookupFunction(0x4814A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5CB4u; }
        if (ctx->pc != 0x4F5CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004814A0_0x4814a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F5CB4u; }
        if (ctx->pc != 0x4F5CB4u) { return; }
    }
    ctx->pc = 0x4F5CB4u;
label_4f5cb4:
    // 0x4f5cb4: 0x82030026  lb          $v1, 0x26($s0)
    ctx->pc = 0x4f5cb4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x4f5cb8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4f5cb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x4f5cbc: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x4f5cbcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4f5cc0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x4F5CC0u;
    {
        const bool branch_taken_0x4f5cc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F5CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5CC0u;
            // 0x4f5cc4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5cc0) {
            ctx->pc = 0x4F5C90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f5c90;
        }
    }
    ctx->pc = 0x4F5CC8u;
    // 0x4f5cc8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x4f5cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4f5ccc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4f5cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x4f5cd0: 0xa2440026  sb          $a0, 0x26($s2)
    ctx->pc = 0x4f5cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 38), (uint8_t)GPR_U32(ctx, 4));
    // 0x4f5cd4: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x4f5cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
    // 0x4f5cd8: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x4f5cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
label_4f5cdc:
    // 0x4f5cdc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4f5cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_4f5ce0:
    // 0x4f5ce0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4f5ce0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4f5ce4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4f5ce4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4f5ce8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4f5ce8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4f5cec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4f5cecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f5cf0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4f5cf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f5cf4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4f5cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f5cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x4F5CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F5CF8u;
            // 0x4f5cfc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F5D00u;
}
