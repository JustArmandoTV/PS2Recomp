#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CEED0
// Address: 0x1ceed0 - 0x1cf1f8
void sub_001CEED0_0x1ceed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CEED0_0x1ceed0");
#endif

    switch (ctx->pc) {
        case 0x1cef14u: goto label_1cef14;
        case 0x1cef30u: goto label_1cef30;
        case 0x1cef54u: goto label_1cef54;
        case 0x1cefbcu: goto label_1cefbc;
        case 0x1cefecu: goto label_1cefec;
        case 0x1cf04cu: goto label_1cf04c;
        case 0x1cf078u: goto label_1cf078;
        case 0x1cf0c0u: goto label_1cf0c0;
        case 0x1cf124u: goto label_1cf124;
        case 0x1cf148u: goto label_1cf148;
        case 0x1cf194u: goto label_1cf194;
        case 0x1cf1d8u: goto label_1cf1d8;
        default: break;
    }

    ctx->pc = 0x1ceed0u;

    // 0x1ceed0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ceed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ceed4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ceed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ceed8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ceed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ceedc: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x1ceedcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceee0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ceee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceee4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1ceee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1ceee8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ceee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ceeec: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1ceeecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceef0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ceef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ceef4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ceef4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceef8: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x1ceef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x1ceefc: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x1ceefcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
    // 0x1cef00: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x1cef00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x1cef04: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1cef04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cef08: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1cef08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cef0c: 0xc07392c  jal         func_1CE4B0
    ctx->pc = 0x1CEF0Cu;
    SET_GPR_U32(ctx, 31, 0x1CEF14u);
    ctx->pc = 0x1CEF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEF0Cu;
            // 0x1cef10: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE4B0u;
    if (runtime->hasFunction(0x1CE4B0u)) {
        auto targetFn = runtime->lookupFunction(0x1CE4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEF14u; }
        if (ctx->pc != 0x1CEF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE4B0_0x1ce4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEF14u; }
        if (ctx->pc != 0x1CEF14u) { return; }
    }
    ctx->pc = 0x1CEF14u;
label_1cef14:
    // 0x1cef14: 0x4400011  bltz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CEF14u;
    {
        const bool branch_taken_0x1cef14 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CEF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEF14u;
            // 0x1cef18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cef14) {
            ctx->pc = 0x1CEF5Cu;
            goto label_1cef5c;
        }
    }
    ctx->pc = 0x1CEF1Cu;
    // 0x1cef1c: 0x2647000c  addiu       $a3, $s2, 0xC
    ctx->pc = 0x1cef1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x1cef20: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1cef20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1cef24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cef24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cef28: 0xc0738fe  jal         func_1CE3F8
    ctx->pc = 0x1CEF28u;
    SET_GPR_U32(ctx, 31, 0x1CEF30u);
    ctx->pc = 0x1CEF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEF28u;
            // 0x1cef2c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3F8u;
    if (runtime->hasFunction(0x1CE3F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEF30u; }
        if (ctx->pc != 0x1CEF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE3F8_0x1ce3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEF30u; }
        if (ctx->pc != 0x1CEF30u) { return; }
    }
    ctx->pc = 0x1CEF30u;
label_1cef30:
    // 0x1cef30: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CEF30u;
    {
        const bool branch_taken_0x1cef30 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1CEF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEF30u;
            // 0x1cef34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cef30) {
            ctx->pc = 0x1CEF40u;
            goto label_1cef40;
        }
    }
    ctx->pc = 0x1CEF38u;
    // 0x1cef38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CEF38u;
    {
        const bool branch_taken_0x1cef38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEF38u;
            // 0x1cef3c: 0x2402fde2  addiu       $v0, $zero, -0x21E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966754));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cef38) {
            ctx->pc = 0x1CEF5Cu;
            goto label_1cef5c;
        }
    }
    ctx->pc = 0x1CEF40u;
