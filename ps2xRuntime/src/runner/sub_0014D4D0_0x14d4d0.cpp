#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014D4D0
// Address: 0x14d4d0 - 0x14d780
void sub_0014D4D0_0x14d4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D4D0_0x14d4d0");
#endif

    ctx->pc = 0x14d4d0u;

    // 0x14d4d0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d4d4: 0xac4057cc  sw          $zero, 0x57CC($v0)
    ctx->pc = 0x14d4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22476), GPR_U32(ctx, 0));
    // 0x14d4d8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d4dc: 0xac4057d0  sw          $zero, 0x57D0($v0)
    ctx->pc = 0x14d4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22480), GPR_U32(ctx, 0));
    // 0x14d4e0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d4e4: 0xac405824  sw          $zero, 0x5824($v0)
    ctx->pc = 0x14d4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22564), GPR_U32(ctx, 0));
    // 0x14d4e8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x14d4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x14d4ec: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D4ECu;
    {
        const bool branch_taken_0x14d4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d4ec) {
            ctx->pc = 0x14D4F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14D4ECu;
            // 0x14d4f0: 0x30820002  andi        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14D4FCu;
            goto label_14d4fc;
        }
    }
    ctx->pc = 0x14D4F4u;
    // 0x14d4f4: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x14D4F4u;
    {
        const bool branch_taken_0x14d4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D4F4u;
            // 0x14d4f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d4f4) {
            ctx->pc = 0x14D770u;
            goto label_14d770;
        }
    }
    ctx->pc = 0x14D4FCu;
label_14d4fc:
    // 0x14d4fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14D4FCu;
    {
        const bool branch_taken_0x14d4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d4fc) {
            ctx->pc = 0x14D51Cu;
            goto label_14d51c;
        }
    }
    ctx->pc = 0x14D504u;
    // 0x14d504: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14d504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d508: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d50c: 0xac4357ac  sw          $v1, 0x57AC($v0)
    ctx->pc = 0x14d50cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22444), GPR_U32(ctx, 3));
    // 0x14d510: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d514: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14D514u;
    {
        const bool branch_taken_0x14d514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D514u;
            // 0x14d518: 0xac4357b0  sw          $v1, 0x57B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d514) {
            ctx->pc = 0x14D52Cu;
            goto label_14d52c;
        }
    }
    ctx->pc = 0x14D51Cu;
label_14d51c:
    // 0x14d51c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14d51cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14d520: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d524: 0xac6057ac  sw          $zero, 0x57AC($v1)
    ctx->pc = 0x14d524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22444), GPR_U32(ctx, 0));
    // 0x14d528: 0xac4057b0  sw          $zero, 0x57B0($v0)
    ctx->pc = 0x14d528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22448), GPR_U32(ctx, 0));
label_14d52c:
    // 0x14d52c: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x14d52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x14d530: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D530u;
    {
        const bool branch_taken_0x14d530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d530) {
            ctx->pc = 0x14D548u;
            goto label_14d548;
        }
    }
    ctx->pc = 0x14D538u;
    // 0x14d538: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14d538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d53c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d540: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14D540u;
    {
        const bool branch_taken_0x14d540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D540u;
            // 0x14d544: 0xac4357b4  sw          $v1, 0x57B4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d540) {
            ctx->pc = 0x14D550u;
            goto label_14d550;
        }
    }
    ctx->pc = 0x14D548u;
label_14d548:
    // 0x14d548: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d54c: 0xac4057b4  sw          $zero, 0x57B4($v0)
    ctx->pc = 0x14d54cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22452), GPR_U32(ctx, 0));
label_14d550:
    // 0x14d550: 0x30850060  andi        $a1, $a0, 0x60
    ctx->pc = 0x14d550u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)96);
    // 0x14d554: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x14d554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14d558: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D558u;
    {
        const bool branch_taken_0x14d558 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x14d558) {
            ctx->pc = 0x14D570u;
            goto label_14d570;
        }
    }
    ctx->pc = 0x14D560u;
    // 0x14d560: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14d560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d564: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d568: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14D568u;
    {
        const bool branch_taken_0x14d568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D568u;
            // 0x14d56c: 0xac4357a0  sw          $v1, 0x57A0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d568) {
            ctx->pc = 0x14D578u;
            goto label_14d578;
        }
    }
    ctx->pc = 0x14D570u;
label_14d570:
    // 0x14d570: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d574: 0xac4057a0  sw          $zero, 0x57A0($v0)
    ctx->pc = 0x14d574u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22432), GPR_U32(ctx, 0));
