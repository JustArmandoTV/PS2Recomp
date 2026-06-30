#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034F9D0
// Address: 0x34f9d0 - 0x34fa50
void sub_0034F9D0_0x34f9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034F9D0_0x34f9d0");
#endif

    switch (ctx->pc) {
        case 0x34f9d0u: goto label_34f9d0;
        case 0x34f9d4u: goto label_34f9d4;
        case 0x34f9d8u: goto label_34f9d8;
        case 0x34f9dcu: goto label_34f9dc;
        case 0x34f9e0u: goto label_34f9e0;
        case 0x34f9e4u: goto label_34f9e4;
        case 0x34f9e8u: goto label_34f9e8;
        case 0x34f9ecu: goto label_34f9ec;
        case 0x34f9f0u: goto label_34f9f0;
        case 0x34f9f4u: goto label_34f9f4;
        case 0x34f9f8u: goto label_34f9f8;
        case 0x34f9fcu: goto label_34f9fc;
        case 0x34fa00u: goto label_34fa00;
        case 0x34fa04u: goto label_34fa04;
        case 0x34fa08u: goto label_34fa08;
        case 0x34fa0cu: goto label_34fa0c;
        case 0x34fa10u: goto label_34fa10;
        case 0x34fa14u: goto label_34fa14;
        case 0x34fa18u: goto label_34fa18;
        case 0x34fa1cu: goto label_34fa1c;
        case 0x34fa20u: goto label_34fa20;
        case 0x34fa24u: goto label_34fa24;
        case 0x34fa28u: goto label_34fa28;
        case 0x34fa2cu: goto label_34fa2c;
        case 0x34fa30u: goto label_34fa30;
        case 0x34fa34u: goto label_34fa34;
        case 0x34fa38u: goto label_34fa38;
        case 0x34fa3cu: goto label_34fa3c;
        case 0x34fa40u: goto label_34fa40;
        case 0x34fa44u: goto label_34fa44;
        case 0x34fa48u: goto label_34fa48;
        case 0x34fa4cu: goto label_34fa4c;
        default: break;
    }

    ctx->pc = 0x34f9d0u;

label_34f9d0:
    // 0x34f9d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34f9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_34f9d4:
    // 0x34f9d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34f9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34f9d8:
    // 0x34f9d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x34f9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_34f9dc:
    // 0x34f9dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34f9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_34f9e0:
    // 0x34f9e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34f9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_34f9e4:
    // 0x34f9e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34f9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34f9e8:
    // 0x34f9e8: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x34f9e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_34f9ec:
    // 0x34f9ec: 0xac830080  sw          $v1, 0x80($a0)
    ctx->pc = 0x34f9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
label_34f9f0:
    // 0x34f9f0: 0x24900054  addiu       $s0, $a0, 0x54
    ctx->pc = 0x34f9f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
label_34f9f4:
    // 0x34f9f4: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x34f9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
label_34f9f8:
    // 0x34f9f8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x34f9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_34f9fc:
    // 0x34f9fc: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x34f9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
label_34fa00:
    // 0x34fa00: 0x8c7289e8  lw          $s2, -0x7618($v1)
    ctx->pc = 0x34fa00u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937064)));
label_34fa04:
    // 0x34fa04: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x34fa04u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_34fa08:
    // 0x34fa08: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
label_34fa0c:
    if (ctx->pc == 0x34FA0Cu) {
        ctx->pc = 0x34FA10u;
        goto label_34fa10;
    }
    ctx->pc = 0x34FA08u;
    {
        const bool branch_taken_0x34fa08 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x34fa08) {
            ctx->pc = 0x34FA28u;
            goto label_34fa28;
        }
    }
    ctx->pc = 0x34FA10u;
label_34fa10:
    // 0x34fa10: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x34fa10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_34fa14:
    // 0x34fa14: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x34fa14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_34fa18:
    // 0x34fa18: 0x320f809  jalr        $t9
label_34fa1c:
    if (ctx->pc == 0x34FA1Cu) {
        ctx->pc = 0x34FA1Cu;
            // 0x34fa1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34FA20u;
        goto label_34fa20;
    }
    ctx->pc = 0x34FA18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34FA20u);
        ctx->pc = 0x34FA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34FA18u;
            // 0x34fa1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x34FA20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34FA20u; }
            if (ctx->pc != 0x34FA20u) { return; }
        }
        }
    }
    ctx->pc = 0x34FA20u;
label_34fa20:
    // 0x34fa20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x34fa20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_34fa24:
    // 0x34fa24: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x34fa24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_34fa28:
    // 0x34fa28: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x34fa28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_34fa2c:
    // 0x34fa2c: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
label_34fa30:
    if (ctx->pc == 0x34FA30u) {
        ctx->pc = 0x34FA30u;
            // 0x34fa30: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x34FA34u;
        goto label_34fa34;
    }
    ctx->pc = 0x34FA2Cu;
    {
        const bool branch_taken_0x34fa2c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x34FA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34FA2Cu;
            // 0x34fa30: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fa2c) {
            ctx->pc = 0x34FA04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34fa04;
        }
    }
    ctx->pc = 0x34FA34u;
label_34fa34:
    // 0x34fa34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x34fa34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_34fa38:
    // 0x34fa38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34fa38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_34fa3c:
    // 0x34fa3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34fa3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34fa40:
    // 0x34fa40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34fa40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34fa44:
    // 0x34fa44: 0x3e00008  jr          $ra
label_34fa48:
    if (ctx->pc == 0x34FA48u) {
        ctx->pc = 0x34FA48u;
            // 0x34fa48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x34FA4Cu;
        goto label_34fa4c;
    }
    ctx->pc = 0x34FA44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34FA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34FA44u;
            // 0x34fa48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34FA4Cu;
label_34fa4c:
    // 0x34fa4c: 0x0  nop
    ctx->pc = 0x34fa4cu;
    // NOP
}
