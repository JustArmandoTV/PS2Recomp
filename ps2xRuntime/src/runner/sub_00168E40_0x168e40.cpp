#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00168E40
// Address: 0x168e40 - 0x1690f0
void sub_00168E40_0x168e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168E40_0x168e40");
#endif

    switch (ctx->pc) {
        case 0x168eb0u: goto label_168eb0;
        case 0x168ed4u: goto label_168ed4;
        case 0x168f20u: goto label_168f20;
        case 0x168f38u: goto label_168f38;
        case 0x168f7cu: goto label_168f7c;
        case 0x168fa0u: goto label_168fa0;
        case 0x168fc8u: goto label_168fc8;
        case 0x168ffcu: goto label_168ffc;
        case 0x169014u: goto label_169014;
        case 0x169038u: goto label_169038;
        case 0x16908cu: goto label_16908c;
        case 0x1690a0u: goto label_1690a0;
        default: break;
    }

    ctx->pc = 0x168e40u;

    // 0x168e40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x168e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x168e44: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x168e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x168e48: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x168e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x168e4c: 0x24547be8  addiu       $s4, $v0, 0x7BE8
    ctx->pc = 0x168e4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 31720));
    // 0x168e50: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x168e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x168e54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x168e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x168e58: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x168e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x168e5c: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x168e5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e60: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x168e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x168e64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x168e64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e68: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x168e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x168e6c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x168e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x168e70: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x168e70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e74: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x168e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x168e78: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x168e78u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e7c: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x168e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x168e80: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x168e80u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e84: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x168e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x168e88: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x168e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x168e8c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x168e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x168e90: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x168e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x168e94: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x168e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x168e98: 0xafaa0014  sw          $t2, 0x14($sp)
    ctx->pc = 0x168e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
    // 0x168e9c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x168E9Cu;
    {
        const bool branch_taken_0x168e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x168EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168E9Cu;
            // 0x168ea0: 0x8fb30078  lw          $s3, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e9c) {
            ctx->pc = 0x168EB8u;
            goto label_168eb8;
        }
    }
    ctx->pc = 0x168EA4u;
    // 0x168ea4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x168ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x168ea8: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x168EA8u;
    SET_GPR_U32(ctx, 31, 0x168EB0u);
    ctx->pc = 0x168EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168EA8u;
            // 0x168eac: 0x248433f8  addiu       $a0, $a0, 0x33F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168EB0u; }
        if (ctx->pc != 0x168EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168EB0u; }
        if (ctx->pc != 0x168EB0u) { return; }
    }
    ctx->pc = 0x168EB0u;
label_168eb0:
    // 0x168eb0: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x168EB0u;
    {
        const bool branch_taken_0x168eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168EB0u;
            // 0x168eb4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168eb0) {
            ctx->pc = 0x1690BCu;
            goto label_1690bc;
        }
    }
    ctx->pc = 0x168EB8u;
label_168eb8:
    // 0x168eb8: 0x3c08005d  lui         $t0, 0x5D
    ctx->pc = 0x168eb8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)93 << 16));
    // 0x168ebc: 0x25167be0  addiu       $s6, $t0, 0x7BE0
    ctx->pc = 0x168ebcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 8), 31712));
    // 0x168ec0: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x168ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x168ec4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x168EC4u;
    {
        const bool branch_taken_0x168ec4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x168EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168EC4u;
            // 0x168ec8: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ec4) {
            ctx->pc = 0x168EDCu;
            goto label_168edc;
        }
    }
    ctx->pc = 0x168ECCu;
    // 0x168ecc: 0xc05a810  jal         func_16A040
    ctx->pc = 0x168ECCu;
    SET_GPR_U32(ctx, 31, 0x168ED4u);
    ctx->pc = 0x16A040u;
    if (runtime->hasFunction(0x16A040u)) {
        auto targetFn = runtime->lookupFunction(0x16A040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168ED4u; }
        if (ctx->pc != 0x168ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A040_0x16a040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168ED4u; }
        if (ctx->pc != 0x168ED4u) { return; }
    }
    ctx->pc = 0x168ED4u;
label_168ed4:
    // 0x168ed4: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x168ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x168ed8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x168ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_168edc:
    // 0x168edc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x168edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x168ee0: 0x24517be4  addiu       $s1, $v0, 0x7BE4
    ctx->pc = 0x168ee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 31716));
    // 0x168ee4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x168ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168ee8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x168ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x168eec: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x168eecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x168ef0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x168ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x168ef4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x168EF4u;
    {
        const bool branch_taken_0x168ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168EF4u;
            // 0x168ef8: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ef4) {
            ctx->pc = 0x168F08u;
            goto label_168f08;
        }
    }
    ctx->pc = 0x168EFCu;
    // 0x168efc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x168EFCu;
    {
        const bool branch_taken_0x168efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168EFCu;
            // 0x168f00: 0x24843438  addiu       $a0, $a0, 0x3438 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168efc) {
            ctx->pc = 0x168F18u;
            goto label_168f18;
        }
    }
    ctx->pc = 0x168F04u;
    // 0x168f04: 0x0  nop
    ctx->pc = 0x168f04u;
    // NOP