label_14d578:
    // 0x14d578: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x14d578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x14d57c: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D57Cu;
    {
        const bool branch_taken_0x14d57c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x14d57c) {
            ctx->pc = 0x14D594u;
            goto label_14d594;
        }
    }
    ctx->pc = 0x14D584u;
    // 0x14d584: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14d584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d588: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d58c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14D58Cu;
    {
        const bool branch_taken_0x14d58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D58Cu;
            // 0x14d590: 0xac4357a4  sw          $v1, 0x57A4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22436), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d58c) {
            ctx->pc = 0x14D59Cu;
            goto label_14d59c;
        }
    }
    ctx->pc = 0x14D594u;
label_14d594:
    // 0x14d594: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d598: 0xac4057a4  sw          $zero, 0x57A4($v0)
    ctx->pc = 0x14d598u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22436), GPR_U32(ctx, 0));
label_14d59c:
    // 0x14d59c: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x14d59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x14d5a0: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D5A0u;
    {
        const bool branch_taken_0x14d5a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x14d5a0) {
            ctx->pc = 0x14D5B8u;
            goto label_14d5b8;
        }
    }
    ctx->pc = 0x14D5A8u;
    // 0x14d5a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14d5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d5ac: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d5b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14D5B0u;
    {
        const bool branch_taken_0x14d5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D5B0u;
            // 0x14d5b4: 0xac4357a8  sw          $v1, 0x57A8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22440), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d5b0) {
            ctx->pc = 0x14D5C0u;
            goto label_14d5c0;
        }
    }
    ctx->pc = 0x14D5B8u;
label_14d5b8:
    // 0x14d5b8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d5bc: 0xac4057a8  sw          $zero, 0x57A8($v0)
    ctx->pc = 0x14d5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22440), GPR_U32(ctx, 0));
label_14d5c0:
    // 0x14d5c0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d5c4: 0x30830080  andi        $v1, $a0, 0x80
    ctx->pc = 0x14d5c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x14d5c8: 0xac4057c0  sw          $zero, 0x57C0($v0)
    ctx->pc = 0x14d5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22464), GPR_U32(ctx, 0));
    // 0x14d5cc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x14d5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14d5d0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D5D0u;
    {
        const bool branch_taken_0x14d5d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14d5d0) {
            ctx->pc = 0x14D5E8u;
            goto label_14d5e8;
        }
    }
    ctx->pc = 0x14D5D8u;
    // 0x14d5d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14d5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d5dc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d5e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14D5E0u;
    {
        const bool branch_taken_0x14d5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D5E0u;
            // 0x14d5e4: 0xac4357c4  sw          $v1, 0x57C4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22468), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d5e0) {
            ctx->pc = 0x14D5F0u;
            goto label_14d5f0;
        }
    }
    ctx->pc = 0x14D5E8u;
label_14d5e8:
    // 0x14d5e8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d5ec: 0xac4057c4  sw          $zero, 0x57C4($v0)
    ctx->pc = 0x14d5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22468), GPR_U32(ctx, 0));
label_14d5f0:
    // 0x14d5f0: 0x30820800  andi        $v0, $a0, 0x800
    ctx->pc = 0x14d5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
    // 0x14d5f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D5F4u;
    {
        const bool branch_taken_0x14d5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d5f4) {
            ctx->pc = 0x14D60Cu;
            goto label_14d60c;
        }
    }
    ctx->pc = 0x14D5FCu;
    // 0x14d5fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14d5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d600: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d604: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14D604u;
    {
        const bool branch_taken_0x14d604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14D604u;
            // 0x14d608: 0xac4357c8  sw          $v1, 0x57C8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22472), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d604) {
            ctx->pc = 0x14D614u;
            goto label_14d614;
        }
    }
    ctx->pc = 0x14D60Cu;
label_14d60c:
    // 0x14d60c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d610: 0xac4057c8  sw          $zero, 0x57C8($v0)
    ctx->pc = 0x14d610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22472), GPR_U32(ctx, 0));
