#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00360E10
// Address: 0x360e10 - 0x3610d0
void sub_00360E10_0x360e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360E10_0x360e10");
#endif

    switch (ctx->pc) {
        case 0x360e48u: goto label_360e48;
        case 0x360e8cu: goto label_360e8c;
        case 0x360eacu: goto label_360eac;
        case 0x360ec0u: goto label_360ec0;
        case 0x360f8cu: goto label_360f8c;
        case 0x360f9cu: goto label_360f9c;
        default: break;
    }

    ctx->pc = 0x360e10u;

    // 0x360e10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x360e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x360e14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x360e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x360e18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x360e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x360e1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x360e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x360e20: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x360e20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360e24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x360e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x360e28: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x360e28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360e2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x360e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x360e30: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x360e30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360e34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x360e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x360e38: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x360e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x360e3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x360e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x360e40: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x360E40u;
    {
        const bool branch_taken_0x360e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x360E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x360E40u;
            // 0x360e44: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360e40) {
            ctx->pc = 0x360E68u;
            goto label_360e68;
        }
    }
    ctx->pc = 0x360E48u;
label_360e48:
    // 0x360e48: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x360e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x360e4c: 0x24840005  addiu       $a0, $a0, 0x5
    ctx->pc = 0x360e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x360e50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x360e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x360e54: 0x0  nop
    ctx->pc = 0x360e54u;
    // NOP
    // 0x360e58: 0x0  nop
    ctx->pc = 0x360e58u;
    // NOP
    // 0x360e5c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x360E5Cu;
    {
        const bool branch_taken_0x360e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x360e5c) {
            ctx->pc = 0x360E48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_360e48;
        }
    }
    ctx->pc = 0x360E64u;
    // 0x360e64: 0x0  nop
    ctx->pc = 0x360e64u;
    // NOP
label_360e68:
    // 0x360e68: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x360e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
    // 0x360e6c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x360e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x360e70: 0x440019  multu       $v0, $a0
    ctx->pc = 0x360e70u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x360e74: 0x1010  mfhi        $v0
    ctx->pc = 0x360e74u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x360e78: 0x28882  srl         $s1, $v0, 2
    ctx->pc = 0x360e78u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x360e7c: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x360e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x360e80: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x360e80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x360e84: 0xc040138  jal         func_1004E0
    ctx->pc = 0x360E84u;
    SET_GPR_U32(ctx, 31, 0x360E8Cu);
    ctx->pc = 0x360E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360E84u;
            // 0x360e88: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360E8Cu; }
        if (ctx->pc != 0x360E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360E8Cu; }
        if (ctx->pc != 0x360E8Cu) { return; }
    }
    ctx->pc = 0x360E8Cu;
label_360e8c:
    // 0x360e8c: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x360e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x360e90: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x360e90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x360e94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x360e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360e98: 0x24a51520  addiu       $a1, $a1, 0x1520
    ctx->pc = 0x360e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5408));
    // 0x360e9c: 0x24c63260  addiu       $a2, $a2, 0x3260
    ctx->pc = 0x360e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12896));
    // 0x360ea0: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x360ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x360ea4: 0xc040840  jal         func_102100
    ctx->pc = 0x360EA4u;
    SET_GPR_U32(ctx, 31, 0x360EACu);
    ctx->pc = 0x360EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360EA4u;
            // 0x360ea8: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360EACu; }
        if (ctx->pc != 0x360EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360EACu; }
        if (ctx->pc != 0x360EACu) { return; }
    }
    ctx->pc = 0x360EACu;
label_360eac:
    // 0x360eac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x360eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360eb0: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x360eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x360eb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x360eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360eb8: 0xc075128  jal         func_1D44A0
    ctx->pc = 0x360EB8u;
    SET_GPR_U32(ctx, 31, 0x360EC0u);
    ctx->pc = 0x360EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360EB8u;
            // 0x360ebc: 0xae500004  sw          $s0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360EC0u; }
        if (ctx->pc != 0x360EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360EC0u; }
        if (ctx->pc != 0x360EC0u) { return; }
    }
    ctx->pc = 0x360EC0u;
