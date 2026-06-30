#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015D520
// Address: 0x15d520 - 0x15d6d0
void sub_0015D520_0x15d520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D520_0x15d520");
#endif

    ctx->pc = 0x15d520u;

    // 0x15d520: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x15d520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x15d524: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15d524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15d528: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x15D528u;
    {
        const bool branch_taken_0x15d528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D528u;
            // 0x15d52c: 0x30820fff  andi        $v0, $a0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d528) {
            ctx->pc = 0x15D56Cu;
            goto label_15d56c;
        }
    }
    ctx->pc = 0x15D530u;
    // 0x15d530: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x15d530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x15d534: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15d534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15d538: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x15D538u;
    {
        const bool branch_taken_0x15d538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d538) {
            ctx->pc = 0x15D53Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15D538u;
            // 0x15d53c: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15D558u;
            goto label_15d558;
        }
    }
    ctx->pc = 0x15D540u;
    // 0x15d540: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15d540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15d544: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15d544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15d548: 0x24425460  addiu       $v0, $v0, 0x5460
    ctx->pc = 0x15d548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21600));
    // 0x15d54c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15d54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15d550: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x15D550u;
    {
        const bool branch_taken_0x15d550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D550u;
            // 0x15d554: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d550) {
            ctx->pc = 0x15D6C0u;
            goto label_15d6c0;
        }
    }
    ctx->pc = 0x15D558u;
label_15d558:
    // 0x15d558: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15d558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15d55c: 0x24425300  addiu       $v0, $v0, 0x5300
    ctx->pc = 0x15d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21248));
    // 0x15d560: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15d560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15d564: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x15D564u;
    {
        const bool branch_taken_0x15d564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D564u;
            // 0x15d568: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d564) {
            ctx->pc = 0x15D6C0u;
            goto label_15d6c0;
        }
    }
    ctx->pc = 0x15D56Cu;
label_15d56c:
    // 0x15d56c: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x15d56cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x15d570: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x15d570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x15d574: 0x852824  and         $a1, $a0, $a1
    ctx->pc = 0x15d574u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x15d578: 0x50a30044  beql        $a1, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x15D578u;
    {
        const bool branch_taken_0x15d578 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x15d578) {
            ctx->pc = 0x15D57Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15D578u;
            // 0x15d57c: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15D68Cu;
            goto label_15d68c;
        }
    }
    ctx->pc = 0x15D580u;
    // 0x15d580: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x15d580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x15d584: 0x50a3002a  beql        $a1, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x15D584u;
    {
        const bool branch_taken_0x15d584 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x15d584) {
            ctx->pc = 0x15D588u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15D584u;
            // 0x15d588: 0x3085f000  andi        $a1, $a0, 0xF000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15D630u;
            goto label_15d630;
        }
    }
    ctx->pc = 0x15D58Cu;
    // 0x15d58c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x15d58cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x15d590: 0x50a30019  beql        $a1, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x15D590u;
    {
        const bool branch_taken_0x15d590 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x15d590) {
            ctx->pc = 0x15D594u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15D590u;
            // 0x15d594: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15D5F8u;
            goto label_15d5f8;
        }
    }
    ctx->pc = 0x15D598u;
    // 0x15d598: 0x3085f000  andi        $a1, $a0, 0xF000
    ctx->pc = 0x15d598u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x15d59c: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x15d59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x15d5a0: 0x50a30010  beql        $a1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x15D5A0u;
    {
        const bool branch_taken_0x15d5a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x15d5a0) {
            ctx->pc = 0x15D5A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15D5A0u;
            // 0x15d5a4: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15D5E4u;
            goto label_15d5e4;
        }
    }
    ctx->pc = 0x15D5A8u;
    // 0x15d5a8: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x15d5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x15d5ac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15d5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15d5b0: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x15D5B0u;
    {
        const bool branch_taken_0x15d5b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d5b0) {
            ctx->pc = 0x15D5B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15D5B0u;
            // 0x15d5b4: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15D5D0u;
            goto label_15d5d0;
        }
    }
    ctx->pc = 0x15D5B8u;
    // 0x15d5b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15d5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15d5bc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15d5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15d5c0: 0x244255c0  addiu       $v0, $v0, 0x55C0
    ctx->pc = 0x15d5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21952));
    // 0x15d5c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15d5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15d5c8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x15D5C8u;
    {
        const bool branch_taken_0x15d5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D5C8u;
            // 0x15d5cc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d5c8) {
            ctx->pc = 0x15D6C0u;
            goto label_15d6c0;
        }
    }
    ctx->pc = 0x15D5D0u;
label_15d5d0:
    // 0x15d5d0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15d5d4: 0x24425000  addiu       $v0, $v0, 0x5000
    ctx->pc = 0x15d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20480));
    // 0x15d5d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15d5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15d5dc: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x15D5DCu;
    {
        const bool branch_taken_0x15d5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D5DCu;
            // 0x15d5e0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d5dc) {
            ctx->pc = 0x15D6C0u;
            goto label_15d6c0;
        }
    }
    ctx->pc = 0x15D5E4u;