label_168f08:
    // 0x168f08: 0x1e600009  bgtz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x168F08u;
    {
        const bool branch_taken_0x168f08 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x168F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168F08u;
            // 0x168f0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f08) {
            ctx->pc = 0x168F30u;
            goto label_168f30;
        }
    }
    ctx->pc = 0x168F10u;
    // 0x168f10: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x168f10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x168f14: 0x24843468  addiu       $a0, $a0, 0x3468
    ctx->pc = 0x168f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13416));
label_168f18:
    // 0x168f18: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x168F18u;
    SET_GPR_U32(ctx, 31, 0x168F20u);
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168F20u; }
        if (ctx->pc != 0x168F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168F20u; }
        if (ctx->pc != 0x168F20u) { return; }
    }
    ctx->pc = 0x168F20u;
label_168f20:
    // 0x168f20: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x168f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x168f24: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x168f24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x168f28: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x168F28u;
    {
        const bool branch_taken_0x168f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168F28u;
            // 0x168f2c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f28) {
            ctx->pc = 0x1690BCu;
            goto label_1690bc;
        }
    }
    ctx->pc = 0x168F30u;
label_168f30:
    // 0x168f30: 0xc05a180  jal         func_168600
    ctx->pc = 0x168F30u;
    SET_GPR_U32(ctx, 31, 0x168F38u);
    ctx->pc = 0x168F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168F30u;
            // 0x168f34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168600u;
    if (runtime->hasFunction(0x168600u)) {
        auto targetFn = runtime->lookupFunction(0x168600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168F38u; }
        if (ctx->pc != 0x168F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168600_0x168600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168F38u; }
        if (ctx->pc != 0x168F38u) { return; }
    }
    ctx->pc = 0x168F38u;
label_168f38:
    // 0x168f38: 0x4400026  bltz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x168F38u;
    {
        const bool branch_taken_0x168f38 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x168F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168F38u;
            // 0x168f3c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f38) {
            ctx->pc = 0x168FD4u;
            goto label_168fd4;
        }
    }
    ctx->pc = 0x168F40u;
    // 0x168f40: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x168f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x168f44: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x168F44u;
    {
        const bool branch_taken_0x168f44 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x168F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168F44u;
            // 0x168f48: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f44) {
            ctx->pc = 0x168F58u;
            goto label_168f58;
        }
    }
    ctx->pc = 0x168F4Cu;
    // 0x168f4c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x168F4Cu;
    {
        const bool branch_taken_0x168f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168F4Cu;
            // 0x168f50: 0x24843490  addiu       $a0, $a0, 0x3490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f4c) {
            ctx->pc = 0x16900Cu;
            goto label_16900c;
        }
    }
    ctx->pc = 0x168F54u;
    // 0x168f54: 0x0  nop
    ctx->pc = 0x168f54u;
    // NOP
label_168f58:
    // 0x168f58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x168f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x168f5c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x168f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x168f60: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x168f60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x168f64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x168f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168f68: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x168f68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x168f6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x168f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168f70: 0x2406011c  addiu       $a2, $zero, 0x11C
    ctx->pc = 0x168f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 284));
    // 0x168f74: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x168F74u;
    SET_GPR_U32(ctx, 31, 0x168F7Cu);
    ctx->pc = 0x168F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168F74u;
            // 0x168f78: 0xac407bdc  sw          $zero, 0x7BDC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 31708), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168F7Cu; }
        if (ctx->pc != 0x168F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168F7Cu; }
        if (ctx->pc != 0x168F7Cu) { return; }
    }
    ctx->pc = 0x168F7Cu;
label_168f7c:
    // 0x168f7c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x168f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x168f80: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x168f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x168f84: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x168f84u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x168f88: 0xac3076b0  sw          $s0, 0x76B0($at)
    ctx->pc = 0x168f88u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30384), GPR_U32(ctx, 16));
    // 0x168f8c: 0x16a00016  bnez        $s5, . + 4 + (0x16 << 2)
    ctx->pc = 0x168F8Cu;
    {
        const bool branch_taken_0x168f8c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x168F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168F8Cu;
            // 0x168f90: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f8c) {
            ctx->pc = 0x168FE8u;
            goto label_168fe8;
        }
    }
    ctx->pc = 0x168F94u;
    // 0x168f94: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x168f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168f98: 0xc05a78a  jal         func_169E28
    ctx->pc = 0x168F98u;
    SET_GPR_U32(ctx, 31, 0x168FA0u);
    ctx->pc = 0x168F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168F98u;
            // 0x168f9c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169E28u;
    if (runtime->hasFunction(0x169E28u)) {
        auto targetFn = runtime->lookupFunction(0x169E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168FA0u; }
        if (ctx->pc != 0x168FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00169E28_0x169e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168FA0u; }
        if (ctx->pc != 0x168FA0u) { return; }
    }
    ctx->pc = 0x168FA0u;
