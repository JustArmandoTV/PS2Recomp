#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00254150
// Address: 0x254150 - 0x254250
void sub_00254150_0x254150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254150_0x254150");
#endif

    switch (ctx->pc) {
        case 0x254190u: goto label_254190;
        case 0x254230u: goto label_254230;
        default: break;
    }

    ctx->pc = 0x254150u;

    // 0x254150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x254150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x254154: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x254154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x254158: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x254158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25415c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25415cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x254160: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x254160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254164: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x254164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x254168: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x254168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25416c: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x25416cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x254170: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x254170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x254174: 0x1034821  addu        $t1, $t0, $v1
    ctx->pc = 0x254174u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x254178: 0x109082b  sltu        $at, $t0, $t1
    ctx->pc = 0x254178u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x25417c: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x25417Cu;
    {
        const bool branch_taken_0x25417c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x254180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25417Cu;
            // 0x254180: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25417c) {
            ctx->pc = 0x254200u;
            goto label_254200;
        }
    }
    ctx->pc = 0x254184u;
    // 0x254184: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x254184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x254188: 0x3c0b0064  lui         $t3, 0x64
    ctx->pc = 0x254188u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)100 << 16));
    // 0x25418c: 0x256bf910  addiu       $t3, $t3, -0x6F0
    ctx->pc = 0x25418cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294965520));
label_254190:
    // 0x254190: 0x948a0002  lhu         $t2, 0x2($a0)
    ctx->pc = 0x254190u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x254194: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x254194u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x254198: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x254198u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x25419c: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x25419cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x2541a0: 0x8ccc0000  lw          $t4, 0x0($a2)
    ctx->pc = 0x2541a0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2541a4: 0x5800012  bltz        $t4, . + 4 + (0x12 << 2)
    ctx->pc = 0x2541A4u;
    {
        const bool branch_taken_0x2541a4 = (GPR_S32(ctx, 12) < 0);
        if (branch_taken_0x2541a4) {
            ctx->pc = 0x2541F0u;
            goto label_2541f0;
        }
    }
    ctx->pc = 0x2541ACu;
    // 0x2541ac: 0x948a0000  lhu         $t2, 0x0($a0)
    ctx->pc = 0x2541acu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2541b0: 0xc3100  sll         $a2, $t4, 4
    ctx->pc = 0x2541b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x2541b4: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x2541b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2541b8: 0xa50a0000  sh          $t2, 0x0($t0)
    ctx->pc = 0x2541b8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x2541bc: 0x948a0002  lhu         $t2, 0x2($a0)
    ctx->pc = 0x2541bcu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2541c0: 0xa50a0002  sh          $t2, 0x2($t0)
    ctx->pc = 0x2541c0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 10));
    // 0x2541c4: 0xa50c0002  sh          $t4, 0x2($t0)
    ctx->pc = 0x2541c4u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 12));
    // 0x2541c8: 0x950a0000  lhu         $t2, 0x0($t0)
    ctx->pc = 0x2541c8u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2541cc: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x2541ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x2541d0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2541d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2541d4: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x2541d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x2541d8: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x2541d8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2541dc: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x2541dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x2541e0: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x2541e0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2541e4: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x2541e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x2541e8: 0xa4d00000  sh          $s0, 0x0($a2)
    ctx->pc = 0x2541e8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x2541ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2541ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2541f0:
    // 0x2541f0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2541f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2541f4: 0x89302b  sltu        $a2, $a0, $t1
    ctx->pc = 0x2541f4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2541f8: 0x14c0ffe5  bnez        $a2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2541F8u;
    {
        const bool branch_taken_0x2541f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2541f8) {
            ctx->pc = 0x254190u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_254190;
        }
    }
    ctx->pc = 0x254200u;
label_254200:
    // 0x254200: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x254200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x254204: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x254204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x254208: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x254208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x25420c: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x25420cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x254210: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x254210u;
    {
        const bool branch_taken_0x254210 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x254210) {
            ctx->pc = 0x254230u;
            goto label_254230;
        }
    }
    ctx->pc = 0x254218u;
    // 0x254218: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x254218u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25421c: 0x205082a  slt         $at, $s0, $a1
    ctx->pc = 0x25421cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x254220: 0x201280a  movz        $a1, $s0, $at
    ctx->pc = 0x254220u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
    // 0x254224: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x254224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254228: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x254228u;
    SET_GPR_U32(ctx, 31, 0x254230u);
    ctx->pc = 0x25422Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254228u;
            // 0x25422c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254230u; }
        if (ctx->pc != 0x254230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254230u; }
        if (ctx->pc != 0x254230u) { return; }
    }
    ctx->pc = 0x254230u;
label_254230:
    // 0x254230: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x254230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x254234: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x254234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254238: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x254238u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25423c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25423cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254240: 0x3e00008  jr          $ra
    ctx->pc = 0x254240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254240u;
            // 0x254244: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x254248u;
    // 0x254248: 0x0  nop
    ctx->pc = 0x254248u;
    // NOP
    // 0x25424c: 0x0  nop
    ctx->pc = 0x25424cu;
    // NOP
}
