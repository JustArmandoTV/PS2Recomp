#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00199B60
// Address: 0x199b60 - 0x199d40
void sub_00199B60_0x199b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199B60_0x199b60");
#endif

    switch (ctx->pc) {
        case 0x199ba8u: goto label_199ba8;
        case 0x199bd4u: goto label_199bd4;
        case 0x199c04u: goto label_199c04;
        case 0x199c18u: goto label_199c18;
        case 0x199c28u: goto label_199c28;
        case 0x199c3cu: goto label_199c3c;
        case 0x199cb0u: goto label_199cb0;
        case 0x199cc0u: goto label_199cc0;
        case 0x199cd4u: goto label_199cd4;
        default: break;
    }

    ctx->pc = 0x199b60u;

    // 0x199b60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x199b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x199b64: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x199b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x199b68: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x199b68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199b6c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x199b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x199b70: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x199b70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199b74: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x199b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x199b78: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x199b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x199b7c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x199b7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199b80: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x199b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x199b84: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x199b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x199b88: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x199b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x199b8c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x199b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x199b90: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x199b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x199b94: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x199b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x199b98: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x199b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x199b9c: 0x8e900048  lw          $s0, 0x48($s4)
    ctx->pc = 0x199b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x199ba0: 0xc066782  jal         func_199E08
    ctx->pc = 0x199BA0u;
    SET_GPR_U32(ctx, 31, 0x199BA8u);
    ctx->pc = 0x199BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199BA0u;
            // 0x199ba4: 0x8e570020  lw          $s7, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199E08u;
    if (runtime->hasFunction(0x199E08u)) {
        auto targetFn = runtime->lookupFunction(0x199E08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199BA8u; }
        if (ctx->pc != 0x199BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199E08_0x199e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199BA8u; }
        if (ctx->pc != 0x199BA8u) { return; }
    }
    ctx->pc = 0x199BA8u;
label_199ba8:
    // 0x199ba8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x199ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x199bac: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x199bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x199bb0: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x199bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x199bb4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x199bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x199bb8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x199bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x199bbc: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x199bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x199bc0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x199bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x199bc4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x199bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x199bc8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x199bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x199bcc: 0xc066792  jal         func_199E48
    ctx->pc = 0x199BCCu;
    SET_GPR_U32(ctx, 31, 0x199BD4u);
    ctx->pc = 0x199BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199BCCu;
            // 0x199bd0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199E48u;
    if (runtime->hasFunction(0x199E48u)) {
        auto targetFn = runtime->lookupFunction(0x199E48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199BD4u; }
        if (ctx->pc != 0x199BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199E48_0x199e48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199BD4u; }
        if (ctx->pc != 0x199BD4u) { return; }
    }
    ctx->pc = 0x199BD4u;
label_199bd4:
    // 0x199bd4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x199bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x199bd8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x199bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199bdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199be0: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x199be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x199be4: 0x8e530018  lw          $s3, 0x18($s2)
    ctx->pc = 0x199be4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x199be8: 0x8e550034  lw          $s5, 0x34($s2)
    ctx->pc = 0x199be8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x199bec: 0x8e560030  lw          $s6, 0x30($s2)
    ctx->pc = 0x199becu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x199bf0: 0x8e5e002c  lw          $fp, 0x2C($s2)
    ctx->pc = 0x199bf0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x199bf4: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x199bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x199bf8: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x199bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x199bfc: 0xc06dee0  jal         func_1B7B80
    ctx->pc = 0x199BFCu;
    SET_GPR_U32(ctx, 31, 0x199C04u);
    ctx->pc = 0x199C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199BFCu;
            // 0x199c00: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7B80u;
    if (runtime->hasFunction(0x1B7B80u)) {
        auto targetFn = runtime->lookupFunction(0x1B7B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199C04u; }
        if (ctx->pc != 0x199C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7B80_0x1b7b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199C04u; }
        if (ctx->pc != 0x199C04u) { return; }
    }
    ctx->pc = 0x199C04u;