label_14d614:
    // 0x14d614: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14d614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14d618: 0x30827000  andi        $v0, $a0, 0x7000
    ctx->pc = 0x14d618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)28672);
    // 0x14d61c: 0xac6057d4  sw          $zero, 0x57D4($v1)
    ctx->pc = 0x14d61cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22484), GPR_U32(ctx, 0));
    // 0x14d620: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x14d620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x14d624: 0x54430010  bnel        $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14D624u;
    {
        const bool branch_taken_0x14d624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14d624) {
            ctx->pc = 0x14D628u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14D624u;
            // 0x14d628: 0x30830100  andi        $v1, $a0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
            ctx->pc = 0x14D668u;
            goto label_14d668;
        }
    }
    ctx->pc = 0x14D62Cu;
    // 0x14d62c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14d62cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d630: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14d630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14d634: 0xac6657d4  sw          $a2, 0x57D4($v1)
    ctx->pc = 0x14d634u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22484), GPR_U32(ctx, 6));
    // 0x14d638: 0x8f838358  lw          $v1, -0x7CA8($gp)
    ctx->pc = 0x14d638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935384)));
    // 0x14d63c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x14D63Cu;
    {
        const bool branch_taken_0x14d63c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d63c) {
            ctx->pc = 0x14D664u;
            goto label_14d664;
        }
    }
    ctx->pc = 0x14D644u;
    // 0x14d644: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14d644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14d648: 0x93858357  lbu         $a1, -0x7CA9($gp)
    ctx->pc = 0x14d648u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935383)));
    // 0x14d64c: 0xac6657c8  sw          $a2, 0x57C8($v1)
    ctx->pc = 0x14d64cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22472), GPR_U32(ctx, 6));
    // 0x14d650: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x14d650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14d654: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D654u;
    {
        const bool branch_taken_0x14d654 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x14d654) {
            ctx->pc = 0x14D664u;
            goto label_14d664;
        }
    }
    ctx->pc = 0x14D65Cu;
    // 0x14d65c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14d65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14d660: 0xac6657d0  sw          $a2, 0x57D0($v1)
    ctx->pc = 0x14d660u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22480), GPR_U32(ctx, 6));
label_14d664:
    // 0x14d664: 0x30830100  andi        $v1, $a0, 0x100
    ctx->pc = 0x14d664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
label_14d668:
    // 0x14d668: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x14D668u;
    {
        const bool branch_taken_0x14d668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d668) {
            ctx->pc = 0x14D66Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14D668u;
            // 0x14d66c: 0x24033000  addiu       $v1, $zero, 0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14D6A4u;
            goto label_14d6a4;
        }
    }
    ctx->pc = 0x14D670u;
    // 0x14d670: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x14d670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14d674: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14d674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14d678: 0xac6457d4  sw          $a0, 0x57D4($v1)
    ctx->pc = 0x14d678u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22484), GPR_U32(ctx, 4));
    // 0x14d67c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14d67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d680: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14d680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14d684: 0x9384835f  lbu         $a0, -0x7CA1($gp)
    ctx->pc = 0x14d684u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935391)));
    // 0x14d688: 0xac6557a0  sw          $a1, 0x57A0($v1)
    ctx->pc = 0x14d688u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22432), GPR_U32(ctx, 5));
    // 0x14d68c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x14d68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14d690: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D690u;
    {
        const bool branch_taken_0x14d690 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14d690) {
            ctx->pc = 0x14D6A0u;
            goto label_14d6a0;
        }
    }
    ctx->pc = 0x14D698u;
    // 0x14d698: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14d698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14d69c: 0xac6557d0  sw          $a1, 0x57D0($v1)
    ctx->pc = 0x14d69cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22480), GPR_U32(ctx, 5));
label_14d6a0:
    // 0x14d6a0: 0x24033000  addiu       $v1, $zero, 0x3000
    ctx->pc = 0x14d6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
label_14d6a4:
    // 0x14d6a4: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D6A4u;
    {
        const bool branch_taken_0x14d6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14d6a4) {
            ctx->pc = 0x14D6A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14D6A4u;
            // 0x14d6a8: 0x24034000  addiu       $v1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14D6BCu;
            goto label_14d6bc;
        }
    }
    ctx->pc = 0x14D6ACu;
    // 0x14d6ac: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x14d6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14d6b0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14d6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14d6b4: 0xac6457d4  sw          $a0, 0x57D4($v1)
    ctx->pc = 0x14d6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22484), GPR_U32(ctx, 4));
    // 0x14d6b8: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x14d6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_14d6bc:
    // 0x14d6bc: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D6BCu;
    {
        const bool branch_taken_0x14d6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14d6bc) {
            ctx->pc = 0x14D6C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14D6BCu;
            // 0x14d6c0: 0x24035000  addiu       $v1, $zero, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14D6D4u;
            goto label_14d6d4;
        }
    }
    ctx->pc = 0x14D6C4u;
    // 0x14d6c4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x14d6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14d6c8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14d6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14d6cc: 0xac6457d4  sw          $a0, 0x57D4($v1)
    ctx->pc = 0x14d6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22484), GPR_U32(ctx, 4));
    // 0x14d6d0: 0x24035000  addiu       $v1, $zero, 0x5000
    ctx->pc = 0x14d6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