label_15d5e4:
    // 0x15d5e4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15d5e8: 0x24425100  addiu       $v0, $v0, 0x5100
    ctx->pc = 0x15d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20736));
    // 0x15d5ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15d5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15d5f0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x15D5F0u;
    {
        const bool branch_taken_0x15d5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D5F0u;
            // 0x15d5f4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d5f0) {
            ctx->pc = 0x15D6C0u;
            goto label_15d6c0;
        }
    }
    ctx->pc = 0x15D5F8u;
label_15d5f8:
    // 0x15d5f8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15d5f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15d5fc: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x15D5FCu;
    {
        const bool branch_taken_0x15d5fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d5fc) {
            ctx->pc = 0x15D600u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15D5FCu;
            // 0x15d600: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15D61Cu;
            goto label_15d61c;
        }
    }
    ctx->pc = 0x15D604u;
    // 0x15d604: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15d604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15d608: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15d608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15d60c: 0x244256c0  addiu       $v0, $v0, 0x56C0
    ctx->pc = 0x15d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22208));
    // 0x15d610: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15d610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15d614: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x15D614u;
    {
        const bool branch_taken_0x15d614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D614u;
            // 0x15d618: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d614) {
            ctx->pc = 0x15D6C0u;
            goto label_15d6c0;
        }
    }
    ctx->pc = 0x15D61Cu;
label_15d61c:
    // 0x15d61c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15d620: 0x24425200  addiu       $v0, $v0, 0x5200
    ctx->pc = 0x15d620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20992));
    // 0x15d624: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15d624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15d628: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x15D628u;
    {
        const bool branch_taken_0x15d628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D628u;
            // 0x15d62c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d628) {
            ctx->pc = 0x15D6C0u;
            goto label_15d6c0;
        }
    }
    ctx->pc = 0x15D630u;
label_15d630:
    // 0x15d630: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x15d630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x15d634: 0x50a30010  beql        $a1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x15D634u;
    {
        const bool branch_taken_0x15d634 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x15d634) {
            ctx->pc = 0x15D638u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15D634u;
            // 0x15d638: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15D678u;
            goto label_15d678;
        }
    }
    ctx->pc = 0x15D63Cu;
    // 0x15d63c: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x15d63cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x15d640: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15d640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15d644: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x15D644u;
    {
        const bool branch_taken_0x15d644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d644) {
            ctx->pc = 0x15D648u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15D644u;
            // 0x15d648: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15D664u;
            goto label_15d664;
        }
    }
    ctx->pc = 0x15D64Cu;
    // 0x15d64c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15d64cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15d650: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15d650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15d654: 0x24425850  addiu       $v0, $v0, 0x5850
    ctx->pc = 0x15d654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22608));
    // 0x15d658: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15d658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15d65c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x15D65Cu;
    {
        const bool branch_taken_0x15d65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D65Cu;
            // 0x15d660: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d65c) {
            ctx->pc = 0x15D6C0u;
            goto label_15d6c0;
        }
    }
    ctx->pc = 0x15D664u;
label_15d664:
    // 0x15d664: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15d664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15d668: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x15d668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
    // 0x15d66c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15d670: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x15D670u;
    {
        const bool branch_taken_0x15d670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D670u;
            // 0x15d674: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d670) {
            ctx->pc = 0x15D6C0u;
            goto label_15d6c0;
        }
    }
    ctx->pc = 0x15D678u;
label_15d678:
    // 0x15d678: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15d678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15d67c: 0x24425890  addiu       $v0, $v0, 0x5890
    ctx->pc = 0x15d67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22672));
    // 0x15d680: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15d680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15d684: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15D684u;
    {
        const bool branch_taken_0x15d684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D684u;
            // 0x15d688: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d684) {
            ctx->pc = 0x15D6C0u;
            goto label_15d6c0;
        }
    }
    ctx->pc = 0x15D68Cu;
label_15d68c:
    // 0x15d68c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15d68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15d690: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x15D690u;
    {
        const bool branch_taken_0x15d690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d690) {
            ctx->pc = 0x15D694u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15D690u;
            // 0x15d694: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15D6B0u;
            goto label_15d6b0;
        }
    }
    ctx->pc = 0x15D698u;
    // 0x15d698: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15d698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15d69c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15d6a0: 0x24425910  addiu       $v0, $v0, 0x5910
    ctx->pc = 0x15d6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22800));
    // 0x15d6a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15d6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15d6a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15D6A8u;
    {
        const bool branch_taken_0x15d6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D6A8u;
            // 0x15d6ac: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d6a8) {
            ctx->pc = 0x15D6C0u;
            goto label_15d6c0;
        }
    }
    ctx->pc = 0x15D6B0u;
label_15d6b0:
    // 0x15d6b0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15d6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15d6b4: 0x244258d0  addiu       $v0, $v0, 0x58D0
    ctx->pc = 0x15d6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22736));
    // 0x15d6b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15d6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15d6bc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15d6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15d6c0:
    // 0x15d6c0: 0x8056dbc  j           func_15B6F0
    ctx->pc = 0x15D6C0u;
    ctx->pc = 0x15D6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D6C0u;
            // 0x15d6c4: 0x8f848418  lw          $a0, -0x7BE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B6F0u;
    {
        auto targetFn = runtime->lookupFunction(0x15B6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x15D6C8u;
    // 0x15d6c8: 0x0  nop
    ctx->pc = 0x15d6c8u;
    // NOP
    // 0x15d6cc: 0x0  nop
    ctx->pc = 0x15d6ccu;
    // NOP
}