label_199c04:
    // 0x199c04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x199C04u;
    {
        const bool branch_taken_0x199c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199C04u;
            // 0x199c08: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c04) {
            ctx->pc = 0x199C1Cu;
            goto label_199c1c;
        }
    }
    ctx->pc = 0x199C0Cu;
    // 0x199c0c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x199c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x199c10: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x199C10u;
    SET_GPR_U32(ctx, 31, 0x199C18u);
    ctx->pc = 0x199C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199C10u;
            // 0x199c14: 0x24848c58  addiu       $a0, $a0, -0x73A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199C18u; }
        if (ctx->pc != 0x199C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199C18u; }
        if (ctx->pc != 0x199C18u) { return; }
    }
    ctx->pc = 0x199C18u;
label_199c18:
    // 0x199c18: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x199c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_199c1c:
    // 0x199c1c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x199c1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199c20: 0xc066776  jal         func_199DD8
    ctx->pc = 0x199C20u;
    SET_GPR_U32(ctx, 31, 0x199C28u);
    ctx->pc = 0x199C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199C20u;
            // 0x199c24: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199DD8u;
    if (runtime->hasFunction(0x199DD8u)) {
        auto targetFn = runtime->lookupFunction(0x199DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199C28u; }
        if (ctx->pc != 0x199C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199DD8_0x199dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199C28u; }
        if (ctx->pc != 0x199C28u) { return; }
    }
    ctx->pc = 0x199C28u;
label_199c28:
    // 0x199c28: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x199c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199c2c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x199c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199c30: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x199c30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199c34: 0xc066776  jal         func_199DD8
    ctx->pc = 0x199C34u;
    SET_GPR_U32(ctx, 31, 0x199C3Cu);
    ctx->pc = 0x199C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199C34u;
            // 0x199c38: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199DD8u;
    if (runtime->hasFunction(0x199DD8u)) {
        auto targetFn = runtime->lookupFunction(0x199DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199C3Cu; }
        if (ctx->pc != 0x199C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199DD8_0x199dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199C3Cu; }
        if (ctx->pc != 0x199C3Cu) { return; }
    }
    ctx->pc = 0x199C3Cu;
label_199c3c:
    // 0x199c3c: 0xae370000  sw          $s7, 0x0($s1)
    ctx->pc = 0x199c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 23));
    // 0x199c40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x199c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199c44: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x199c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199c48: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x199c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199c4c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x199c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199c50: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x199c50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x199c54: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x199c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x199c58: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x199c58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x199c5c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x199c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x199c60: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x199c60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x199c64: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x199c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x199c68: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x199c68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x199c6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x199c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199c70: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x199c70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x199c74: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x199c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x199c78: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x199c78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x199c7c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x199c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x199c80: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x199c80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
    // 0x199c84: 0xae300024  sw          $s0, 0x24($s1)
    ctx->pc = 0x199c84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 16));
    // 0x199c88: 0xae350028  sw          $s5, 0x28($s1)
    ctx->pc = 0x199c88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 21));
    // 0x199c8c: 0xae33002c  sw          $s3, 0x2C($s1)
    ctx->pc = 0x199c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 19));
    // 0x199c90: 0xae3e0030  sw          $fp, 0x30($s1)
    ctx->pc = 0x199c90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 30));
    // 0x199c94: 0xae360038  sw          $s6, 0x38($s1)
    ctx->pc = 0x199c94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 22));
    // 0x199c98: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x199c98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x199c9c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x199c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x199ca0: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x199ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x199ca4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x199ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199ca8: 0xc066750  jal         func_199D40
    ctx->pc = 0x199CA8u;
    SET_GPR_U32(ctx, 31, 0x199CB0u);
    ctx->pc = 0x199CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199CA8u;
            // 0x199cac: 0xae220040  sw          $v0, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199D40u;
    if (runtime->hasFunction(0x199D40u)) {
        auto targetFn = runtime->lookupFunction(0x199D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199CB0u; }
        if (ctx->pc != 0x199CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199D40_0x199d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199CB0u; }
        if (ctx->pc != 0x199CB0u) { return; }
    }
    ctx->pc = 0x199CB0u;
