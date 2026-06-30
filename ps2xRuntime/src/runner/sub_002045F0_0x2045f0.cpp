#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002045F0
// Address: 0x2045f0 - 0x2046c0
void sub_002045F0_0x2045f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002045F0_0x2045f0");
#endif

    switch (ctx->pc) {
        case 0x204640u: goto label_204640;
        case 0x20465cu: goto label_20465c;
        default: break;
    }

    ctx->pc = 0x2045f0u;

    // 0x2045f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2045f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2045f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2045f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2045f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2045f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2045fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2045fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x204600: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x204600u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204604: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x204604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x204608: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x204608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x20460c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x20460cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204610: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x204610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x204614: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x204614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x204618: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x204618u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x20461c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x20461Cu;
    {
        const bool branch_taken_0x20461c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x204620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20461Cu;
            // 0x204620: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20461c) {
            ctx->pc = 0x204640u;
            goto label_204640;
        }
    }
    ctx->pc = 0x204624u;
    // 0x204624: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x204624u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x204628: 0x205082a  slt         $at, $s0, $a1
    ctx->pc = 0x204628u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x20462c: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20462Cu;
    {
        const bool branch_taken_0x20462c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20462c) {
            ctx->pc = 0x204630u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20462Cu;
            // 0x204630: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x204634u;
            goto label_204634;
        }
    }
    ctx->pc = 0x204634u;
label_204634:
    // 0x204634: 0x26440044  addiu       $a0, $s2, 0x44
    ctx->pc = 0x204634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
    // 0x204638: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x204638u;
    SET_GPR_U32(ctx, 31, 0x204640u);
    ctx->pc = 0x20463Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204638u;
            // 0x20463c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204640u; }
        if (ctx->pc != 0x204640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204640u; }
        if (ctx->pc != 0x204640u) { return; }
    }
    ctx->pc = 0x204640u;
label_204640:
    // 0x204640: 0xae500048  sw          $s0, 0x48($s2)
    ctx->pc = 0x204640u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 16));
    // 0x204644: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x204644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204648: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x204648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20464c: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x20464cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x204650: 0x1a000013  blez        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x204650u;
    {
        const bool branch_taken_0x204650 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x204654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204650u;
            // 0x204654: 0xe6400010  swc1        $f0, 0x10($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x204650) {
            ctx->pc = 0x2046A0u;
            goto label_2046a0;
        }
    }
    ctx->pc = 0x204658u;
    // 0x204658: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x204658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20465c:
    // 0x20465c: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x20465cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x204660: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x204660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x204664: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x204664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x204668: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x204668u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x20466c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x20466cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x204670: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x204670u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x204674: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x204674u;
    {
        const bool branch_taken_0x204674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x204674) {
            ctx->pc = 0x204688u;
            goto label_204688;
        }
    }
    ctx->pc = 0x20467Cu;
    // 0x20467c: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x20467cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x204680: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x204680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x204684: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x204684u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_204688:
    // 0x204688: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x204688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x20468c: 0xd0182a  slt         $v1, $a2, $s0
    ctx->pc = 0x20468cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x204690: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x204690u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x204694: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x204694u;
    {
        const bool branch_taken_0x204694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x204698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204694u;
            // 0x204698: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204694) {
            ctx->pc = 0x20465Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20465c;
        }
    }
    ctx->pc = 0x20469Cu;
    // 0x20469c: 0x0  nop
    ctx->pc = 0x20469cu;
    // NOP
label_2046a0:
    // 0x2046a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2046a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2046a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2046a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2046a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2046a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2046ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2046acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2046b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2046B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2046B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2046B0u;
            // 0x2046b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2046B8u;
    // 0x2046b8: 0x0  nop
    ctx->pc = 0x2046b8u;
    // NOP
    // 0x2046bc: 0x0  nop
    ctx->pc = 0x2046bcu;
    // NOP
}
