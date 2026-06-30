#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002693F0
// Address: 0x2693f0 - 0x2696c0
void sub_002693F0_0x2693f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002693F0_0x2693f0");
#endif

    switch (ctx->pc) {
        case 0x269408u: goto label_269408;
        case 0x269470u: goto label_269470;
        case 0x269670u: goto label_269670;
        default: break;
    }

    ctx->pc = 0x2693f0u;

    // 0x2693f0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2693f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2693f4: 0x246affff  addiu       $t2, $v1, -0x1
    ctx->pc = 0x2693f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2693f8: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x2693f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2693fc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2693FCu;
    {
        const bool branch_taken_0x2693fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2693FCu;
            // 0x269400: 0x834821  addu        $t1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2693fc) {
            ctx->pc = 0x269440u;
            goto label_269440;
        }
    }
    ctx->pc = 0x269404u;
    // 0x269404: 0x0  nop
    ctx->pc = 0x269404u;
    // NOP
label_269408:
    // 0x269408: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x269408u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x26940c: 0x8d280de0  lw          $t0, 0xDE0($t1)
    ctx->pc = 0x26940cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 3552)));
    // 0x269410: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x269410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x269414: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x269414u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x269418: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x269418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x26941c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x26941cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x269420: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x269420u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x269424: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x269424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x269428: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x269428u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x26942c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x26942cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x269430: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x269430u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x269434: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x269434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x269438: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x269438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26943c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x26943cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_269440:
    // 0x269440: 0x6182b  sltu        $v1, $zero, $a2
    ctx->pc = 0x269440u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x269444: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x269444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x269448: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x269448u;
    {
        const bool branch_taken_0x269448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x269448) {
            ctx->pc = 0x269458u;
            goto label_269458;
        }
    }
    ctx->pc = 0x269450u;
    // 0x269450: 0x541ffed  bgez        $t2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x269450u;
    {
        const bool branch_taken_0x269450 = (GPR_S32(ctx, 10) >= 0);
        if (branch_taken_0x269450) {
            ctx->pc = 0x269408u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_269408;
        }
    }
    ctx->pc = 0x269458u;
label_269458:
    // 0x269458: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x269458u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x26945c: 0x10200096  beqz        $at, . + 4 + (0x96 << 2)
    ctx->pc = 0x26945Cu;
    {
        const bool branch_taken_0x26945c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x269460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26945Cu;
            // 0x269460: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26945c) {
            ctx->pc = 0x2696B8u;
            goto label_2696b8;
        }
    }
    ctx->pc = 0x269464u;
    // 0x269464: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x269464u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x269468: 0x1420007d  bnez        $at, . + 4 + (0x7D << 2)
    ctx->pc = 0x269468u;
    {
        const bool branch_taken_0x269468 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x26946Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269468u;
            // 0x26946c: 0x24c3fff8  addiu       $v1, $a2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269468) {
            ctx->pc = 0x269660u;
            goto label_269660;
        }
    }
    ctx->pc = 0x269470u;