label_1cef40:
    // 0x1cef40: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1cef40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cef44: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1cef44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cef48: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cef48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cef4c: 0xc073942  jal         func_1CE508
    ctx->pc = 0x1CEF4Cu;
    SET_GPR_U32(ctx, 31, 0x1CEF54u);
    ctx->pc = 0x1CEF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEF4Cu;
            // 0x1cef50: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE508u;
    if (runtime->hasFunction(0x1CE508u)) {
        auto targetFn = runtime->lookupFunction(0x1CE508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEF54u; }
        if (ctx->pc != 0x1CEF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE508_0x1ce508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEF54u; }
        if (ctx->pc != 0x1CEF54u) { return; }
    }
    ctx->pc = 0x1CEF54u;
label_1cef54:
    // 0x1cef54: 0x4430001  bgezl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CEF54u;
    {
        const bool branch_taken_0x1cef54 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1cef54) {
            ctx->pc = 0x1CEF58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEF54u;
            // 0x1cef58: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CEF5Cu;
            goto label_1cef5c;
        }
    }
    ctx->pc = 0x1CEF5Cu;
label_1cef5c:
    // 0x1cef5c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cef5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cef60: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1cef60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cef64: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1cef64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cef68: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1cef68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cef6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cef6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cef70: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEF70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEF70u;
            // 0x1cef74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CEF78u;
    // 0x1cef78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cef78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cef7c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1cef7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1cef80: 0x24130048  addiu       $s3, $zero, 0x48
    ctx->pc = 0x1cef80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cef84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cef84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cef88: 0xf34018  mult        $t0, $a3, $s3
    ctx->pc = 0x1cef88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1cef8c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cef8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cef90: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1cef90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1cef94: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1cef94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cef98: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1cef98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1cef9c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1cef9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cefa0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cefa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1cefa4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cefa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cefa8: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x1cefa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x1cefac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cefacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cefb0: 0x35080004  ori         $t0, $t0, 0x4
    ctx->pc = 0x1cefb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)4);
    // 0x1cefb4: 0xc0738fe  jal         func_1CE3F8
    ctx->pc = 0x1CEFB4u;
    SET_GPR_U32(ctx, 31, 0x1CEFBCu);
    ctx->pc = 0x1CEFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEFB4u;
            // 0x1cefb8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3F8u;
    if (runtime->hasFunction(0x1CE3F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEFBCu; }
        if (ctx->pc != 0x1CEFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE3F8_0x1ce3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEFBCu; }
        if (ctx->pc != 0x1CEFBCu) { return; }
    }
    ctx->pc = 0x1CEFBCu;
label_1cefbc:
    // 0x1cefbc: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CEFBCu;
    {
        const bool branch_taken_0x1cefbc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1cefbc) {
            ctx->pc = 0x1CEFC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEFBCu;
            // 0x1cefc0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CEFCCu;
            goto label_1cefcc;
        }
    }
    ctx->pc = 0x1CEFC4u;
    // 0x1cefc4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1CEFC4u;
    {
        const bool branch_taken_0x1cefc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEFC4u;
            // 0x1cefc8: 0x2402fde2  addiu       $v0, $zero, -0x21E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966754));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cefc4) {
            ctx->pc = 0x1CEFF4u;
            goto label_1ceff4;
        }
    }
    ctx->pc = 0x1CEFCCu;
label_1cefcc:
    // 0x1cefcc: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CEFCCu;
    {
        const bool branch_taken_0x1cefcc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CEFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEFCCu;
            // 0x1cefd0: 0x530018  mult        $zero, $v0, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cefcc) {
            ctx->pc = 0x1CEFF4u;
            goto label_1ceff4;
        }
    }
    ctx->pc = 0x1CEFD4u;
    // 0x1cefd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cefd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cefd8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cefd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cefdc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cefdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cefe0: 0x4012  mflo        $t0
    ctx->pc = 0x1cefe0u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x1cefe4: 0xc073942  jal         func_1CE508
    ctx->pc = 0x1CEFE4u;
    SET_GPR_U32(ctx, 31, 0x1CEFECu);
    ctx->pc = 0x1CEFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEFE4u;
            // 0x1cefe8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE508u;
    if (runtime->hasFunction(0x1CE508u)) {
        auto targetFn = runtime->lookupFunction(0x1CE508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEFECu; }
        if (ctx->pc != 0x1CEFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE508_0x1ce508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CEFECu; }
        if (ctx->pc != 0x1CEFECu) { return; }
    }
    ctx->pc = 0x1CEFECu;