label_360ec0:
    // 0x360ec0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x360ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x360ec4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x360ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x360ec8: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x360ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
    // 0x360ecc: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x360eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x360ed0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x360ed0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x360ed4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x360ED4u;
    {
        const bool branch_taken_0x360ed4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x360ed4) {
            ctx->pc = 0x360ED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x360ED4u;
            // 0x360ed8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x360EE8u;
            goto label_360ee8;
        }
    }
    ctx->pc = 0x360EDCu;
    // 0x360edc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x360edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x360ee0: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x360ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
    // 0x360ee4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x360ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_360ee8:
    // 0x360ee8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x360ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x360eec: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x360eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x360ef0: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x360ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x360ef4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x360ef4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x360ef8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x360EF8u;
    {
        const bool branch_taken_0x360ef8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x360ef8) {
            ctx->pc = 0x360EFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x360EF8u;
            // 0x360efc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x360F0Cu;
            goto label_360f0c;
        }
    }
    ctx->pc = 0x360F00u;
    // 0x360f00: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x360f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x360f04: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x360f04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x360f08: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x360f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_360f0c:
    // 0x360f0c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x360f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x360f10: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x360f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x360f14: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x360f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x360f18: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x360f18u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x360f1c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x360F1Cu;
    {
        const bool branch_taken_0x360f1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x360f1c) {
            ctx->pc = 0x360F20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x360F1Cu;
            // 0x360f20: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x360F30u;
            goto label_360f30;
        }
    }
    ctx->pc = 0x360F24u;
    // 0x360f24: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x360f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x360f28: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x360f28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x360f2c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x360f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_360f30:
    // 0x360f30: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x360f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x360f34: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x360f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x360f38: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x360f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x360f3c: 0x932018  mult        $a0, $a0, $s3
    ctx->pc = 0x360f3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x360f40: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x360f40u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x360f44: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x360F44u;
    {
        const bool branch_taken_0x360f44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x360f44) {
            ctx->pc = 0x360F48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x360F44u;
            // 0x360f48: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x360F58u;
            goto label_360f58;
        }
    }
    ctx->pc = 0x360F4Cu;
    // 0x360f4c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x360f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x360f50: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x360f50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x360f54: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x360f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_360f58:
    // 0x360f58: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x360f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x360f5c: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x360f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x360f60: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x360f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x360f64: 0x932018  mult        $a0, $a0, $s3
    ctx->pc = 0x360f64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x360f68: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x360f68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x360f6c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x360F6Cu;
    {
        const bool branch_taken_0x360f6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x360f6c) {
            ctx->pc = 0x360F70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x360F6Cu;
            // 0x360f70: 0x26120020  addiu       $s2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x360F80u;
            goto label_360f80;
        }
    }
    ctx->pc = 0x360F74u;
    // 0x360f74: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x360f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x360f78: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x360f78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x360f7c: 0x26120020  addiu       $s2, $s0, 0x20
    ctx->pc = 0x360f7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_360f80:
    // 0x360f80: 0x2630ffff  addiu       $s0, $s1, -0x1
    ctx->pc = 0x360f80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x360f84: 0x1200003c  beqz        $s0, . + 4 + (0x3C << 2)
    ctx->pc = 0x360F84u;
    {
        const bool branch_taken_0x360f84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x360f84) {
            ctx->pc = 0x361078u;
            goto label_361078;
        }
    }
    ctx->pc = 0x360F8Cu;
label_360f8c:
    // 0x360f8c: 0x8e85001c  lw          $a1, 0x1C($s4)
    ctx->pc = 0x360f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x360f90: 0x8e860020  lw          $a2, 0x20($s4)
    ctx->pc = 0x360f90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x360f94: 0xc0750c4  jal         func_1D4310
    ctx->pc = 0x360F94u;
    SET_GPR_U32(ctx, 31, 0x360F9Cu);
    ctx->pc = 0x360F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x360F94u;
            // 0x360f98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4310u;
    if (runtime->hasFunction(0x1D4310u)) {
        auto targetFn = runtime->lookupFunction(0x1D4310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360F9Cu; }
        if (ctx->pc != 0x360F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4310_0x1d4310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x360F9Cu; }
        if (ctx->pc != 0x360F9Cu) { return; }
    }
    ctx->pc = 0x360F9Cu;
