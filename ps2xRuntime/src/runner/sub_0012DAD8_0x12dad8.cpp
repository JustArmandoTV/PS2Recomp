#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012DAD8
// Address: 0x12dad8 - 0x12dbc0
void sub_0012DAD8_0x12dad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012DAD8_0x12dad8");
#endif

    switch (ctx->pc) {
        case 0x12db10u: goto label_12db10;
        case 0x12db30u: goto label_12db30;
        case 0x12db54u: goto label_12db54;
        case 0x12db88u: goto label_12db88;
        case 0x12dba8u: goto label_12dba8;
        default: break;
    }

    ctx->pc = 0x12dad8u;

    // 0x12dad8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12dad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12dadc: 0x248f0040  addiu       $t7, $a0, 0x40
    ctx->pc = 0x12dadcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x12dae0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12dae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12dae4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12dae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12dae8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12dae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12daec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12daecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12daf0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12daf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12daf4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x12daf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x12daf8: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x12daf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x12dafc: 0x14af001d  bne         $a1, $t7, . + 4 + (0x1D << 2)
    ctx->pc = 0x12DAFCu;
    {
        const bool branch_taken_0x12dafc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 15));
        ctx->pc = 0x12DB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DAFCu;
            // 0x12db00: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dafc) {
            ctx->pc = 0x12DB74u;
            goto label_12db74;
        }
    }
    ctx->pc = 0x12DB04u;
    // 0x12db04: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x12db04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x12db08: 0xc04a2e4  jal         func_128B90
    ctx->pc = 0x12DB08u;
    SET_GPR_U32(ctx, 31, 0x12DB10u);
    ctx->pc = 0x12DB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12DB08u;
            // 0x12db0c: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B90u;
    if (runtime->hasFunction(0x128B90u)) {
        auto targetFn = runtime->lookupFunction(0x128B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DB10u; }
        if (ctx->pc != 0x12DB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128B90_0x128b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DB10u; }
        if (ctx->pc != 0x12DB10u) { return; }
    }
    ctx->pc = 0x12DB10u;
label_12db10:
    // 0x12db10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12db10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db14: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x12DB14u;
    {
        const bool branch_taken_0x12db14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DB14u;
            // 0x12db18: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12db14) {
            ctx->pc = 0x12DB54u;
            goto label_12db54;
        }
    }
    ctx->pc = 0x12DB1Cu;
    // 0x12db1c: 0xae510030  sw          $s1, 0x30($s2)
    ctx->pc = 0x12db1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 17));
    // 0x12db20: 0x240f0400  addiu       $t7, $zero, 0x400
    ctx->pc = 0x12db20u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x12db24: 0xae4f0034  sw          $t7, 0x34($s2)
    ctx->pc = 0x12db24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 15));
    // 0x12db28: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x12db28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12db2c: 0x263103fd  addiu       $s1, $s1, 0x3FD
    ctx->pc = 0x12db2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1021));
label_12db30:
    // 0x12db30: 0x2727821  addu        $t7, $s3, $s2
    ctx->pc = 0x12db30u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x12db34: 0x2336821  addu        $t5, $s1, $s3
    ctx->pc = 0x12db34u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x12db38: 0x91ee0040  lbu         $t6, 0x40($t7)
    ctx->pc = 0x12db38u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 64)));
    // 0x12db3c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x12db3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x12db40: 0x0  nop
    ctx->pc = 0x12db40u;
    // NOP
    // 0x12db44: 0x661fffa  bgez        $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12DB44u;
    {
        const bool branch_taken_0x12db44 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x12DB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DB44u;
            // 0x12db48: 0xa1ae0000  sb          $t6, 0x0($t5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12db44) {
            ctx->pc = 0x12DB30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12db30;
        }
    }
    ctx->pc = 0x12DB4Cu;
    // 0x12db4c: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x12db4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x12db50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12db50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12db54:
    // 0x12db54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12db54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12db58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12db58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12db5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12db5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12db60: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12db60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12db64: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12db64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12db68: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x12db68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12db6c: 0x3e00008  jr          $ra
    ctx->pc = 0x12DB6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DB6Cu;
            // 0x12db70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12DB74u;
label_12db74:
    // 0x12db74: 0x8c930034  lw          $s3, 0x34($a0)
    ctx->pc = 0x12db74u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x12db78: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x12db78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x12db7c: 0x13a040  sll         $s4, $s3, 1
    ctx->pc = 0x12db7cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x12db80: 0xc04ab94  jal         func_12AE50
    ctx->pc = 0x12DB80u;
    SET_GPR_U32(ctx, 31, 0x12DB88u);
    ctx->pc = 0x12DB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12DB80u;
            // 0x12db84: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AE50u;
    if (runtime->hasFunction(0x12AE50u)) {
        auto targetFn = runtime->lookupFunction(0x12AE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DB88u; }
        if (ctx->pc != 0x12DB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AE50_0x12ae50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DB88u; }
        if (ctx->pc != 0x12DB88u) { return; }
    }
    ctx->pc = 0x12DB88u;
label_12db88:
    // 0x12db88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12db88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db8c: 0x1220fff1  beqz        $s1, . + 4 + (-0xF << 2)
    ctx->pc = 0x12DB8Cu;
    {
        const bool branch_taken_0x12db8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DB8Cu;
            // 0x12db90: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12db8c) {
            ctx->pc = 0x12DB54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12db54;
        }
    }
    ctx->pc = 0x12DB94u;
    // 0x12db94: 0x2338021  addu        $s0, $s1, $s3
    ctx->pc = 0x12db94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x12db98: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12db98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12db9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dba0: 0xc04a508  jal         func_129420
    ctx->pc = 0x12DBA0u;
    SET_GPR_U32(ctx, 31, 0x12DBA8u);
    ctx->pc = 0x12DBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12DBA0u;
            // 0x12dba4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DBA8u; }
        if (ctx->pc != 0x12DBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DBA8u; }
        if (ctx->pc != 0x12DBA8u) { return; }
    }
    ctx->pc = 0x12DBA8u;
label_12dba8:
    // 0x12dba8: 0xae540034  sw          $s4, 0x34($s2)
    ctx->pc = 0x12dba8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 20));
    // 0x12dbac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12dbacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12dbb0: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x12dbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x12dbb4: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x12DBB4u;
    {
        const bool branch_taken_0x12dbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DBB4u;
            // 0x12dbb8: 0xae510030  sw          $s1, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dbb4) {
            ctx->pc = 0x12DB54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12db54;
        }
    }
    ctx->pc = 0x12DBBCu;
    // 0x12dbbc: 0x0  nop
    ctx->pc = 0x12dbbcu;
    // NOP
}
