#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A0150
// Address: 0x2a0150 - 0x2a01c0
void sub_002A0150_0x2a0150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0150_0x2a0150");
#endif

    switch (ctx->pc) {
        case 0x2a0150u: goto label_2a0150;
        case 0x2a0154u: goto label_2a0154;
        case 0x2a0158u: goto label_2a0158;
        case 0x2a015cu: goto label_2a015c;
        case 0x2a0160u: goto label_2a0160;
        case 0x2a0164u: goto label_2a0164;
        case 0x2a0168u: goto label_2a0168;
        case 0x2a016cu: goto label_2a016c;
        case 0x2a0170u: goto label_2a0170;
        case 0x2a0174u: goto label_2a0174;
        case 0x2a0178u: goto label_2a0178;
        case 0x2a017cu: goto label_2a017c;
        case 0x2a0180u: goto label_2a0180;
        case 0x2a0184u: goto label_2a0184;
        case 0x2a0188u: goto label_2a0188;
        case 0x2a018cu: goto label_2a018c;
        case 0x2a0190u: goto label_2a0190;
        case 0x2a0194u: goto label_2a0194;
        case 0x2a0198u: goto label_2a0198;
        case 0x2a019cu: goto label_2a019c;
        case 0x2a01a0u: goto label_2a01a0;
        case 0x2a01a4u: goto label_2a01a4;
        case 0x2a01a8u: goto label_2a01a8;
        case 0x2a01acu: goto label_2a01ac;
        case 0x2a01b0u: goto label_2a01b0;
        case 0x2a01b4u: goto label_2a01b4;
        case 0x2a01b8u: goto label_2a01b8;
        case 0x2a01bcu: goto label_2a01bc;
        default: break;
    }

    ctx->pc = 0x2a0150u;

label_2a0150:
    // 0x2a0150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a0150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2a0154:
    // 0x2a0154: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a0154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2a0158:
    // 0x2a0158: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a0158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a015c:
    // 0x2a015c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a015cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a0160:
    // 0x2a0160: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a0160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a0164:
    // 0x2a0164: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_2a0168:
    if (ctx->pc == 0x2A0168u) {
        ctx->pc = 0x2A0168u;
            // 0x2a0168: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A016Cu;
        goto label_2a016c;
    }
    ctx->pc = 0x2A0164u;
    {
        const bool branch_taken_0x2a0164 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0164u;
            // 0x2a0168: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0164) {
            ctx->pc = 0x2A019Cu;
            goto label_2a019c;
        }
    }
    ctx->pc = 0x2A016Cu;
label_2a016c:
    // 0x2a016c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a016cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2a0170:
    // 0x2a0170: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2a0170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2a0174:
    // 0x2a0174: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a0174u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a0178:
    // 0x2a0178: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2a0178u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2a017c:
    // 0x2a017c: 0x320f809  jalr        $t9
label_2a0180:
    if (ctx->pc == 0x2A0180u) {
        ctx->pc = 0x2A0180u;
            // 0x2a0180: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2A0184u;
        goto label_2a0184;
    }
    ctx->pc = 0x2A017Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A0184u);
        ctx->pc = 0x2A0180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A017Cu;
            // 0x2a0180: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A0184u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A0184u; }
            if (ctx->pc != 0x2A0184u) { return; }
        }
        }
    }
    ctx->pc = 0x2A0184u;
label_2a0184:
    // 0x2a0184: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2a0184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2a0188:
    // 0x2a0188: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a0188u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2a018c:
    // 0x2a018c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2a0190:
    if (ctx->pc == 0x2A0190u) {
        ctx->pc = 0x2A0190u;
            // 0x2a0190: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0194u;
        goto label_2a0194;
    }
    ctx->pc = 0x2A018Cu;
    {
        const bool branch_taken_0x2a018c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2a018c) {
            ctx->pc = 0x2A0190u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A018Cu;
            // 0x2a0190: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A01A0u;
            goto label_2a01a0;
        }
    }
    ctx->pc = 0x2A0194u;
label_2a0194:
    // 0x2a0194: 0xc0400a8  jal         func_1002A0
label_2a0198:
    if (ctx->pc == 0x2A0198u) {
        ctx->pc = 0x2A0198u;
            // 0x2a0198: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A019Cu;
        goto label_2a019c;
    }
    ctx->pc = 0x2A0194u;
    SET_GPR_U32(ctx, 31, 0x2A019Cu);
    ctx->pc = 0x2A0198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0194u;
            // 0x2a0198: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A019Cu; }
        if (ctx->pc != 0x2A019Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A019Cu; }
        if (ctx->pc != 0x2A019Cu) { return; }
    }
    ctx->pc = 0x2A019Cu;
label_2a019c:
    // 0x2a019c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a019cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a01a0:
    // 0x2a01a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a01a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a01a4:
    // 0x2a01a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a01a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a01a8:
    // 0x2a01a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a01a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a01ac:
    // 0x2a01ac: 0x3e00008  jr          $ra
label_2a01b0:
    if (ctx->pc == 0x2A01B0u) {
        ctx->pc = 0x2A01B0u;
            // 0x2a01b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2A01B4u;
        goto label_2a01b4;
    }
    ctx->pc = 0x2A01ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A01B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A01ACu;
            // 0x2a01b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A01B4u;
label_2a01b4:
    // 0x2a01b4: 0x0  nop
    ctx->pc = 0x2a01b4u;
    // NOP
label_2a01b8:
    // 0x2a01b8: 0x0  nop
    ctx->pc = 0x2a01b8u;
    // NOP
label_2a01bc:
    // 0x2a01bc: 0x0  nop
    ctx->pc = 0x2a01bcu;
    // NOP
}
