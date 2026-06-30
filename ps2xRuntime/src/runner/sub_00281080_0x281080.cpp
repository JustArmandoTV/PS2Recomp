#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00281080
// Address: 0x281080 - 0x281150
void sub_00281080_0x281080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281080_0x281080");
#endif

    switch (ctx->pc) {
        case 0x2810c0u: goto label_2810c0;
        case 0x2810d4u: goto label_2810d4;
        case 0x2810f0u: goto label_2810f0;
        case 0x28111cu: goto label_28111c;
        default: break;
    }

    ctx->pc = 0x281080u;

    // 0x281080: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x281080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x281084: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x281084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x281088: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x281088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28108c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28108cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x281090: 0x59843  sra         $s3, $a1, 1
    ctx->pc = 0x281090u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 5), 1));
    // 0x281094: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x281094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x281098: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x281098u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28109c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28109cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2810a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2810a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2810a4: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2810A4u;
    {
        const bool branch_taken_0x2810a4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2810A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2810A4u;
            // 0x2810a8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2810a4) {
            ctx->pc = 0x2810B4u;
            goto label_2810b4;
        }
    }
    ctx->pc = 0x2810ACu;
    // 0x2810ac: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2810acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2810b0: 0x39843  sra         $s3, $v1, 1
    ctx->pc = 0x2810b0u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 3), 1));
label_2810b4:
    // 0x2810b4: 0x1a60000a  blez        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x2810B4u;
    {
        const bool branch_taken_0x2810b4 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x2810b4) {
            ctx->pc = 0x2810E0u;
            goto label_2810e0;
        }
    }
    ctx->pc = 0x2810BCu;
    // 0x2810bc: 0x0  nop
    ctx->pc = 0x2810bcu;
    // NOP
label_2810c0:
    // 0x2810c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2810c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2810c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2810c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2810c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2810c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2810cc: 0xc0a051c  jal         func_281470
    ctx->pc = 0x2810CCu;
    SET_GPR_U32(ctx, 31, 0x2810D4u);
    ctx->pc = 0x2810D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2810CCu;
            // 0x2810d0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281470u;
    if (runtime->hasFunction(0x281470u)) {
        auto targetFn = runtime->lookupFunction(0x281470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2810D4u; }
        if (ctx->pc != 0x2810D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281470_0x281470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2810D4u; }
        if (ctx->pc != 0x2810D4u) { return; }
    }
    ctx->pc = 0x2810D4u;
label_2810d4:
    // 0x2810d4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2810d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2810d8: 0x1e60fff9  bgtz        $s3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2810D8u;
    {
        const bool branch_taken_0x2810d8 = (GPR_S32(ctx, 19) > 0);
        if (branch_taken_0x2810d8) {
            ctx->pc = 0x2810C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2810c0;
        }
    }
    ctx->pc = 0x2810E0u;
label_2810e0:
    // 0x2810e0: 0x1a200011  blez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2810E0u;
    {
        const bool branch_taken_0x2810e0 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x2810e0) {
            ctx->pc = 0x281128u;
            goto label_281128;
        }
    }
    ctx->pc = 0x2810E8u;
    // 0x2810e8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2810e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2810ec: 0x2429821  addu        $s3, $s2, $v0
    ctx->pc = 0x2810ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2810f0:
    // 0x2810f0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2810f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2810f4: 0x8e62fffc  lw          $v0, -0x4($s3)
    ctx->pc = 0x2810f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967292)));
    // 0x2810f8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2810f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2810fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2810fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281100: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x281100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281104: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x281104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281108: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x281108u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28110c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x28110cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x281110: 0xae63fffc  sw          $v1, -0x4($s3)
    ctx->pc = 0x281110u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294967292), GPR_U32(ctx, 3));
    // 0x281114: 0xc0a051c  jal         func_281470
    ctx->pc = 0x281114u;
    SET_GPR_U32(ctx, 31, 0x28111Cu);
    ctx->pc = 0x281118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281114u;
            // 0x281118: 0x2673fffc  addiu       $s3, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281470u;
    if (runtime->hasFunction(0x281470u)) {
        auto targetFn = runtime->lookupFunction(0x281470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28111Cu; }
        if (ctx->pc != 0x28111Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281470_0x281470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28111Cu; }
        if (ctx->pc != 0x28111Cu) { return; }
    }
    ctx->pc = 0x28111Cu;
label_28111c:
    // 0x28111c: 0x1e20fff4  bgtz        $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x28111Cu;
    {
        const bool branch_taken_0x28111c = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x28111c) {
            ctx->pc = 0x2810F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2810f0;
        }
    }
    ctx->pc = 0x281124u;
    // 0x281124: 0x0  nop
    ctx->pc = 0x281124u;
    // NOP
label_281128:
    // 0x281128: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x281128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28112c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28112cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281130: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x281130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281134: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x281134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281138: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x281138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28113c: 0x3e00008  jr          $ra
    ctx->pc = 0x28113Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28113Cu;
            // 0x281140: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281144u;
    // 0x281144: 0x0  nop
    ctx->pc = 0x281144u;
    // NOP
    // 0x281148: 0x0  nop
    ctx->pc = 0x281148u;
    // NOP
    // 0x28114c: 0x0  nop
    ctx->pc = 0x28114cu;
    // NOP
}
