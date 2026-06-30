#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016DB80
// Address: 0x16db80 - 0x16dc50
void sub_0016DB80_0x16db80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DB80_0x16db80");
#endif

    switch (ctx->pc) {
        case 0x16dbd0u: goto label_16dbd0;
        case 0x16dbe0u: goto label_16dbe0;
        case 0x16dbe8u: goto label_16dbe8;
        case 0x16dbf0u: goto label_16dbf0;
        default: break;
    }

    ctx->pc = 0x16db80u;

    // 0x16db80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16db80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16db84: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x16db84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x16db88: 0x3c16005e  lui         $s6, 0x5E
    ctx->pc = 0x16db88u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)94 << 16));
    // 0x16db8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16db8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16db90: 0x26c3aaf0  addiu       $v1, $s6, -0x5510
    ctx->pc = 0x16db90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294945520));
    // 0x16db94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16db94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16db98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16db98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16db9c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16db9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16dba0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16dba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16dba4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x16dba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x16dba8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x16dba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x16dbac: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x16dbacu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16dbb0: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16DBB0u;
    {
        const bool branch_taken_0x16dbb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16DBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DBB0u;
            // 0x16dbb4: 0x3c15005e  lui         $s5, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dbb0) {
            ctx->pc = 0x16DC08u;
            goto label_16dc08;
        }
    }
    ctx->pc = 0x16DBB8u;
    // 0x16dbb8: 0x3c14005e  lui         $s4, 0x5E
    ctx->pc = 0x16dbb8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)94 << 16));
    // 0x16dbbc: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x16dbbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dbc0: 0x26b2aae8  addiu       $s2, $s5, -0x5518
    ctx->pc = 0x16dbc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945512));
    // 0x16dbc4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x16dbc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16dbc8: 0x2690aac8  addiu       $s0, $s4, -0x5538
    ctx->pc = 0x16dbc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945480));
    // 0x16dbcc: 0x0  nop
    ctx->pc = 0x16dbccu;
    // NOP
label_16dbd0:
    // 0x16dbd0: 0xfe510000  sd          $s1, 0x0($s2)
    ctx->pc = 0x16dbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 17));
    // 0x16dbd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16dbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16dbd8: 0xc04307c  jal         func_10C1F0
    ctx->pc = 0x16DBD8u;
    SET_GPR_U32(ctx, 31, 0x16DBE0u);
    ctx->pc = 0x16DBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DBD8u;
            // 0x16dbdc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C1F0u;
    if (runtime->hasFunction(0x10C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x10C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DBE0u; }
        if (ctx->pc != 0x16DBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C1F0_0x10c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DBE0u; }
        if (ctx->pc != 0x16DBE0u) { return; }
    }
    ctx->pc = 0x16DBE0u;
label_16dbe0:
    // 0x16dbe0: 0xc0430a4  jal         func_10C290
    ctx->pc = 0x16DBE0u;
    SET_GPR_U32(ctx, 31, 0x16DBE8u);
    ctx->pc = 0x16DBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DBE0u;
            // 0x16dbe4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C290u;
    if (runtime->hasFunction(0x10C290u)) {
        auto targetFn = runtime->lookupFunction(0x10C290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DBE8u; }
        if (ctx->pc != 0x16DBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C290_0x10c290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DBE8u; }
        if (ctx->pc != 0x16DBE8u) { return; }
    }
    ctx->pc = 0x16DBE8u;
label_16dbe8:
    // 0x16dbe8: 0xc05b3f0  jal         func_16CFC0
    ctx->pc = 0x16DBE8u;
    SET_GPR_U32(ctx, 31, 0x16DBF0u);
    ctx->pc = 0x16DBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DBE8u;
            // 0x16dbec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16CFC0u;
    if (runtime->hasFunction(0x16CFC0u)) {
        auto targetFn = runtime->lookupFunction(0x16CFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DBF0u; }
        if (ctx->pc != 0x16DBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016CFC0_0x16cfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DBF0u; }
        if (ctx->pc != 0x16DBF0u) { return; }
    }
    ctx->pc = 0x16DBF0u;
label_16dbf0:
    // 0x16dbf0: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x16dbf0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16dbf4: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x16DBF4u;
    {
        const bool branch_taken_0x16dbf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DBF4u;
            // 0x16dbf8: 0x26c2aaf0  addiu       $v0, $s6, -0x5510 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294945520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dbf4) {
            ctx->pc = 0x16DBD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16dbd0;
        }
    }
    ctx->pc = 0x16DBFCu;
    // 0x16dbfc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16DBFCu;
    {
        const bool branch_taken_0x16dbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DBFCu;
            // 0x16dc00: 0xdfb60030  ld          $s6, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dbfc) {
            ctx->pc = 0x16DC14u;
            goto label_16dc14;
        }
    }
    ctx->pc = 0x16DC04u;
    // 0x16dc04: 0x0  nop
    ctx->pc = 0x16dc04u;
    // NOP
label_16dc08:
    // 0x16dc08: 0x3c14005e  lui         $s4, 0x5E
    ctx->pc = 0x16dc08u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)94 << 16));
    // 0x16dc0c: 0x26c2aaf0  addiu       $v0, $s6, -0x5510
    ctx->pc = 0x16dc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294945520));
    // 0x16dc10: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x16dc10u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16dc14:
    // 0x16dc14: 0x26a3aae8  addiu       $v1, $s5, -0x5518
    ctx->pc = 0x16dc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294945512));
    // 0x16dc18: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x16dc18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16dc1c: 0x2684aac8  addiu       $a0, $s4, -0x5538
    ctx->pc = 0x16dc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945480));
    // 0x16dc20: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16dc20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16dc24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16dc24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16dc28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16dc28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16dc2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16dc2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16dc30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16dc30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16dc34: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x16dc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16dc38: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x16dc38u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x16dc3c: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x16dc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x16dc40: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x16dc40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x16dc44: 0x3e00008  jr          $ra
    ctx->pc = 0x16DC44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DC44u;
            // 0x16dc48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16DC4Cu;
    // 0x16dc4c: 0x0  nop
    ctx->pc = 0x16dc4cu;
    // NOP
}
