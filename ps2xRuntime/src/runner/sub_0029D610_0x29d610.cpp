#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029D610
// Address: 0x29d610 - 0x29d6f0
void sub_0029D610_0x29d610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D610_0x29d610");
#endif

    switch (ctx->pc) {
        case 0x29d688u: goto label_29d688;
        default: break;
    }

    ctx->pc = 0x29d610u;

    // 0x29d610: 0x34029e37  ori         $v0, $zero, 0x9E37
    ctx->pc = 0x29d610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40503);
    // 0x29d614: 0x5413a  dsrl        $t0, $a1, 4
    ctx->pc = 0x29d614u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) >> 4);
    // 0x29d618: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x29d618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x29d61c: 0x8383c  dsll32      $a3, $t0, 0
    ctx->pc = 0x29d61cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 0));
    // 0x29d620: 0x344679b1  ori         $a2, $v0, 0x79B1
    ctx->pc = 0x29d620u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31153);
    // 0x29d624: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x29d624u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x29d628: 0x6503c  dsll32      $t2, $a2, 0
    ctx->pc = 0x29d628u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29d62c: 0x8103f  dsra32      $v0, $t0, 0
    ctx->pc = 0x29d62cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x29d630: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x29d630u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x29d634: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x29d634u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x29d638: 0xea4819  .word       0x00EA4819                   # multu       $a3, $t2 # 00004800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29d638u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 7) * (uint64_t)GPR_U32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x29d63c: 0x70c73018  mult1       $a2, $a2, $a3
    ctx->pc = 0x29d63cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x29d640: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x29d640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29d644: 0x0  nop
    ctx->pc = 0x29d644u;
    // NOP
    // 0x29d648: 0x4010  mfhi        $t0
    ctx->pc = 0x29d648u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x29d64c: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x29d64cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29d650: 0x1421018  mult        $v0, $t2, $v0
    ctx->pc = 0x29d650u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29d654: 0x71094488  pextlw      $t0, $t0, $t1
    ctx->pc = 0x29d654u;
    SET_GPR_VEC(ctx, 8, PS2_PEXTLW(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x29d658: 0xc2102d  daddu       $v0, $a2, $v0
    ctx->pc = 0x29d658u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
    // 0x29d65c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29d65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29d660: 0x48102d  daddu       $v0, $v0, $t0
    ctx->pc = 0x29d660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 8));
    // 0x29d664: 0x624024  and         $t0, $v1, $v0
    ctx->pc = 0x29d664u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29d668: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x29d668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x29d66c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x29d66cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x29d670: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29d670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x29d674: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x29d674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29d678: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x29d678u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29d67c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x29D67Cu;
    {
        const bool branch_taken_0x29d67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d67c) {
            ctx->pc = 0x29D6D0u;
            goto label_29d6d0;
        }
    }
    ctx->pc = 0x29D684u;
    // 0x29d684: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x29d684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
label_29d688:
    // 0x29d688: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x29d688u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x29d68c: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x29d68cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x29d690: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x29d690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x29d694: 0xdcc60000  ld          $a2, 0x0($a2)
    ctx->pc = 0x29d694u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x29d698: 0x54a60003  bnel        $a1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x29D698u;
    {
        const bool branch_taken_0x29d698 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x29d698) {
            ctx->pc = 0x29D69Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29D698u;
            // 0x29d69c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29D6A8u;
            goto label_29d6a8;
        }
    }
    ctx->pc = 0x29D6A0u;
    // 0x29d6a0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x29D6A0u;
    {
        const bool branch_taken_0x29d6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d6a0) {
            ctx->pc = 0x29D6DCu;
            goto label_29d6dc;
        }
    }
    ctx->pc = 0x29D6A8u;
label_29d6a8:
    // 0x29d6a8: 0x65060001  daddiu      $a2, $t0, 0x1
    ctx->pc = 0x29d6a8u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)1);
    // 0x29d6ac: 0xc24024  and         $t0, $a2, $v0
    ctx->pc = 0x29d6acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x29d6b0: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x29d6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x29d6b4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x29d6b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x29d6b8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x29d6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x29d6bc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x29d6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29d6c0: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x29d6c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29d6c4: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x29D6C4u;
    {
        const bool branch_taken_0x29d6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d6c4) {
            ctx->pc = 0x29D6C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29D6C4u;
            // 0x29d6c8: 0x8103c  dsll32      $v0, $t0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29D688u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29d688;
        }
    }
    ctx->pc = 0x29D6CCu;
    // 0x29d6cc: 0x0  nop
    ctx->pc = 0x29d6ccu;
    // NOP
label_29d6d0:
    // 0x29d6d0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x29d6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29d6d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29d6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29d6d8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x29d6d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_29d6dc:
    // 0x29d6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x29D6DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29D6E4u;
    // 0x29d6e4: 0x0  nop
    ctx->pc = 0x29d6e4u;
    // NOP
    // 0x29d6e8: 0x0  nop
    ctx->pc = 0x29d6e8u;
    // NOP
    // 0x29d6ec: 0x0  nop
    ctx->pc = 0x29d6ecu;
    // NOP
}
