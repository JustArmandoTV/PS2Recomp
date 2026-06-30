#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00249070
// Address: 0x249070 - 0x249150
void sub_00249070_0x249070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249070_0x249070");
#endif

    switch (ctx->pc) {
        case 0x249070u: goto label_249070;
        case 0x249074u: goto label_249074;
        case 0x249078u: goto label_249078;
        case 0x24907cu: goto label_24907c;
        case 0x249080u: goto label_249080;
        case 0x249084u: goto label_249084;
        case 0x249088u: goto label_249088;
        case 0x24908cu: goto label_24908c;
        case 0x249090u: goto label_249090;
        case 0x249094u: goto label_249094;
        case 0x249098u: goto label_249098;
        case 0x24909cu: goto label_24909c;
        case 0x2490a0u: goto label_2490a0;
        case 0x2490a4u: goto label_2490a4;
        case 0x2490a8u: goto label_2490a8;
        case 0x2490acu: goto label_2490ac;
        case 0x2490b0u: goto label_2490b0;
        case 0x2490b4u: goto label_2490b4;
        case 0x2490b8u: goto label_2490b8;
        case 0x2490bcu: goto label_2490bc;
        case 0x2490c0u: goto label_2490c0;
        case 0x2490c4u: goto label_2490c4;
        case 0x2490c8u: goto label_2490c8;
        case 0x2490ccu: goto label_2490cc;
        case 0x2490d0u: goto label_2490d0;
        case 0x2490d4u: goto label_2490d4;
        case 0x2490d8u: goto label_2490d8;
        case 0x2490dcu: goto label_2490dc;
        case 0x2490e0u: goto label_2490e0;
        case 0x2490e4u: goto label_2490e4;
        case 0x2490e8u: goto label_2490e8;
        case 0x2490ecu: goto label_2490ec;
        case 0x2490f0u: goto label_2490f0;
        case 0x2490f4u: goto label_2490f4;
        case 0x2490f8u: goto label_2490f8;
        case 0x2490fcu: goto label_2490fc;
        case 0x249100u: goto label_249100;
        case 0x249104u: goto label_249104;
        case 0x249108u: goto label_249108;
        case 0x24910cu: goto label_24910c;
        case 0x249110u: goto label_249110;
        case 0x249114u: goto label_249114;
        case 0x249118u: goto label_249118;
        case 0x24911cu: goto label_24911c;
        case 0x249120u: goto label_249120;
        case 0x249124u: goto label_249124;
        case 0x249128u: goto label_249128;
        case 0x24912cu: goto label_24912c;
        case 0x249130u: goto label_249130;
        case 0x249134u: goto label_249134;
        case 0x249138u: goto label_249138;
        case 0x24913cu: goto label_24913c;
        case 0x249140u: goto label_249140;
        case 0x249144u: goto label_249144;
        case 0x249148u: goto label_249148;
        case 0x24914cu: goto label_24914c;
        default: break;
    }

    ctx->pc = 0x249070u;

label_249070:
    // 0x249070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_249074:
    // 0x249074: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x249074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_249078:
    // 0x249078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x249078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24907c:
    // 0x24907c: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x24907cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_249080:
    // 0x249080: 0x10a0002f  beqz        $a1, . + 4 + (0x2F << 2)
label_249084:
    if (ctx->pc == 0x249084u) {
        ctx->pc = 0x249084u;
            // 0x249084: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x249088u;
        goto label_249088;
    }
    ctx->pc = 0x249080u;
    {
        const bool branch_taken_0x249080 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x249084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249080u;
            // 0x249084: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249080) {
            ctx->pc = 0x249140u;
            goto label_249140;
        }
    }
    ctx->pc = 0x249088u;
label_249088:
    // 0x249088: 0x10a30019  beq         $a1, $v1, . + 4 + (0x19 << 2)
label_24908c:
    if (ctx->pc == 0x24908Cu) {
        ctx->pc = 0x249090u;
        goto label_249090;
    }
    ctx->pc = 0x249088u;
    {
        const bool branch_taken_0x249088 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x249088) {
            ctx->pc = 0x2490F0u;
            goto label_2490f0;
        }
    }
    ctx->pc = 0x249090u;
label_249090:
    // 0x249090: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x249090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_249094:
    // 0x249094: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_249098:
    if (ctx->pc == 0x249098u) {
        ctx->pc = 0x249098u;
            // 0x249098: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x24909Cu;
        goto label_24909c;
    }
    ctx->pc = 0x249094u;
    {
        const bool branch_taken_0x249094 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x249098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249094u;
            // 0x249098: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249094) {
            ctx->pc = 0x2490B0u;
            goto label_2490b0;
        }
    }
    ctx->pc = 0x24909Cu;
label_24909c:
    // 0x24909c: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
label_2490a0:
    if (ctx->pc == 0x2490A0u) {
        ctx->pc = 0x2490A4u;
        goto label_2490a4;
    }
    ctx->pc = 0x24909Cu;
    {
        const bool branch_taken_0x24909c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x24909c) {
            ctx->pc = 0x2490B0u;
            goto label_2490b0;
        }
    }
    ctx->pc = 0x2490A4u;
label_2490a4:
    // 0x2490a4: 0x10000026  b           . + 4 + (0x26 << 2)
