#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015B740
// Address: 0x15b740 - 0x15b830
void sub_0015B740_0x15b740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B740_0x15b740");
#endif

    switch (ctx->pc) {
        case 0x15b79cu: goto label_15b79c;
        case 0x15b7c0u: goto label_15b7c0;
        case 0x15b820u: goto label_15b820;
        default: break;
    }

    ctx->pc = 0x15b740u;

    // 0x15b740: 0x94880004  lhu         $t0, 0x4($a0)
    ctx->pc = 0x15b740u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15b744: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x15b744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x15b748: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x15b748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x15b74c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x15b74cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b750: 0x3c093000  lui         $t1, 0x3000
    ctx->pc = 0x15b750u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)12288 << 16));
    // 0x15b754: 0x85980  sll         $t3, $t0, 6
    ctx->pc = 0x15b754u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x15b758: 0x34680404  ori         $t0, $v1, 0x404
    ctx->pc = 0x15b758u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x15b75c: 0x8b5821  addu        $t3, $a0, $t3
    ctx->pc = 0x15b75cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x15b760: 0xa21825  or          $v1, $a1, $v0
    ctx->pc = 0x15b760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x15b764: 0x8d65002c  lw          $a1, 0x2C($t3)
    ctx->pc = 0x15b764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 44)));
    // 0x15b768: 0x3c026c00  lui         $v0, 0x6C00
    ctx->pc = 0x15b768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27648 << 16));
    // 0x15b76c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x15b76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15b770: 0xad650030  sw          $a1, 0x30($t3)
    ctx->pc = 0x15b770u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 48), GPR_U32(ctx, 5));
    // 0x15b774: 0x5193c  dsll32      $v1, $a1, 4
    ctx->pc = 0x15b774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 4));
    // 0x15b778: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x15b778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x15b77c: 0xac8a0010  sw          $t2, 0x10($a0)
    ctx->pc = 0x15b77cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 10));
    // 0x15b780: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x15b780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x15b784: 0xad6a0044  sw          $t2, 0x44($t3)
    ctx->pc = 0x15b784u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 68), GPR_U32(ctx, 10));
    // 0x15b788: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x15b788u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x15b78c: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x15b78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x15b790: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x15b790u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x15b794: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x15b794u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x15b798: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x15b798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
label_15b79c:
    // 0x15b79c: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x15b79cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15b7a0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x15b7a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x15b7a4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x15b7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x15b7a8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x15b7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x15b7ac: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x15b7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x15b7b0: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15B7B0u;
    {
        const bool branch_taken_0x15b7b0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b7b0) {
            ctx->pc = 0x15B79Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15b79c;
        }
    }
    ctx->pc = 0x15B7B8u;
    // 0x15b7b8: 0x8056d60  j           func_15B580
    ctx->pc = 0x15B7B8u;
    ctx->pc = 0x15B580u;
    if (runtime->hasFunction(0x15B580u)) {
        auto targetFn = runtime->lookupFunction(0x15B580u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0015B580_0x15b580(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x15B7C0u;
label_15b7c0:
    // 0x15b7c0: 0x948b0004  lhu         $t3, 0x4($a0)
    ctx->pc = 0x15b7c0u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15b7c4: 0x74400  sll         $t0, $a3, 16
    ctx->pc = 0x15b7c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x15b7c8: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x15b7c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x15b7cc: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x15b7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
    // 0x15b7d0: 0x240a3000  addiu       $t2, $zero, 0x3000
    ctx->pc = 0x15b7d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    // 0x15b7d4: 0x3c091100  lui         $t1, 0x1100
    ctx->pc = 0x15b7d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4352 << 16));
    // 0x15b7d8: 0xb4180  sll         $t0, $t3, 6
    ctx->pc = 0x15b7d8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 11), 6));
    // 0x15b7dc: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x15b7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x15b7e0: 0x884021  addu        $t0, $a0, $t0
    ctx->pc = 0x15b7e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x15b7e4: 0x8d040024  lw          $a0, 0x24($t0)
    ctx->pc = 0x15b7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x15b7e8: 0xa48a0002  sh          $t2, 0x2($a0)
    ctx->pc = 0x15b7e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 10));
    // 0x15b7ec: 0xa4870000  sh          $a3, 0x0($a0)
    ctx->pc = 0x15b7ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x15b7f0: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x15b7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x15b7f4: 0xac890008  sw          $t1, 0x8($a0)
    ctx->pc = 0x15b7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 9));
    // 0x15b7f8: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x15b7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x15b7fc: 0xad000048  sw          $zero, 0x48($t0)
    ctx->pc = 0x15b7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 72), GPR_U32(ctx, 0));
    // 0x15b800: 0x8d030024  lw          $v1, 0x24($t0)
    ctx->pc = 0x15b800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x15b804: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x15b804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x15b808: 0xad030024  sw          $v1, 0x24($t0)
    ctx->pc = 0x15b808u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 3));
    // 0x15b80c: 0x8d03003c  lw          $v1, 0x3C($t0)
    ctx->pc = 0x15b80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 60)));
    // 0x15b810: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15b810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15b814: 0x3e00008  jr          $ra
    ctx->pc = 0x15B814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B814u;
            // 0x15b818: 0xad03003c  sw          $v1, 0x3C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15B81Cu;
    // 0x15b81c: 0x0  nop
    ctx->pc = 0x15b81cu;
    // NOP
label_15b820:
    // 0x15b820: 0x3e00008  jr          $ra
    ctx->pc = 0x15B820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B820u;
            // 0x15b824: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15B828u;
    // 0x15b828: 0x0  nop
    ctx->pc = 0x15b828u;
    // NOP
    // 0x15b82c: 0x0  nop
    ctx->pc = 0x15b82cu;
    // NOP
}