label_269470:
    // 0x269470: 0x8c8b0010  lw          $t3, 0x10($a0)
    ctx->pc = 0x269470u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x269474: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x269474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x269478: 0xe3402a  slt         $t0, $a3, $v1
    ctx->pc = 0x269478u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26947c: 0xb5080  sll         $t2, $t3, 2
    ctx->pc = 0x26947cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x269480: 0x25690001  addiu       $t1, $t3, 0x1
    ctx->pc = 0x269480u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x269484: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x269484u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x269488: 0xac890010  sw          $t1, 0x10($a0)
    ctx->pc = 0x269488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 9));
    // 0x26948c: 0xa4900  sll         $t1, $t2, 4
    ctx->pc = 0x26948cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x269490: 0x8caa0004  lw          $t2, 0x4($a1)
    ctx->pc = 0x269490u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x269494: 0x894821  addu        $t1, $a0, $t1
    ctx->pc = 0x269494u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x269498: 0x252b0f70  addiu       $t3, $t1, 0xF70
    ctx->pc = 0x269498u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 3952));
    // 0x26949c: 0x25490001  addiu       $t1, $t2, 0x1
    ctx->pc = 0x26949cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2694a0: 0xaca90004  sw          $t1, 0x4($a1)
    ctx->pc = 0x2694a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
    // 0x2694a4: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x2694a4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2694a8: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x2694a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2694ac: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x2694acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x2694b0: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x2694b0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
    // 0x2694b4: 0x8c8b0010  lw          $t3, 0x10($a0)
    ctx->pc = 0x2694b4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2694b8: 0xb5080  sll         $t2, $t3, 2
    ctx->pc = 0x2694b8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x2694bc: 0x25690001  addiu       $t1, $t3, 0x1
    ctx->pc = 0x2694bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x2694c0: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x2694c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x2694c4: 0xac890010  sw          $t1, 0x10($a0)
    ctx->pc = 0x2694c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 9));
    // 0x2694c8: 0xa4900  sll         $t1, $t2, 4
    ctx->pc = 0x2694c8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x2694cc: 0x8caa0004  lw          $t2, 0x4($a1)
    ctx->pc = 0x2694ccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2694d0: 0x894821  addu        $t1, $a0, $t1
    ctx->pc = 0x2694d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2694d4: 0x252b0f70  addiu       $t3, $t1, 0xF70
    ctx->pc = 0x2694d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 3952));
    // 0x2694d8: 0x25490001  addiu       $t1, $t2, 0x1
    ctx->pc = 0x2694d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2694dc: 0xaca90004  sw          $t1, 0x4($a1)
    ctx->pc = 0x2694dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
    // 0x2694e0: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x2694e0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2694e4: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x2694e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2694e8: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x2694e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x2694ec: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x2694ecu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
    // 0x2694f0: 0x8c8b0010  lw          $t3, 0x10($a0)
    ctx->pc = 0x2694f0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2694f4: 0xb5080  sll         $t2, $t3, 2
    ctx->pc = 0x2694f4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x2694f8: 0x25690001  addiu       $t1, $t3, 0x1
    ctx->pc = 0x2694f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x2694fc: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x2694fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x269500: 0xac890010  sw          $t1, 0x10($a0)
    ctx->pc = 0x269500u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 9));
    // 0x269504: 0xa4900  sll         $t1, $t2, 4
    ctx->pc = 0x269504u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x269508: 0x8caa0004  lw          $t2, 0x4($a1)
    ctx->pc = 0x269508u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x26950c: 0x894821  addu        $t1, $a0, $t1
    ctx->pc = 0x26950cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x269510: 0x252b0f70  addiu       $t3, $t1, 0xF70
    ctx->pc = 0x269510u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 3952));
    // 0x269514: 0x25490001  addiu       $t1, $t2, 0x1
    ctx->pc = 0x269514u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x269518: 0xaca90004  sw          $t1, 0x4($a1)
    ctx->pc = 0x269518u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
    // 0x26951c: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x26951cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x269520: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x269520u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x269524: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x269524u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x269528: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x269528u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
    // 0x26952c: 0x8c8b0010  lw          $t3, 0x10($a0)
    ctx->pc = 0x26952cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x269530: 0xb5080  sll         $t2, $t3, 2
    ctx->pc = 0x269530u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x269534: 0x25690001  addiu       $t1, $t3, 0x1
    ctx->pc = 0x269534u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x269538: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x269538u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x26953c: 0xac890010  sw          $t1, 0x10($a0)
    ctx->pc = 0x26953cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 9));
    // 0x269540: 0xa4900  sll         $t1, $t2, 4
    ctx->pc = 0x269540u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x269544: 0x8caa0004  lw          $t2, 0x4($a1)
    ctx->pc = 0x269544u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x269548: 0x894821  addu        $t1, $a0, $t1
    ctx->pc = 0x269548u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x26954c: 0x252b0f70  addiu       $t3, $t1, 0xF70
    ctx->pc = 0x26954cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 3952));
    // 0x269550: 0x25490001  addiu       $t1, $t2, 0x1
    ctx->pc = 0x269550u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x269554: 0xaca90004  sw          $t1, 0x4($a1)
    ctx->pc = 0x269554u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
    // 0x269558: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x269558u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x26955c: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x26955cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x269560: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x269560u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x269564: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x269564u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
    // 0x269568: 0x8c8b0010  lw          $t3, 0x10($a0)
    ctx->pc = 0x269568u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26956c: 0xb5080  sll         $t2, $t3, 2
    ctx->pc = 0x26956cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x269570: 0x25690001  addiu       $t1, $t3, 0x1
    ctx->pc = 0x269570u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x269574: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x269574u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x269578: 0xac890010  sw          $t1, 0x10($a0)
    ctx->pc = 0x269578u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 9));
    // 0x26957c: 0xa4900  sll         $t1, $t2, 4
    ctx->pc = 0x26957cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x269580: 0x8caa0004  lw          $t2, 0x4($a1)
    ctx->pc = 0x269580u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x269584: 0x894821  addu        $t1, $a0, $t1
    ctx->pc = 0x269584u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x269588: 0x252b0f70  addiu       $t3, $t1, 0xF70
    ctx->pc = 0x269588u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 3952));
    // 0x26958c: 0x25490001  addiu       $t1, $t2, 0x1
    ctx->pc = 0x26958cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x269590: 0xaca90004  sw          $t1, 0x4($a1)
    ctx->pc = 0x269590u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
    // 0x269594: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x269594u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x269598: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x269598u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26959c: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x26959cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x2695a0: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x2695a0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
    // 0x2695a4: 0x8c8b0010  lw          $t3, 0x10($a0)
    ctx->pc = 0x2695a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2695a8: 0xb5080  sll         $t2, $t3, 2
    ctx->pc = 0x2695a8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x2695ac: 0x25690001  addiu       $t1, $t3, 0x1
    ctx->pc = 0x2695acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x2695b0: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x2695b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x2695b4: 0xac890010  sw          $t1, 0x10($a0)
    ctx->pc = 0x2695b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 9));
    // 0x2695b8: 0xa4900  sll         $t1, $t2, 4
    ctx->pc = 0x2695b8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x2695bc: 0x8caa0004  lw          $t2, 0x4($a1)
    ctx->pc = 0x2695bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2695c0: 0x894821  addu        $t1, $a0, $t1
    ctx->pc = 0x2695c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2695c4: 0x252b0f70  addiu       $t3, $t1, 0xF70
    ctx->pc = 0x2695c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 3952));
    // 0x2695c8: 0x25490001  addiu       $t1, $t2, 0x1
    ctx->pc = 0x2695c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2695cc: 0xaca90004  sw          $t1, 0x4($a1)
    ctx->pc = 0x2695ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
    // 0x2695d0: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x2695d0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2695d4: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x2695d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2695d8: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x2695d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x2695dc: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x2695dcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
    // 0x2695e0: 0x8c8b0010  lw          $t3, 0x10($a0)
    ctx->pc = 0x2695e0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2695e4: 0xb5080  sll         $t2, $t3, 2
    ctx->pc = 0x2695e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x2695e8: 0x25690001  addiu       $t1, $t3, 0x1
    ctx->pc = 0x2695e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x2695ec: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x2695ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x2695f0: 0xac890010  sw          $t1, 0x10($a0)
    ctx->pc = 0x2695f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 9));
    // 0x2695f4: 0xa4900  sll         $t1, $t2, 4
    ctx->pc = 0x2695f4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x2695f8: 0x8caa0004  lw          $t2, 0x4($a1)
    ctx->pc = 0x2695f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2695fc: 0x894821  addu        $t1, $a0, $t1
    ctx->pc = 0x2695fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x269600: 0x252b0f70  addiu       $t3, $t1, 0xF70
    ctx->pc = 0x269600u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 3952));
    // 0x269604: 0x25490001  addiu       $t1, $t2, 0x1
    ctx->pc = 0x269604u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x269608: 0xaca90004  sw          $t1, 0x4($a1)
    ctx->pc = 0x269608u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
    // 0x26960c: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x26960cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x269610: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x269610u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x269614: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x269614u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x269618: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x269618u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
    // 0x26961c: 0x8c8b0010  lw          $t3, 0x10($a0)
    ctx->pc = 0x26961cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x269620: 0x256a0001  addiu       $t2, $t3, 0x1
    ctx->pc = 0x269620u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x269624: 0xb4880  sll         $t1, $t3, 2
    ctx->pc = 0x269624u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x269628: 0xac8a0010  sw          $t2, 0x10($a0)
    ctx->pc = 0x269628u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 10));
    // 0x26962c: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x26962cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x269630: 0x8caa0004  lw          $t2, 0x4($a1)
    ctx->pc = 0x269630u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x269634: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x269634u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x269638: 0x894821  addu        $t1, $a0, $t1
    ctx->pc = 0x269638u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x26963c: 0x252b0f70  addiu       $t3, $t1, 0xF70
    ctx->pc = 0x26963cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 3952));
    // 0x269640: 0x25490001  addiu       $t1, $t2, 0x1
    ctx->pc = 0x269640u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x269644: 0xaca90004  sw          $t1, 0x4($a1)
    ctx->pc = 0x269644u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
    // 0x269648: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x269648u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x26964c: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x26964cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x269650: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x269650u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x269654: 0x1500ff86  bnez        $t0, . + 4 + (-0x7A << 2)
    ctx->pc = 0x269654u;
    {
        const bool branch_taken_0x269654 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x269658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269654u;
            // 0x269658: 0xad2b0000  sw          $t3, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269654) {
            ctx->pc = 0x269470u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_269470;
        }
    }
    ctx->pc = 0x26965Cu;
    // 0x26965c: 0x0  nop
    ctx->pc = 0x26965cu;
    // NOP
