#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CA400
// Address: 0x1ca400 - 0x1ca4f8
void sub_001CA400_0x1ca400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA400_0x1ca400");
#endif

    ctx->pc = 0x1ca400u;

    // 0x1ca400: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1ca400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1ca404: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x1ca404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1ca408: 0x244ca70c  addiu       $t4, $v0, -0x58F4
    ctx->pc = 0x1ca408u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944524));
    // 0x1ca40c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1ca40cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1ca410: 0x8d8a0000  lw          $t2, 0x0($t4)
    ctx->pc = 0x1ca410u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1ca414: 0x81420ab4  lb          $v0, 0xAB4($t2)
    ctx->pc = 0x1ca414u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 2740)));
    // 0x1ca418: 0x4400033  bltz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1CA418u;
    {
        const bool branch_taken_0x1ca418 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CA41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA418u;
            // 0x1ca41c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca418) {
            ctx->pc = 0x1CA4E8u;
            goto label_1ca4e8;
        }
    }
    ctx->pc = 0x1CA420u;
    // 0x1ca420: 0x91420ab5  lbu         $v0, 0xAB5($t2)
    ctx->pc = 0x1ca420u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2741)));
    // 0x1ca424: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ca424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ca428: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ca428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ca42c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ca42cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ca430: 0x246300b0  addiu       $v1, $v1, 0xB0
    ctx->pc = 0x1ca430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x1ca434: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x1ca434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1ca438: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x1ca438u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ca43c: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x1CA43Cu;
    {
        const bool branch_taken_0x1ca43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca43c) {
            ctx->pc = 0x1CA440u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA43Cu;
            // 0x1ca440: 0x240bffff  addiu       $t3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CA4ECu;
            goto label_1ca4ec;
        }
    }
    ctx->pc = 0x1CA444u;
    // 0x1ca444: 0xa4640004  sh          $a0, 0x4($v1)
    ctx->pc = 0x1ca444u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ca448: 0x91430ab5  lbu         $v1, 0xAB5($t2)
    ctx->pc = 0x1ca448u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2741)));
    // 0x1ca44c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ca44cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ca450: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ca450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ca454: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ca454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ca458: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1ca458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1ca45c: 0xa44500b6  sh          $a1, 0xB6($v0)
    ctx->pc = 0x1ca45cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 182), (uint16_t)GPR_U32(ctx, 5));
    // 0x1ca460: 0x91430ab5  lbu         $v1, 0xAB5($t2)
    ctx->pc = 0x1ca460u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2741)));
    // 0x1ca464: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ca464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ca468: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ca468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ca46c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ca46cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ca470: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1ca470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1ca474: 0xac4600b8  sw          $a2, 0xB8($v0)
    ctx->pc = 0x1ca474u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 6));
    // 0x1ca478: 0x91430ab5  lbu         $v1, 0xAB5($t2)
    ctx->pc = 0x1ca478u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2741)));
    // 0x1ca47c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ca47cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ca480: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ca480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ca484: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ca484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ca488: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1ca488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1ca48c: 0xac4700bc  sw          $a3, 0xBC($v0)
    ctx->pc = 0x1ca48cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 7));
    // 0x1ca490: 0x91430ab5  lbu         $v1, 0xAB5($t2)
    ctx->pc = 0x1ca490u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2741)));
    // 0x1ca494: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ca494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ca498: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ca498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ca49c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ca49cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ca4a0: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1ca4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1ca4a4: 0xac4800c0  sw          $t0, 0xC0($v0)
    ctx->pc = 0x1ca4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 8));
    // 0x1ca4a8: 0x91430ab5  lbu         $v1, 0xAB5($t2)
    ctx->pc = 0x1ca4a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2741)));
    // 0x1ca4ac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ca4acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ca4b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ca4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ca4b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ca4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ca4b8: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1ca4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1ca4bc: 0xac4900c4  sw          $t1, 0xC4($v0)
    ctx->pc = 0x1ca4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 9));
    // 0x1ca4c0: 0x91430ab5  lbu         $v1, 0xAB5($t2)
    ctx->pc = 0x1ca4c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2741)));
    // 0x1ca4c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ca4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ca4c8: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x1ca4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x1ca4cc: 0xa1430ab5  sb          $v1, 0xAB5($t2)
    ctx->pc = 0x1ca4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 2741), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ca4d0: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x1ca4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1ca4d4: 0x90820ab4  lbu         $v0, 0xAB4($a0)
    ctx->pc = 0x1ca4d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2740)));
    // 0x1ca4d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ca4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ca4dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA4DCu;
    {
        const bool branch_taken_0x1ca4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA4DCu;
            // 0x1ca4e0: 0xa0820ab4  sb          $v0, 0xAB4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2740), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4dc) {
            ctx->pc = 0x1CA4ECu;
            goto label_1ca4ec;
        }
    }
    ctx->pc = 0x1CA4E4u;
    // 0x1ca4e4: 0x0  nop
    ctx->pc = 0x1ca4e4u;
    // NOP
label_1ca4e8:
    // 0x1ca4e8: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x1ca4e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ca4ec:
    // 0x1ca4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA4ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA4ECu;
            // 0x1ca4f0: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA4F4u;
    // 0x1ca4f4: 0x0  nop
    ctx->pc = 0x1ca4f4u;
    // NOP
}