label_1cefec:
    // 0x1cefec: 0x4430001  bgezl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CEFECu;
    {
        const bool branch_taken_0x1cefec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1cefec) {
            ctx->pc = 0x1CEFF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CEFECu;
            // 0x1ceff0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CEFF4u;
            goto label_1ceff4;
        }
    }
    ctx->pc = 0x1CEFF4u;
label_1ceff4:
    // 0x1ceff4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ceff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ceff8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1ceff8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ceffc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ceffcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf000: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1cf000u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf004: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf004u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf008: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF008u;
            // 0x1cf00c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CF010u;
    // 0x1cf010: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cf010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cf014: 0x74100  sll         $t0, $a3, 4
    ctx->pc = 0x1cf014u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1cf018: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf01c: 0x35080004  ori         $t0, $t0, 0x4
    ctx->pc = 0x1cf01cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)4);
    // 0x1cf020: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cf020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf024: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1cf024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1cf028: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1cf028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1cf02c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1cf02cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf030: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cf030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1cf034: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cf034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf038: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x1cf038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x1cf03c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1cf03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1cf040: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cf040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf044: 0xc0738fe  jal         func_1CE3F8
    ctx->pc = 0x1CF044u;
    SET_GPR_U32(ctx, 31, 0x1CF04Cu);
    ctx->pc = 0x1CF048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF044u;
            // 0x1cf048: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3F8u;
    if (runtime->hasFunction(0x1CE3F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF04Cu; }
        if (ctx->pc != 0x1CF04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE3F8_0x1ce3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF04Cu; }
        if (ctx->pc != 0x1CF04Cu) { return; }
    }
    ctx->pc = 0x1CF04Cu;
label_1cf04c:
    // 0x1cf04c: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF04Cu;
    {
        const bool branch_taken_0x1cf04c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1cf04c) {
            ctx->pc = 0x1CF050u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF04Cu;
            // 0x1cf050: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CF05Cu;
            goto label_1cf05c;
        }
    }
    ctx->pc = 0x1CF054u;
    // 0x1cf054: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1CF054u;
    {
        const bool branch_taken_0x1cf054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF054u;
            // 0x1cf058: 0x2402fde2  addiu       $v0, $zero, -0x21E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966754));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf054) {
            ctx->pc = 0x1CF080u;
            goto label_1cf080;
        }
    }
    ctx->pc = 0x1CF05Cu;
label_1cf05c:
    // 0x1cf05c: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF05Cu;
    {
        const bool branch_taken_0x1cf05c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CF060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF05Cu;
            // 0x1cf060: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf05c) {
            ctx->pc = 0x1CF080u;
            goto label_1cf080;
        }
    }
    ctx->pc = 0x1CF064u;
    // 0x1cf064: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cf064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf068: 0x24100  sll         $t0, $v0, 4
    ctx->pc = 0x1cf068u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1cf06c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cf06cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf070: 0xc073942  jal         func_1CE508
    ctx->pc = 0x1CF070u;
    SET_GPR_U32(ctx, 31, 0x1CF078u);
    ctx->pc = 0x1CF074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF070u;
            // 0x1cf074: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE508u;
    if (runtime->hasFunction(0x1CE508u)) {
        auto targetFn = runtime->lookupFunction(0x1CE508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF078u; }
        if (ctx->pc != 0x1CF078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE508_0x1ce508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF078u; }
        if (ctx->pc != 0x1CF078u) { return; }
    }
    ctx->pc = 0x1CF078u;
label_1cf078:
    // 0x1cf078: 0x4430001  bgezl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CF078u;
    {
        const bool branch_taken_0x1cf078 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1cf078) {
            ctx->pc = 0x1CF07Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF078u;
            // 0x1cf07c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CF080u;
            goto label_1cf080;
        }
    }
    ctx->pc = 0x1CF080u;