label_168fa0:
    // 0x168fa0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x168FA0u;
    {
        const bool branch_taken_0x168fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168FA0u;
            // 0x168fa4: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168fa0) {
            ctx->pc = 0x169004u;
            goto label_169004;
        }
    }
    ctx->pc = 0x168FA8u;
    // 0x168fa8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x168fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168fac: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x168facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168fb0: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x168fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x168fb4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x168fb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168fb8: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x168fb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x168fbc: 0x27a90008  addiu       $t1, $sp, 0x8
    ctx->pc = 0x168fbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x168fc0: 0xc05ac64  jal         func_16B190
    ctx->pc = 0x168FC0u;
    SET_GPR_U32(ctx, 31, 0x168FC8u);
    ctx->pc = 0x168FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168FC0u;
            // 0x168fc4: 0x27aa000c  addiu       $t2, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B190u;
    if (runtime->hasFunction(0x16B190u)) {
        auto targetFn = runtime->lookupFunction(0x16B190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168FC8u; }
        if (ctx->pc != 0x168FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B190_0x16b190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168FC8u; }
        if (ctx->pc != 0x168FC8u) { return; }
    }
    ctx->pc = 0x168FC8u;
label_168fc8:
    // 0x168fc8: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x168FC8u;
    {
        const bool branch_taken_0x168fc8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x168fc8) {
            ctx->pc = 0x168FCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x168FC8u;
            // 0x168fcc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x168FE0u;
            goto label_168fe0;
        }
    }
    ctx->pc = 0x168FD0u;
    // 0x168fd0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x168fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_168fd4:
    // 0x168fd4: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x168FD4u;
    {
        const bool branch_taken_0x168fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168FD4u;
            // 0x168fd8: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168fd4) {
            ctx->pc = 0x1690BCu;
            goto label_1690bc;
        }
    }
    ctx->pc = 0x168FDCu;
    // 0x168fdc: 0x0  nop
    ctx->pc = 0x168fdcu;
    // NOP
label_168fe0:
    // 0x168fe0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x168FE0u;
    {
        const bool branch_taken_0x168fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168FE0u;
            // 0x168fe4: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168fe0) {
            ctx->pc = 0x169040u;
            goto label_169040;
        }
    }
    ctx->pc = 0x168FE8u;
label_168fe8:
    // 0x168fe8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x168fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168fec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x168fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ff0: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x168ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x168ff4: 0xc05a6f4  jal         func_169BD0
    ctx->pc = 0x168FF4u;
    SET_GPR_U32(ctx, 31, 0x168FFCu);
    ctx->pc = 0x168FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168FF4u;
            // 0x168ff8: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169BD0u;
    if (runtime->hasFunction(0x169BD0u)) {
        auto targetFn = runtime->lookupFunction(0x169BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168FFCu; }
        if (ctx->pc != 0x168FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00169BD0_0x169bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168FFCu; }
        if (ctx->pc != 0x168FFCu) { return; }
    }
    ctx->pc = 0x168FFCu;
label_168ffc:
    // 0x168ffc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x168FFCu;
    {
        const bool branch_taken_0x168ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x169000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168FFCu;
            // 0x169000: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ffc) {
            ctx->pc = 0x169028u;
            goto label_169028;
        }
    }
    ctx->pc = 0x169004u;
label_169004:
    // 0x169004: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x169004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x169008: 0x248434c0  addiu       $a0, $a0, 0x34C0
    ctx->pc = 0x169008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13504));
label_16900c:
    // 0x16900c: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x16900Cu;
    SET_GPR_U32(ctx, 31, 0x169014u);
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169014u; }
        if (ctx->pc != 0x169014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169014u; }
        if (ctx->pc != 0x169014u) { return; }
    }
    ctx->pc = 0x169014u;
label_169014:
    // 0x169014: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x169014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x169018: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x169018u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x16901c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x16901Cu;
    {
        const bool branch_taken_0x16901c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16901Cu;
            // 0x169020: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16901c) {
            ctx->pc = 0x1690BCu;
            goto label_1690bc;
        }
    }
    ctx->pc = 0x169024u;
    // 0x169024: 0x0  nop
    ctx->pc = 0x169024u;
    // NOP