label_199cb0:
    // 0x199cb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x199cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199cb4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x199cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199cb8: 0xc0667ec  jal         func_199FB0
    ctx->pc = 0x199CB8u;
    SET_GPR_U32(ctx, 31, 0x199CC0u);
    ctx->pc = 0x199CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199CB8u;
            // 0x199cbc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199FB0u;
    if (runtime->hasFunction(0x199FB0u)) {
        auto targetFn = runtime->lookupFunction(0x199FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199CC0u; }
        if (ctx->pc != 0x199CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199FB0_0x199fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199CC0u; }
        if (ctx->pc != 0x199CC0u) { return; }
    }
    ctx->pc = 0x199CC0u;
label_199cc0:
    // 0x199cc0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x199cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199cc4: 0x8e260098  lw          $a2, 0x98($s1)
    ctx->pc = 0x199cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x199cc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x199cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199ccc: 0xc0667ac  jal         func_199EB0
    ctx->pc = 0x199CCCu;
    SET_GPR_U32(ctx, 31, 0x199CD4u);
    ctx->pc = 0x199CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199CCCu;
            // 0x199cd0: 0x8e27009c  lw          $a3, 0x9C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199EB0u;
    if (runtime->hasFunction(0x199EB0u)) {
        auto targetFn = runtime->lookupFunction(0x199EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199CD4u; }
        if (ctx->pc != 0x199CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199EB0_0x199eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199CD4u; }
        if (ctx->pc != 0x199CD4u) { return; }
    }
    ctx->pc = 0x199CD4u;
label_199cd4:
    // 0x199cd4: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x199cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x199cd8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x199cd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x199cdc: 0xde420048  ld          $v0, 0x48($s2)
    ctx->pc = 0x199cdcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x199ce0: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x199ce0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x199ce4: 0xfe220060  sd          $v0, 0x60($s1)
    ctx->pc = 0x199ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 96), GPR_U64(ctx, 2));
    // 0x199ce8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x199ce8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x199cec: 0xde430050  ld          $v1, 0x50($s2)
    ctx->pc = 0x199cecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x199cf0: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x199cf0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x199cf4: 0xfe230068  sd          $v1, 0x68($s1)
    ctx->pc = 0x199cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 3));
    // 0x199cf8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x199cf8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x199cfc: 0xde420058  ld          $v0, 0x58($s2)
    ctx->pc = 0x199cfcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x199d00: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x199d00u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x199d04: 0xfe220070  sd          $v0, 0x70($s1)
    ctx->pc = 0x199d04u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 2));
    // 0x199d08: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x199d08u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x199d0c: 0xde430060  ld          $v1, 0x60($s2)
    ctx->pc = 0x199d0cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x199d10: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x199d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x199d14: 0xfe230078  sd          $v1, 0x78($s1)
    ctx->pc = 0x199d14u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 120), GPR_U64(ctx, 3));
    // 0x199d18: 0xde420068  ld          $v0, 0x68($s2)
    ctx->pc = 0x199d18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x199d1c: 0xfe220080  sd          $v0, 0x80($s1)
    ctx->pc = 0x199d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 128), GPR_U64(ctx, 2));
    // 0x199d20: 0xde430070  ld          $v1, 0x70($s2)
    ctx->pc = 0x199d20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x199d24: 0xfe230088  sd          $v1, 0x88($s1)
    ctx->pc = 0x199d24u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 136), GPR_U64(ctx, 3));
    // 0x199d28: 0xde420078  ld          $v0, 0x78($s2)
    ctx->pc = 0x199d28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x199d2c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x199d2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x199d30: 0xfe220090  sd          $v0, 0x90($s1)
    ctx->pc = 0x199d30u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 144), GPR_U64(ctx, 2));
    // 0x199d34: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x199d34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x199d38: 0x3e00008  jr          $ra
    ctx->pc = 0x199D38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199D38u;
            // 0x199d3c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199D40u;
}