label_1cf080:
    // 0x1cf080: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cf080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cf084: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1cf084u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf088: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1cf088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf08c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf08cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf090: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF090u;
            // 0x1cf094: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CF098u;
    // 0x1cf098: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cf098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cf09c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1cf09cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cf0a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf0a4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1cf0a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cf0a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cf0a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf0ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cf0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cf0b0: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x1cf0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x1cf0b4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1cf0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1cf0b8: 0xc0738fe  jal         func_1CE3F8
    ctx->pc = 0x1CF0B8u;
    SET_GPR_U32(ctx, 31, 0x1CF0C0u);
    ctx->pc = 0x1CF0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF0B8u;
            // 0x1cf0bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3F8u;
    if (runtime->hasFunction(0x1CE3F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF0C0u; }
        if (ctx->pc != 0x1CF0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE3F8_0x1ce3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF0C0u; }
        if (ctx->pc != 0x1CF0C0u) { return; }
    }
    ctx->pc = 0x1CF0C0u;
label_1cf0c0:
    // 0x1cf0c0: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF0C0u;
    {
        const bool branch_taken_0x1cf0c0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1cf0c0) {
            ctx->pc = 0x1CF0C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF0C0u;
            // 0x1cf0c4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CF0CCu;
            goto label_1cf0cc;
        }
    }
    ctx->pc = 0x1CF0C8u;
    // 0x1cf0c8: 0x2402fde2  addiu       $v0, $zero, -0x21E
    ctx->pc = 0x1cf0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966754));
label_1cf0cc:
    // 0x1cf0cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cf0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf0d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf0d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF0D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF0D4u;
            // 0x1cf0d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CF0DCu;
    // 0x1cf0dc: 0x0  nop
    ctx->pc = 0x1cf0dcu;
    // NOP
    // 0x1cf0e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cf0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cf0e4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1cf0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1cf0e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf0ec: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1cf0ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf0f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cf0f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf0f4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1cf0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1cf0f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1cf0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1cf0fc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1cf0fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf100: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cf100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1cf104: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1cf104u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf108: 0xae080004  sw          $t0, 0x4($s0)
    ctx->pc = 0x1cf108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 8));
    // 0x1cf10c: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1cf10cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1cf110: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1cf110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1cf114: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cf114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf118: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1cf118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cf11c: 0xc0738fe  jal         func_1CE3F8
    ctx->pc = 0x1CF11Cu;
    SET_GPR_U32(ctx, 31, 0x1CF124u);
    ctx->pc = 0x1CF120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF11Cu;
            // 0x1cf120: 0x26280004  addiu       $t0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3F8u;
    if (runtime->hasFunction(0x1CE3F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF124u; }
        if (ctx->pc != 0x1CF124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE3F8_0x1ce3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF124u; }
        if (ctx->pc != 0x1CF124u) { return; }
    }
    ctx->pc = 0x1CF124u;
label_1cf124:
    // 0x1cf124: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF124u;
    {
        const bool branch_taken_0x1cf124 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1CF128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF124u;
            // 0x1cf128: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf124) {
            ctx->pc = 0x1CF134u;
            goto label_1cf134;
        }
    }
    ctx->pc = 0x1CF12Cu;
    // 0x1cf12c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF12Cu;
    {
        const bool branch_taken_0x1cf12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF12Cu;
            // 0x1cf130: 0x2402fde2  addiu       $v0, $zero, -0x21E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966754));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf12c) {
            ctx->pc = 0x1CF150u;
            goto label_1cf150;
        }
    }
    ctx->pc = 0x1CF134u;
