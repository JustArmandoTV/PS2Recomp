#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015C700
// Address: 0x15c700 - 0x15c7c0
void sub_0015C700_0x15c700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C700_0x15c700");
#endif

    ctx->pc = 0x15c700u;

    // 0x15c700: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x15c700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x15c704: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x15C704u;
    {
        const bool branch_taken_0x15c704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c704) {
            ctx->pc = 0x15C708u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15C704u;
            // 0x15c708: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15C710u;
            goto label_15c710;
        }
    }
    ctx->pc = 0x15C70Cu;
    // 0x15c70c: 0x240a0200  addiu       $t2, $zero, 0x200
    ctx->pc = 0x15c70cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_15c710:
    // 0x15c710: 0xc74818  mult        $t1, $a2, $a3
    ctx->pc = 0x15c710u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x15c714: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x15c714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x15c718: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x15c718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x15c71c: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x15c71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x15c720: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x15c720u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x15c724: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x15c724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x15c728: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x15c728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x15c72c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x15c72cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x15c730: 0x25280002  addiu       $t0, $t1, 0x2
    ctx->pc = 0x15c730u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x15c734: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x15c734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x15c738: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x15c738u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x15c73c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15c73cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15c740: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x15c740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x15c744: 0x3c076c00  lui         $a3, 0x6C00
    ctx->pc = 0x15c744u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)27648 << 16));
    // 0x15c748: 0x1484025  or          $t0, $t2, $t0
    ctx->pc = 0x15c748u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
    // 0x15c74c: 0x34900  sll         $t1, $v1, 4
    ctx->pc = 0x15c74cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15c750: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x15c750u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x15c754: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x15c754u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x15c758: 0xaca7000c  sw          $a3, 0xC($a1)
    ctx->pc = 0x15c758u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
    // 0x15c75c: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x15c75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x15c760: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x15c760u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x15c764: 0x6403c  dsll32      $t0, $a2, 0
    ctx->pc = 0x15c764u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) << (32 + 0));
    // 0x15c768: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x15c768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15c76c: 0x7ca00010  sq          $zero, 0x10($a1)
    ctx->pc = 0x15c76cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 0));
    // 0x15c770: 0xaca60010  sw          $a2, 0x10($a1)
    ctx->pc = 0x15c770u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 6));
    // 0x15c774: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x15c774u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x15c778: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x15c778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x15c77c: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x15c77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x15c780: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x15c780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x15c784: 0xaca9001c  sw          $t1, 0x1C($a1)
    ctx->pc = 0x15c784u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 9));
    // 0x15c788: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x15c788u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15c78c: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x15c78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x15c790: 0x24030412  addiu       $v1, $zero, 0x412
    ctx->pc = 0x15c790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x15c794: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15c794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15c798: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x15c798u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x15c79c: 0xfca60020  sd          $a2, 0x20($a1)
    ctx->pc = 0x15c79cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 6));
    // 0x15c7a0: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x15c7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x15c7a4: 0xfca30028  sd          $v1, 0x28($a1)
    ctx->pc = 0x15c7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 3));
    // 0x15c7a8: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x15c7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x15c7ac: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x15c7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x15c7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x15C7B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C7B0u;
            // 0x15c7b4: 0xac830020  sw          $v1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C7B8u;
    // 0x15c7b8: 0x0  nop
    ctx->pc = 0x15c7b8u;
    // NOP
    // 0x15c7bc: 0x0  nop
    ctx->pc = 0x15c7bcu;
    // NOP
}
