#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3140
// Address: 0x1b3140 - 0x1b31c0
void sub_001B3140_0x1b3140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3140_0x1b3140");
#endif

    switch (ctx->pc) {
        case 0x1b3140u: goto label_1b3140;
        case 0x1b3144u: goto label_1b3144;
        case 0x1b3148u: goto label_1b3148;
        case 0x1b314cu: goto label_1b314c;
        case 0x1b3150u: goto label_1b3150;
        case 0x1b3154u: goto label_1b3154;
        case 0x1b3158u: goto label_1b3158;
        case 0x1b315cu: goto label_1b315c;
        case 0x1b3160u: goto label_1b3160;
        case 0x1b3164u: goto label_1b3164;
        case 0x1b3168u: goto label_1b3168;
        case 0x1b316cu: goto label_1b316c;
        case 0x1b3170u: goto label_1b3170;
        case 0x1b3174u: goto label_1b3174;
        case 0x1b3178u: goto label_1b3178;
        case 0x1b317cu: goto label_1b317c;
        case 0x1b3180u: goto label_1b3180;
        case 0x1b3184u: goto label_1b3184;
        case 0x1b3188u: goto label_1b3188;
        case 0x1b318cu: goto label_1b318c;
        case 0x1b3190u: goto label_1b3190;
        case 0x1b3194u: goto label_1b3194;
        case 0x1b3198u: goto label_1b3198;
        case 0x1b319cu: goto label_1b319c;
        case 0x1b31a0u: goto label_1b31a0;
        case 0x1b31a4u: goto label_1b31a4;
        case 0x1b31a8u: goto label_1b31a8;
        case 0x1b31acu: goto label_1b31ac;
        case 0x1b31b0u: goto label_1b31b0;
        case 0x1b31b4u: goto label_1b31b4;
        case 0x1b31b8u: goto label_1b31b8;
        case 0x1b31bcu: goto label_1b31bc;
        default: break;
    }

    ctx->pc = 0x1b3140u;

label_1b3140:
    // 0x1b3140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b3144:
    // 0x1b3144: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b3144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b3148:
    // 0x1b3148: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b3148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b314c:
    // 0x1b314c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b314cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1b3150:
    // 0x1b3150: 0x8e03207c  lw          $v1, 0x207C($s0)
    ctx->pc = 0x1b3150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8316)));
label_1b3154:
    // 0x1b3154: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1b3154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1b3158:
    // 0x1b3158: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1b3158u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b315c:
    // 0x1b315c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b315cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1b3160:
    // 0x1b3160: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b3160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b3164:
    // 0x1b3164: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b3164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1b3168:
    // 0x1b3168: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1b3168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1b316c:
    // 0x1b316c: 0x26101390  addiu       $s0, $s0, 0x1390
    ctx->pc = 0x1b316cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5008));
label_1b3170:
    // 0x1b3170: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1b3170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1b3174:
    // 0x1b3174: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b3174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b3178:
    // 0x1b3178: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1b3178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1b317c:
    // 0x1b317c: 0x40f809  jalr        $v0
label_1b3180:
    if (ctx->pc == 0x1B3180u) {
        ctx->pc = 0x1B3180u;
            // 0x1b3180: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B3184u;
        goto label_1b3184;
    }
    ctx->pc = 0x1B317Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B3184u);
        ctx->pc = 0x1B3180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B317Cu;
            // 0x1b3180: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B3184u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B3184u; }
            if (ctx->pc != 0x1B3184u) { return; }
        }
        }
    }
    ctx->pc = 0x1B3184u;
label_1b3184:
    // 0x1b3184: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1b3184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1b3188:
    // 0x1b3188: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1b3188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1b318c:
    // 0x1b318c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1b318cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1b3190:
    // 0x1b3190: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_1b3194:
    if (ctx->pc == 0x1B3194u) {
        ctx->pc = 0x1B3194u;
            // 0x1b3194: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x1B3198u;
        goto label_1b3198;
    }
    ctx->pc = 0x1B3190u;
    {
        const bool branch_taken_0x1b3190 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3190) {
            ctx->pc = 0x1B3194u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3190u;
            // 0x1b3194: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B3198u;
            goto label_1b3198;
        }
    }
    ctx->pc = 0x1B3198u;
label_1b3198:
    // 0x1b3198: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b3198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1b319c:
    // 0x1b319c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b319cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b31a0:
    // 0x1b31a0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1b31a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1b31a4:
    // 0x1b31a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b31a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b31a8:
    // 0x1b31a8: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x1b31a8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1b31ac:
    // 0x1b31ac: 0x1812  mflo        $v1
    ctx->pc = 0x1b31acu;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_1b31b0:
    // 0x1b31b0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b31b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b31b4:
    // 0x1b31b4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b31b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b31b8:
    // 0x1b31b8: 0x3e00008  jr          $ra
label_1b31bc:
    if (ctx->pc == 0x1B31BCu) {
        ctx->pc = 0x1B31BCu;
            // 0x1b31bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1B31C0u;
        goto label_fallthrough_0x1b31b8;
    }
    ctx->pc = 0x1B31B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B31BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B31B8u;
            // 0x1b31bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b31b8:
    ctx->pc = 0x1B31C0u;
}
