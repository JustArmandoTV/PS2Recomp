#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00235050
// Address: 0x235050 - 0x2350b0
void sub_00235050_0x235050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235050_0x235050");
#endif

    switch (ctx->pc) {
        case 0x235050u: goto label_235050;
        case 0x235054u: goto label_235054;
        case 0x235058u: goto label_235058;
        case 0x23505cu: goto label_23505c;
        case 0x235060u: goto label_235060;
        case 0x235064u: goto label_235064;
        case 0x235068u: goto label_235068;
        case 0x23506cu: goto label_23506c;
        case 0x235070u: goto label_235070;
        case 0x235074u: goto label_235074;
        case 0x235078u: goto label_235078;
        case 0x23507cu: goto label_23507c;
        case 0x235080u: goto label_235080;
        case 0x235084u: goto label_235084;
        case 0x235088u: goto label_235088;
        case 0x23508cu: goto label_23508c;
        case 0x235090u: goto label_235090;
        case 0x235094u: goto label_235094;
        case 0x235098u: goto label_235098;
        case 0x23509cu: goto label_23509c;
        case 0x2350a0u: goto label_2350a0;
        case 0x2350a4u: goto label_2350a4;
        case 0x2350a8u: goto label_2350a8;
        case 0x2350acu: goto label_2350ac;
        default: break;
    }

    ctx->pc = 0x235050u;

label_235050:
    // 0x235050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x235050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_235054:
    // 0x235054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_235058:
    // 0x235058: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x235058u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_23505c:
    // 0x23505c: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
label_235060:
    if (ctx->pc == 0x235060u) {
        ctx->pc = 0x235060u;
            // 0x235060: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x235064u;
        goto label_235064;
    }
    ctx->pc = 0x23505Cu;
    {
        const bool branch_taken_0x23505c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23505c) {
            ctx->pc = 0x235060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23505Cu;
            // 0x235060: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23509Cu;
            goto label_23509c;
        }
    }
    ctx->pc = 0x235064u;
label_235064:
    // 0x235064: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x235064u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_235068:
    // 0x235068: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x235068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23506c:
    // 0x23506c: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x23506cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_235070:
    // 0x235070: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x235070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_235074:
    // 0x235074: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x235074u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_235078:
    // 0x235078: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_23507c:
    if (ctx->pc == 0x23507Cu) {
        ctx->pc = 0x235080u;
        goto label_235080;
    }
    ctx->pc = 0x235078u;
    {
        const bool branch_taken_0x235078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x235078) {
            ctx->pc = 0x235098u;
            goto label_235098;
        }
    }
    ctx->pc = 0x235080u;
label_235080:
    // 0x235080: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_235084:
    if (ctx->pc == 0x235084u) {
        ctx->pc = 0x235088u;
        goto label_235088;
    }
    ctx->pc = 0x235080u;
    {
        const bool branch_taken_0x235080 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x235080) {
            ctx->pc = 0x235098u;
            goto label_235098;
        }
    }
    ctx->pc = 0x235088u;
label_235088:
    // 0x235088: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x235088u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23508c:
    // 0x23508c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23508cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_235090:
    // 0x235090: 0x320f809  jalr        $t9
label_235094:
    if (ctx->pc == 0x235094u) {
        ctx->pc = 0x235094u;
            // 0x235094: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x235098u;
        goto label_235098;
    }
    ctx->pc = 0x235090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x235098u);
        ctx->pc = 0x235094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235090u;
            // 0x235094: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x235098u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x235098u; }
            if (ctx->pc != 0x235098u) { return; }
        }
        }
    }
    ctx->pc = 0x235098u;
label_235098:
    // 0x235098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x235098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23509c:
    // 0x23509c: 0x3e00008  jr          $ra
label_2350a0:
    if (ctx->pc == 0x2350A0u) {
        ctx->pc = 0x2350A0u;
            // 0x2350a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2350A4u;
        goto label_2350a4;
    }
    ctx->pc = 0x23509Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2350A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23509Cu;
            // 0x2350a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2350A4u;
label_2350a4:
    // 0x2350a4: 0x0  nop
    ctx->pc = 0x2350a4u;
    // NOP
label_2350a8:
    // 0x2350a8: 0x0  nop
    ctx->pc = 0x2350a8u;
    // NOP
label_2350ac:
    // 0x2350ac: 0x0  nop
    ctx->pc = 0x2350acu;
    // NOP
}