label_14d6d4:
    // 0x14d6d4: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D6D4u;
    {
        const bool branch_taken_0x14d6d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14d6d4) {
            ctx->pc = 0x14D6D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14D6D4u;
            // 0x14d6d8: 0x24037000  addiu       $v1, $zero, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14D6ECu;
            goto label_14d6ec;
        }
    }
    ctx->pc = 0x14D6DCu;
    // 0x14d6dc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x14d6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14d6e0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14d6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14d6e4: 0xac6457d4  sw          $a0, 0x57D4($v1)
    ctx->pc = 0x14d6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22484), GPR_U32(ctx, 4));
    // 0x14d6e8: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x14d6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
label_14d6ec:
    // 0x14d6ec: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D6ECu;
    {
        const bool branch_taken_0x14d6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14d6ec) {
            ctx->pc = 0x14D6F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14D6ECu;
            // 0x14d6f0: 0x24036000  addiu       $v1, $zero, 0x6000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14D704u;
            goto label_14d704;
        }
    }
    ctx->pc = 0x14D6F4u;
    // 0x14d6f4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x14d6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14d6f8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14d6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14d6fc: 0xac6457d4  sw          $a0, 0x57D4($v1)
    ctx->pc = 0x14d6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22484), GPR_U32(ctx, 4));
    // 0x14d700: 0x24036000  addiu       $v1, $zero, 0x6000
    ctx->pc = 0x14d700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
label_14d704:
    // 0x14d704: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D704u;
    {
        const bool branch_taken_0x14d704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14d704) {
            ctx->pc = 0x14D708u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14D704u;
            // 0x14d708: 0x24032000  addiu       $v1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14D71Cu;
            goto label_14d71c;
        }
    }
    ctx->pc = 0x14D70Cu;
    // 0x14d70c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x14d70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x14d710: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x14d710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x14d714: 0xac6457d4  sw          $a0, 0x57D4($v1)
    ctx->pc = 0x14d714u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22484), GPR_U32(ctx, 4));
    // 0x14d718: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x14d718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_14d71c:
    // 0x14d71c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D71Cu;
    {
        const bool branch_taken_0x14d71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14d71c) {
            ctx->pc = 0x14D730u;
            goto label_14d730;
        }
    }
    ctx->pc = 0x14D724u;
    // 0x14d724: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x14d724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14d728: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d72c: 0xac4357d4  sw          $v1, 0x57D4($v0)
    ctx->pc = 0x14d72cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22484), GPR_U32(ctx, 3));
label_14d730:
    // 0x14d730: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d734: 0x8c4257d4  lw          $v0, 0x57D4($v0)
    ctx->pc = 0x14d734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22484)));
    // 0x14d738: 0x304200fc  andi        $v0, $v0, 0xFC
    ctx->pc = 0x14d738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)252);
    // 0x14d73c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x14D73Cu;
    {
        const bool branch_taken_0x14d73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d73c) {
            ctx->pc = 0x14D740u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14D73Cu;
            // 0x14d740: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14D770u;
            goto label_14d770;
        }
    }
    ctx->pc = 0x14D744u;
    // 0x14d744: 0xc7808364  lwc1        $f0, -0x7C9C($gp)
    ctx->pc = 0x14d744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d748: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14d748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14d74c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14d74cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14d750: 0x0  nop
    ctx->pc = 0x14d750u;
    // NOP
    // 0x14d754: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x14d754u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d758: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x14D758u;
    {
        const bool branch_taken_0x14d758 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14d758) {
            ctx->pc = 0x14D76Cu;
            goto label_14d76c;
        }
    }
    ctx->pc = 0x14D760u;
    // 0x14d760: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14d760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d764: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14d764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14d768: 0xac4357d0  sw          $v1, 0x57D0($v0)
    ctx->pc = 0x14d768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22480), GPR_U32(ctx, 3));
label_14d76c:
    // 0x14d76c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14d76cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14d770:
    // 0x14d770: 0x3e00008  jr          $ra
    ctx->pc = 0x14D770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14D778u;
    // 0x14d778: 0x0  nop
    ctx->pc = 0x14d778u;
    // NOP
    // 0x14d77c: 0x0  nop
    ctx->pc = 0x14d77cu;
    // NOP
}