label_2490a8:
    if (ctx->pc == 0x2490A8u) {
        ctx->pc = 0x2490ACu;
        goto label_2490ac;
    }
    ctx->pc = 0x2490A4u;
    {
        const bool branch_taken_0x2490a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2490a4) {
            ctx->pc = 0x249140u;
            goto label_249140;
        }
    }
    ctx->pc = 0x2490ACu;
label_2490ac:
    // 0x2490ac: 0x0  nop
    ctx->pc = 0x2490acu;
    // NOP
label_2490b0:
    // 0x2490b0: 0x90870001  lbu         $a3, 0x1($a0)
    ctx->pc = 0x2490b0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_2490b4:
    // 0x2490b4: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x2490b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2490b8:
    // 0x2490b8: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x2490b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_2490bc:
    // 0x2490bc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2490bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2490c0:
    // 0x2490c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2490c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2490c4:
    // 0x2490c4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2490c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2490c8:
    // 0x2490c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2490c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2490cc:
    // 0x2490cc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2490ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_2490d0:
    // 0x2490d0: 0x8c6316cc  lw          $v1, 0x16CC($v1)
    ctx->pc = 0x2490d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5836)));
label_2490d4:
    // 0x2490d4: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_2490d8:
    if (ctx->pc == 0x2490D8u) {
        ctx->pc = 0x2490D8u;
            // 0x2490d8: 0x24850020  addiu       $a1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->pc = 0x2490DCu;
        goto label_2490dc;
    }
    ctx->pc = 0x2490D4u;
    {
        const bool branch_taken_0x2490d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2490D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2490D4u;
            // 0x2490d8: 0x24850020  addiu       $a1, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2490d4) {
            ctx->pc = 0x249140u;
            goto label_249140;
        }
    }
    ctx->pc = 0x2490DCu;
label_2490dc:
    // 0x2490dc: 0x60f809  jalr        $v1
label_2490e0:
    if (ctx->pc == 0x2490E0u) {
        ctx->pc = 0x2490E4u;
        goto label_2490e4;
    }
    ctx->pc = 0x2490DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2490E4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2490E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2490E4u; }
            if (ctx->pc != 0x2490E4u) { return; }
        }
        }
    }
    ctx->pc = 0x2490E4u;
label_2490e4:
    // 0x2490e4: 0x10000016  b           . + 4 + (0x16 << 2)
label_2490e8:
    if (ctx->pc == 0x2490E8u) {
        ctx->pc = 0x2490ECu;
        goto label_2490ec;
    }
    ctx->pc = 0x2490E4u;
    {
        const bool branch_taken_0x2490e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2490e4) {
            ctx->pc = 0x249140u;
            goto label_249140;
        }
    }
    ctx->pc = 0x2490ECu;
label_2490ec:
    // 0x2490ec: 0x0  nop
    ctx->pc = 0x2490ecu;
    // NOP
label_2490f0:
    // 0x2490f0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2490f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_2490f4:
    // 0x2490f4: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x2490f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
label_2490f8:
    // 0x2490f8: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x2490f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
label_2490fc:
    // 0x2490fc: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x2490fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
label_249100:
    // 0x249100: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x249100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
label_249104:
    // 0x249104: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x249104u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
label_249108:
    // 0x249108: 0x90870001  lbu         $a3, 0x1($a0)
    ctx->pc = 0x249108u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_24910c:
    // 0x24910c: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x24910cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_249110:
    // 0x249110: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x249110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_249114:
    // 0x249114: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x249114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_249118:
    // 0x249118: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x249118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_24911c:
    // 0x24911c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x24911cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_249120:
    // 0x249120: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x249120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_249124:
    // 0x249124: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x249124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_249128:
    // 0x249128: 0x8c6316cc  lw          $v1, 0x16CC($v1)
    ctx->pc = 0x249128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5836)));
label_24912c:
    // 0x24912c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_249130:
    if (ctx->pc == 0x249130u) {
        ctx->pc = 0x249130u;
            // 0x249130: 0x24850030  addiu       $a1, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->pc = 0x249134u;
        goto label_249134;
    }
    ctx->pc = 0x24912Cu;
    {
        const bool branch_taken_0x24912c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24912Cu;
            // 0x249130: 0x24850030  addiu       $a1, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24912c) {
            ctx->pc = 0x249140u;
            goto label_249140;
        }
    }
    ctx->pc = 0x249134u;
label_249134:
    // 0x249134: 0x60f809  jalr        $v1
label_249138:
    if (ctx->pc == 0x249138u) {
        ctx->pc = 0x24913Cu;
        goto label_24913c;
    }
    ctx->pc = 0x249134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x24913Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x24913Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24913Cu; }
            if (ctx->pc != 0x24913Cu) { return; }
        }
        }
    }
    ctx->pc = 0x24913Cu;
label_24913c:
    // 0x24913c: 0x0  nop
    ctx->pc = 0x24913cu;
    // NOP
label_249140:
    // 0x249140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_249144:
    // 0x249144: 0x3e00008  jr          $ra
label_249148:
    if (ctx->pc == 0x249148u) {
        ctx->pc = 0x249148u;
            // 0x249148: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x24914Cu;
        goto label_24914c;
    }
    ctx->pc = 0x249144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249144u;
            // 0x249148: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24914Cu;
label_24914c:
    // 0x24914c: 0x0  nop
    ctx->pc = 0x24914cu;
    // NOP
}