label_360f9c:
    // 0x360f9c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x360f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x360fa0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x360fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x360fa4: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x360fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
    // 0x360fa8: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x360fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x360fac: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x360facu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x360fb0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x360FB0u;
    {
        const bool branch_taken_0x360fb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x360fb0) {
            ctx->pc = 0x360FC0u;
            goto label_360fc0;
        }
    }
    ctx->pc = 0x360FB8u;
    // 0x360fb8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x360fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x360fbc: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x360fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_360fc0:
    // 0x360fc0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x360fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x360fc4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x360fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x360fc8: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x360fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x360fcc: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x360fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x360fd0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x360fd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x360fd4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x360FD4u;
    {
        const bool branch_taken_0x360fd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x360fd4) {
            ctx->pc = 0x360FE8u;
            goto label_360fe8;
        }
    }
    ctx->pc = 0x360FDCu;
    // 0x360fdc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x360fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x360fe0: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x360fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x360fe4: 0x0  nop
    ctx->pc = 0x360fe4u;
    // NOP
label_360fe8:
    // 0x360fe8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x360fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x360fec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x360fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x360ff0: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x360ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x360ff4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x360ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x360ff8: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x360ff8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x360ffc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x360FFCu;
    {
        const bool branch_taken_0x360ffc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x360ffc) {
            ctx->pc = 0x361010u;
            goto label_361010;
        }
    }
    ctx->pc = 0x361004u;
    // 0x361004: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361008: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x361008u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x36100c: 0x0  nop
    ctx->pc = 0x36100cu;
    // NOP
label_361010:
    // 0x361010: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x361010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x361014: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361018: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x361018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x36101c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x36101cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x361020: 0x932018  mult        $a0, $a0, $s3
    ctx->pc = 0x361020u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x361024: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x361024u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x361028: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x361028u;
    {
        const bool branch_taken_0x361028 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x361028) {
            ctx->pc = 0x361038u;
            goto label_361038;
        }
    }
    ctx->pc = 0x361030u;
    // 0x361030: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361034: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x361034u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_361038:
    // 0x361038: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x361038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x36103c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36103cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361040: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x361040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x361044: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x361044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x361048: 0x932018  mult        $a0, $a0, $s3
    ctx->pc = 0x361048u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x36104c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x36104cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x361050: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x361050u;
    {
        const bool branch_taken_0x361050 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x361050) {
            ctx->pc = 0x361060u;
            goto label_361060;
        }
    }
    ctx->pc = 0x361058u;
    // 0x361058: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36105c: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x36105cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_361060:
    // 0x361060: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x361060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x361064: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x361064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x361068: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x361068u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x36106c: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x36106cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x361070: 0x1600ffc6  bnez        $s0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x361070u;
    {
        const bool branch_taken_0x361070 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x361074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x361070u;
            // 0x361074: 0xae830020  sw          $v1, 0x20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361070) {
            ctx->pc = 0x360F8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_360f8c;
        }
    }
    ctx->pc = 0x361078u;
label_361078:
    // 0x361078: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36107c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x36107cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
    // 0x361080: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x361080u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x361084: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x361084u;
    {
        const bool branch_taken_0x361084 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x361084) {
            ctx->pc = 0x361094u;
            goto label_361094;
        }
    }
    ctx->pc = 0x36108Cu;
    // 0x36108c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36108cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361090: 0xac73e3c8  sw          $s3, -0x1C38($v1)
    ctx->pc = 0x361090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 19));
label_361094:
    // 0x361094: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361098: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x361098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
    // 0x36109c: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x36109cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3610a0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3610A0u;
    {
        const bool branch_taken_0x3610a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3610a0) {
            ctx->pc = 0x3610A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3610A0u;
            // 0x3610a4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3610B4u;
            goto label_3610b4;
        }
    }
    ctx->pc = 0x3610A8u;
    // 0x3610a8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3610a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3610ac: 0xac73e3d0  sw          $s3, -0x1C30($v1)
    ctx->pc = 0x3610acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 19));
    // 0x3610b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3610b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3610b4:
    // 0x3610b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3610b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3610b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3610b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3610bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3610bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3610c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3610c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3610c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3610c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3610c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3610C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3610CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3610C8u;
            // 0x3610cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3610D0u;
}
