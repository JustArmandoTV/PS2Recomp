#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016DAB0
// Address: 0x16dab0 - 0x16db80
void sub_0016DAB0_0x16dab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DAB0_0x16dab0");
#endif

    switch (ctx->pc) {
        case 0x16db00u: goto label_16db00;
        case 0x16db10u: goto label_16db10;
        case 0x16db18u: goto label_16db18;
        case 0x16db20u: goto label_16db20;
        default: break;
    }

    ctx->pc = 0x16dab0u;

    // 0x16dab0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16dab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16dab4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x16dab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x16dab8: 0x3c16005e  lui         $s6, 0x5E
    ctx->pc = 0x16dab8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)94 << 16));
    // 0x16dabc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16dabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16dac0: 0x26c3ab00  addiu       $v1, $s6, -0x5500
    ctx->pc = 0x16dac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294945536));
    // 0x16dac4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16dac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16dac8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16dac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16dacc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16daccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16dad0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16dad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16dad4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x16dad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x16dad8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x16dad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x16dadc: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x16dadcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16dae0: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16DAE0u;
    {
        const bool branch_taken_0x16dae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16DAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DAE0u;
            // 0x16dae4: 0x3c15005e  lui         $s5, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dae0) {
            ctx->pc = 0x16DB38u;
            goto label_16db38;
        }
    }
    ctx->pc = 0x16DAE8u;
    // 0x16dae8: 0x3c14005e  lui         $s4, 0x5E
    ctx->pc = 0x16dae8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)94 << 16));
    // 0x16daec: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x16daecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16daf0: 0x26b2aaf8  addiu       $s2, $s5, -0x5508
    ctx->pc = 0x16daf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945528));
    // 0x16daf4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x16daf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16daf8: 0x2690aacc  addiu       $s0, $s4, -0x5534
    ctx->pc = 0x16daf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945484));
    // 0x16dafc: 0x0  nop
    ctx->pc = 0x16dafcu;
    // NOP
label_16db00:
    // 0x16db00: 0xfe510000  sd          $s1, 0x0($s2)
    ctx->pc = 0x16db00u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 17));
    // 0x16db04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16db04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16db08: 0xc04307c  jal         func_10C1F0
    ctx->pc = 0x16DB08u;
    SET_GPR_U32(ctx, 31, 0x16DB10u);
    ctx->pc = 0x16DB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DB08u;
            // 0x16db0c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C1F0u;
    if (runtime->hasFunction(0x10C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x10C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB10u; }
        if (ctx->pc != 0x16DB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C1F0_0x10c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB10u; }
        if (ctx->pc != 0x16DB10u) { return; }
    }
    ctx->pc = 0x16DB10u;
label_16db10:
    // 0x16db10: 0xc0430a4  jal         func_10C290
    ctx->pc = 0x16DB10u;
    SET_GPR_U32(ctx, 31, 0x16DB18u);
    ctx->pc = 0x16DB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DB10u;
            // 0x16db14: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C290u;
    if (runtime->hasFunction(0x10C290u)) {
        auto targetFn = runtime->lookupFunction(0x10C290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB18u; }
        if (ctx->pc != 0x16DB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C290_0x10c290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB18u; }
        if (ctx->pc != 0x16DB18u) { return; }
    }
    ctx->pc = 0x16DB18u;
label_16db18:
    // 0x16db18: 0xc05b3f0  jal         func_16CFC0
    ctx->pc = 0x16DB18u;
    SET_GPR_U32(ctx, 31, 0x16DB20u);
    ctx->pc = 0x16DB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DB18u;
            // 0x16db1c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16CFC0u;
    if (runtime->hasFunction(0x16CFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16CFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB20u; }
        if (ctx->pc != 0x16DB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016CFC0_0x16cfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DB20u; }
        if (ctx->pc != 0x16DB20u) { return; }
    }
    ctx->pc = 0x16DB20u;
label_16db20:
    // 0x16db20: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x16db20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16db24: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x16DB24u;
    {
        const bool branch_taken_0x16db24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DB24u;
            // 0x16db28: 0x26c2ab00  addiu       $v0, $s6, -0x5500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294945536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db24) {
            ctx->pc = 0x16DB00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16db00;
        }
    }
    ctx->pc = 0x16DB2Cu;
    // 0x16db2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16DB2Cu;
    {
        const bool branch_taken_0x16db2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DB2Cu;
            // 0x16db30: 0xdfb60030  ld          $s6, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db2c) {
            ctx->pc = 0x16DB44u;
            goto label_16db44;
        }
    }
    ctx->pc = 0x16DB34u;
    // 0x16db34: 0x0  nop
    ctx->pc = 0x16db34u;
    // NOP
label_16db38:
    // 0x16db38: 0x3c14005e  lui         $s4, 0x5E
    ctx->pc = 0x16db38u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)94 << 16));
    // 0x16db3c: 0x26c2ab00  addiu       $v0, $s6, -0x5500
    ctx->pc = 0x16db3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294945536));
    // 0x16db40: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x16db40u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16db44:
    // 0x16db44: 0x26a3aaf8  addiu       $v1, $s5, -0x5508
    ctx->pc = 0x16db44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945528));
    // 0x16db48: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x16db48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16db4c: 0x2684aacc  addiu       $a0, $s4, -0x5534
    ctx->pc = 0x16db4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945484));
    // 0x16db50: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16db50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16db54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16db54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16db58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16db58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16db5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16db5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16db60: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16db60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16db64: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x16db64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16db68: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x16db68u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x16db6c: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x16db6cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x16db70: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x16db70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x16db74: 0x3e00008  jr          $ra
    ctx->pc = 0x16DB74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DB74u;
            // 0x16db78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16DB7Cu;
    // 0x16db7c: 0x0  nop
    ctx->pc = 0x16db7cu;
    // NOP
}
