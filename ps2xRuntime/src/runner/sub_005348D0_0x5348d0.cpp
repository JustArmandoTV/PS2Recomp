#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005348D0
// Address: 0x5348d0 - 0x5349c0
void sub_005348D0_0x5348d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005348D0_0x5348d0");
#endif

    switch (ctx->pc) {
        case 0x534964u: goto label_534964;
        default: break;
    }

    ctx->pc = 0x5348d0u;

    // 0x5348d0: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x5348D0u;
    {
        const bool branch_taken_0x5348d0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x5348D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5348D0u;
            // 0x5348d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5348d0) {
            ctx->pc = 0x5348E0u;
            goto label_5348e0;
        }
    }
    ctx->pc = 0x5348D8u;
    // 0x5348d8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x5348D8u;
    {
        const bool branch_taken_0x5348d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5348DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5348D8u;
            // 0x5348dc: 0xac8507b8  sw          $a1, 0x7B8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1976), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5348d8) {
            ctx->pc = 0x53491Cu;
            goto label_53491c;
        }
    }
    ctx->pc = 0x5348E0u;
label_5348e0:
    // 0x5348e0: 0x2402fffa  addiu       $v0, $zero, -0x6
    ctx->pc = 0x5348e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x5348e4: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x5348E4u;
    {
        const bool branch_taken_0x5348e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x5348E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5348E4u;
            // 0x5348e8: 0xac8007b8  sw          $zero, 0x7B8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1976), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5348e4) {
            ctx->pc = 0x534918u;
            goto label_534918;
        }
    }
    ctx->pc = 0x5348ECu;
    // 0x5348ec: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x5348ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x5348f0: 0x50a2000a  beql        $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x5348F0u;
    {
        const bool branch_taken_0x5348f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x5348f0) {
            ctx->pc = 0x5348F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5348F0u;
            // 0x5348f4: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53491Cu;
            goto label_53491c;
        }
    }
    ctx->pc = 0x5348F8u;
    // 0x5348f8: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x5348f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x5348fc: 0x50a20007  beql        $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x5348FCu;
    {
        const bool branch_taken_0x5348fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x5348fc) {
            ctx->pc = 0x534900u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5348FCu;
            // 0x534900: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53491Cu;
            goto label_53491c;
        }
    }
    ctx->pc = 0x534904u;
    // 0x534904: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x534904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x534908: 0x50a20004  beql        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x534908u;
    {
        const bool branch_taken_0x534908 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x534908) {
            ctx->pc = 0x53490Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534908u;
            // 0x53490c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53491Cu;
            goto label_53491c;
        }
    }
    ctx->pc = 0x534910u;
    // 0x534910: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x534910u;
    {
        const bool branch_taken_0x534910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x534914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534910u;
            // 0x534914: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534910) {
            ctx->pc = 0x53491Cu;
            goto label_53491c;
        }
    }
    ctx->pc = 0x534918u;
label_534918:
    // 0x534918: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x534918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_53491c:
    // 0x53491c: 0x3e00008  jr          $ra
    ctx->pc = 0x53491Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x534924u;
    // 0x534924: 0x0  nop
    ctx->pc = 0x534924u;
    // NOP
    // 0x534928: 0x0  nop
    ctx->pc = 0x534928u;
    // NOP
    // 0x53492c: 0x0  nop
    ctx->pc = 0x53492cu;
    // NOP
    // 0x534930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x534930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x534934: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x534934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x534938: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x534938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x53493c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x53493cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x534940: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x534940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x534944: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x534944u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x534948: 0xac8007b8  sw          $zero, 0x7B8($a0)
    ctx->pc = 0x534948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1976), GPR_U32(ctx, 0));
    // 0x53494c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x53494cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x534950: 0x8082002c  lb          $v0, 0x2C($a0)
    ctx->pc = 0x534950u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x534954: 0x80850024  lb          $a1, 0x24($a0)
    ctx->pc = 0x534954u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x534958: 0x8e0907b4  lw          $t1, 0x7B4($s0)
    ctx->pc = 0x534958u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1972)));
    // 0x53495c: 0xc04886e  jal         func_1221B8
    ctx->pc = 0x53495Cu;
    SET_GPR_U32(ctx, 31, 0x534964u);
    ctx->pc = 0x534960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53495Cu;
            // 0x534960: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1221B8u;
    if (runtime->hasFunction(0x1221B8u)) {
        auto targetFn = runtime->lookupFunction(0x1221B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x534964u; }
        if (ctx->pc != 0x534964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001221B8_0x1221b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x534964u; }
        if (ctx->pc != 0x534964u) { return; }
    }
    ctx->pc = 0x534964u;
label_534964:
    // 0x534964: 0x2403ff2e  addiu       $v1, $zero, -0xD2
    ctx->pc = 0x534964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
    // 0x534968: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x534968u;
    {
        const bool branch_taken_0x534968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x53496Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534968u;
            // 0x53496c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534968) {
            ctx->pc = 0x53499Cu;
            goto label_53499c;
        }
    }
    ctx->pc = 0x534970u;
    // 0x534970: 0x2403ff38  addiu       $v1, $zero, -0xC8
    ctx->pc = 0x534970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
    // 0x534974: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x534974u;
    {
        const bool branch_taken_0x534974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x534974) {
            ctx->pc = 0x534978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534974u;
            // 0x534978: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5349A0u;
            goto label_5349a0;
        }
    }
    ctx->pc = 0x53497Cu;
    // 0x53497c: 0x2403ff9c  addiu       $v1, $zero, -0x64
    ctx->pc = 0x53497cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x534980: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x534980u;
    {
        const bool branch_taken_0x534980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x534980) {
            ctx->pc = 0x53499Cu;
            goto label_53499c;
        }
    }
    ctx->pc = 0x534988u;
    // 0x534988: 0x2403ffa5  addiu       $v1, $zero, -0x5B
    ctx->pc = 0x534988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
    // 0x53498c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x53498Cu;
    {
        const bool branch_taken_0x53498c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x53498c) {
            ctx->pc = 0x53499Cu;
            goto label_53499c;
        }
    }
    ctx->pc = 0x534994u;
    // 0x534994: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x534994u;
    {
        const bool branch_taken_0x534994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x534994) {
            ctx->pc = 0x534998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534994u;
            // 0x534998: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5349A0u;
            goto label_5349a0;
        }
    }
    ctx->pc = 0x53499Cu;
label_53499c:
    // 0x53499c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x53499cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_5349a0:
    // 0x5349a0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x5349a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x5349a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5349a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5349a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5349a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5349ac: 0x3e00008  jr          $ra
    ctx->pc = 0x5349ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5349B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5349ACu;
            // 0x5349b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5349B4u;
    // 0x5349b4: 0x0  nop
    ctx->pc = 0x5349b4u;
    // NOP
    // 0x5349b8: 0x0  nop
    ctx->pc = 0x5349b8u;
    // NOP
    // 0x5349bc: 0x0  nop
    ctx->pc = 0x5349bcu;
    // NOP
}