label_1cf134:
    // 0x1cf134: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1cf134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf138: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1cf138u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf13c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cf13cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf140: 0xc073942  jal         func_1CE508
    ctx->pc = 0x1CF140u;
    SET_GPR_U32(ctx, 31, 0x1CF148u);
    ctx->pc = 0x1CF144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF140u;
            // 0x1cf144: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE508u;
    if (runtime->hasFunction(0x1CE508u)) {
        auto targetFn = runtime->lookupFunction(0x1CE508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF148u; }
        if (ctx->pc != 0x1CF148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE508_0x1ce508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF148u; }
        if (ctx->pc != 0x1CF148u) { return; }
    }
    ctx->pc = 0x1CF148u;
label_1cf148:
    // 0x1cf148: 0x4430001  bgezl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CF148u;
    {
        const bool branch_taken_0x1cf148 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1cf148) {
            ctx->pc = 0x1CF14Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF148u;
            // 0x1cf14c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CF150u;
            goto label_1cf150;
        }
    }
    ctx->pc = 0x1CF150u;
label_1cf150:
    // 0x1cf150: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cf150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cf154: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1cf154u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cf158: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1cf158u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf15c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1cf15cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf160: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf164: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF164u;
            // 0x1cf168: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CF16Cu;
    // 0x1cf16c: 0x0  nop
    ctx->pc = 0x1cf16cu;
    // NOP
    // 0x1cf170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cf170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cf174: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cf174u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf178: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf17c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1cf17cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cf180: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cf180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf184: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cf184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cf188: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1cf188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1cf18c: 0xc0738fe  jal         func_1CE3F8
    ctx->pc = 0x1CF18Cu;
    SET_GPR_U32(ctx, 31, 0x1CF194u);
    ctx->pc = 0x1CF190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF18Cu;
            // 0x1cf190: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3F8u;
    if (runtime->hasFunction(0x1CE3F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF194u; }
        if (ctx->pc != 0x1CF194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE3F8_0x1ce3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF194u; }
        if (ctx->pc != 0x1CF194u) { return; }
    }
    ctx->pc = 0x1CF194u;
label_1cf194:
    // 0x1cf194: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF194u;
    {
        const bool branch_taken_0x1cf194 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1cf194) {
            ctx->pc = 0x1CF198u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF194u;
            // 0x1cf198: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CF1A0u;
            goto label_1cf1a0;
        }
    }
    ctx->pc = 0x1CF19Cu;
    // 0x1cf19c: 0x2402fde2  addiu       $v0, $zero, -0x21E
    ctx->pc = 0x1cf19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966754));
label_1cf1a0:
    // 0x1cf1a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cf1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf1a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf1a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF1A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF1A8u;
            // 0x1cf1ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CF1B0u;
    // 0x1cf1b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cf1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cf1b4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1cf1b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cf1b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf1bc: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1cf1bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cf1c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cf1c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cf1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cf1c8: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x1cf1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x1cf1cc: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x1cf1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1cf1d0: 0xc0738fe  jal         func_1CE3F8
    ctx->pc = 0x1CF1D0u;
    SET_GPR_U32(ctx, 31, 0x1CF1D8u);
    ctx->pc = 0x1CF1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF1D0u;
            // 0x1cf1d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3F8u;
    if (runtime->hasFunction(0x1CE3F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF1D8u; }
        if (ctx->pc != 0x1CF1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE3F8_0x1ce3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF1D8u; }
        if (ctx->pc != 0x1CF1D8u) { return; }
    }
    ctx->pc = 0x1CF1D8u;
label_1cf1d8:
    // 0x1cf1d8: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF1D8u;
    {
        const bool branch_taken_0x1cf1d8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1cf1d8) {
            ctx->pc = 0x1CF1DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF1D8u;
            // 0x1cf1dc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CF1E4u;
            goto label_1cf1e4;
        }
    }
    ctx->pc = 0x1CF1E0u;
    // 0x1cf1e0: 0x2402fde2  addiu       $v0, $zero, -0x21E
    ctx->pc = 0x1cf1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966754));
label_1cf1e4:
    // 0x1cf1e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cf1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf1e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf1e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF1ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF1ECu;
            // 0x1cf1f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CF1F4u;
    // 0x1cf1f4: 0x0  nop
    ctx->pc = 0x1cf1f4u;
    // NOP
}