label_269660:
    // 0x269660: 0xe6082a  slt         $at, $a3, $a2
    ctx->pc = 0x269660u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x269664: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x269664u;
    {
        const bool branch_taken_0x269664 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x269664) {
            ctx->pc = 0x2696B8u;
            goto label_2696b8;
        }
    }
    ctx->pc = 0x26966Cu;
    // 0x26966c: 0x0  nop
    ctx->pc = 0x26966cu;
    // NOP
label_269670:
    // 0x269670: 0x8c8a0010  lw          $t2, 0x10($a0)
    ctx->pc = 0x269670u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x269674: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x269674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x269678: 0xe6182a  slt         $v1, $a3, $a2
    ctx->pc = 0x269678u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x26967c: 0x25490001  addiu       $t1, $t2, 0x1
    ctx->pc = 0x26967cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x269680: 0xa4080  sll         $t0, $t2, 2
    ctx->pc = 0x269680u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x269684: 0xac890010  sw          $t1, 0x10($a0)
    ctx->pc = 0x269684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 9));
    // 0x269688: 0x10a4021  addu        $t0, $t0, $t2
    ctx->pc = 0x269688u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x26968c: 0x8ca90004  lw          $t1, 0x4($a1)
    ctx->pc = 0x26968cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x269690: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x269690u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x269694: 0x884021  addu        $t0, $a0, $t0
    ctx->pc = 0x269694u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x269698: 0x250a0f70  addiu       $t2, $t0, 0xF70
    ctx->pc = 0x269698u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 3952));
    // 0x26969c: 0x25280001  addiu       $t0, $t1, 0x1
    ctx->pc = 0x26969cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2696a0: 0xaca80004  sw          $t0, 0x4($a1)
    ctx->pc = 0x2696a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 8));
    // 0x2696a4: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x2696a4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2696a8: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x2696a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2696ac: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x2696acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2696b0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2696B0u;
    {
        const bool branch_taken_0x2696b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2696B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2696B0u;
            // 0x2696b4: 0xad0a0000  sw          $t2, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2696b0) {
            ctx->pc = 0x269670u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_269670;
        }
    }
    ctx->pc = 0x2696B8u;
label_2696b8:
    // 0x2696b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2696B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2696C0u;
}