label_169028:
    // 0x169028: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x169028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16902c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x16902cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x169030: 0xc04b156  jal         func_12C558
    ctx->pc = 0x169030u;
    SET_GPR_U32(ctx, 31, 0x169038u);
    ctx->pc = 0x169034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169030u;
            // 0x169034: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C558u;
    if (runtime->hasFunction(0x12C558u)) {
        auto targetFn = runtime->lookupFunction(0x12C558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169038u; }
        if (ctx->pc != 0x169038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C558_0x12c558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169038u; }
        if (ctx->pc != 0x169038u) { return; }
    }
    ctx->pc = 0x169038u;
label_169038:
    // 0x169038: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x169038u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16903c: 0xae080114  sw          $t0, 0x114($s0)
    ctx->pc = 0x16903cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 8));
label_169040:
    // 0x169040: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x169040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x169044: 0x266307ff  addiu       $v1, $s3, 0x7FF
    ctx->pc = 0x169044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 2047));
    // 0x169048: 0xa200000e  sb          $zero, 0xE($s0)
    ctx->pc = 0x169048u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x16904c: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x16904cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x169050: 0x2a620000  slti        $v0, $s3, 0x0
    ctx->pc = 0x169050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x169054: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x169054u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x169058: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x169058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x16905c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x16905cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169060: 0x24527be0  addiu       $s2, $v0, 0x7BE0
    ctx->pc = 0x169060u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 31712));
    // 0x169064: 0x133ac3  sra         $a3, $s3, 11
    ctx->pc = 0x169064u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 19), 11));
    // 0x169068: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x169068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x16906c: 0xae040110  sw          $a0, 0x110($s0)
    ctx->pc = 0x16906cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 4));
    // 0x169070: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x169070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x169074: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x169074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169078: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x169078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16907c: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x16907cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x169080: 0x0  nop
    ctx->pc = 0x169080u;
    // NOP
    // 0x169084: 0xc05a9a8  jal         func_16A6A0
    ctx->pc = 0x169084u;
    SET_GPR_U32(ctx, 31, 0x16908Cu);
    ctx->pc = 0x169088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169084u;
            // 0x169088: 0xac467bf0  sw          $a2, 0x7BF0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 31728), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A6A0u;
    if (runtime->hasFunction(0x16A6A0u)) {
        auto targetFn = runtime->lookupFunction(0x16A6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16908Cu; }
        if (ctx->pc != 0x16908Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A6A0_0x16a6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16908Cu; }
        if (ctx->pc != 0x16908Cu) { return; }
    }
    ctx->pc = 0x16908Cu;
label_16908c:
    // 0x16908c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16908cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169090: 0x6230009  bgezl       $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x169090u;
    {
        const bool branch_taken_0x169090 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x169090) {
            ctx->pc = 0x169094u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x169090u;
            // 0x169094: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1690B8u;
            goto label_1690b8;
        }
    }
    ctx->pc = 0x169098u;
    // 0x169098: 0xc05a810  jal         func_16A040
    ctx->pc = 0x169098u;
    SET_GPR_U32(ctx, 31, 0x1690A0u);
    ctx->pc = 0x16909Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169098u;
            // 0x16909c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A040u;
    if (runtime->hasFunction(0x16A040u)) {
        auto targetFn = runtime->lookupFunction(0x16A040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1690A0u; }
        if (ctx->pc != 0x1690A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A040_0x16a040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1690A0u; }
        if (ctx->pc != 0x1690A0u) { return; }
    }
    ctx->pc = 0x1690A0u;
label_1690a0:
    // 0x1690a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1690a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1690a4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1690a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1690a8: 0xac627be8  sw          $v0, 0x7BE8($v1)
    ctx->pc = 0x1690a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 31720), GPR_U32(ctx, 2));
    // 0x1690ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1690ACu;
    {
        const bool branch_taken_0x1690ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1690B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1690ACu;
            // 0x1690b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1690ac) {
            ctx->pc = 0x1690BCu;
            goto label_1690bc;
        }
    }
    ctx->pc = 0x1690B4u;
    // 0x1690b4: 0x0  nop
    ctx->pc = 0x1690b4u;
    // NOP
label_1690b8:
    // 0x1690b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1690b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1690bc:
    // 0x1690bc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1690bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1690c0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1690c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1690c4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1690c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1690c8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1690c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1690cc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1690ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1690d0: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1690d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1690d4: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1690d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1690d8: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1690d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1690dc: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1690dcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1690e0: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1690e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1690e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1690E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1690E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1690E4u;
            // 0x1690e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1690ECu;
    // 0x1690ec: 0x0  nop
    ctx->pc = 0x1690ecu;
    // NOP
}
