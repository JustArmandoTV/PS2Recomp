#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014E5E0
// Address: 0x14e5e0 - 0x14e830
void sub_0014E5E0_0x14e5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E5E0_0x14e5e0");
#endif

    switch (ctx->pc) {
        case 0x14e608u: goto label_14e608;
        case 0x14e710u: goto label_14e710;
        case 0x14e724u: goto label_14e724;
        case 0x14e770u: goto label_14e770;
        case 0x14e78cu: goto label_14e78c;
        case 0x14e7a8u: goto label_14e7a8;
        case 0x14e7e0u: goto label_14e7e0;
        case 0x14e7fcu: goto label_14e7fc;
        case 0x14e80cu: goto label_14e80c;
        case 0x14e81cu: goto label_14e81c;
        default: break;
    }

    ctx->pc = 0x14e5e0u;

    // 0x14e5e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14e5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14e5e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14e5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14e5e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14e5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14e5ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14e5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14e5f0: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x14e5f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14e5f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14e5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e5f8: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x14e5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x14e5fc: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x14e5fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14e600: 0xc04fd70  jal         func_13F5C0
    ctx->pc = 0x14E600u;
    SET_GPR_U32(ctx, 31, 0x14E608u);
    ctx->pc = 0x14E604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E600u;
            // 0x14e604: 0x8e26000c  lw          $a2, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F5C0u;
    if (runtime->hasFunction(0x13F5C0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E608u; }
        if (ctx->pc != 0x14E608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F5C0_0x13f5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E608u; }
        if (ctx->pc != 0x14E608u) { return; }
    }
    ctx->pc = 0x14E608u;
label_14e608:
    // 0x14e608: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e60c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x14e60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x14e610: 0x8c445824  lw          $a0, 0x5824($v0)
    ctx->pc = 0x14e610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22564)));
    // 0x14e614: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x14e614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x14e618: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x14e618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14e61c: 0x10430070  beq         $v0, $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x14E61Cu;
    {
        const bool branch_taken_0x14e61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14e61c) {
            ctx->pc = 0x14E7E0u;
            goto label_14e7e0;
        }
    }
    ctx->pc = 0x14E624u;
    // 0x14e624: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e628: 0x8c4257f0  lw          $v0, 0x57F0($v0)
    ctx->pc = 0x14e628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22512)));
    // 0x14e62c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14E62Cu;
    {
        const bool branch_taken_0x14e62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e62c) {
            ctx->pc = 0x14E650u;
            goto label_14e650;
        }
    }
    ctx->pc = 0x14E634u;
    // 0x14e634: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e638: 0x8c425830  lw          $v0, 0x5830($v0)
    ctx->pc = 0x14e638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22576)));
    // 0x14e63c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E63Cu;
    {
        const bool branch_taken_0x14e63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e63c) {
            ctx->pc = 0x14E650u;
            goto label_14e650;
        }
    }
    ctx->pc = 0x14E644u;
    // 0x14e644: 0x34832000  ori         $v1, $a0, 0x2000
    ctx->pc = 0x14e644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x14e648: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e64c: 0xac435824  sw          $v1, 0x5824($v0)
    ctx->pc = 0x14e64cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22564), GPR_U32(ctx, 3));
label_14e650:
    // 0x14e650: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e654: 0x32030070  andi        $v1, $s0, 0x70
    ctx->pc = 0x14e654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)112);
    // 0x14e658: 0x8c465824  lw          $a2, 0x5824($v0)
    ctx->pc = 0x14e658u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22564)));
    // 0x14e65c: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x14e65cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x14e660: 0x32030003  andi        $v1, $s0, 0x3
    ctx->pc = 0x14e660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x14e664: 0x322c0  sll         $a0, $v1, 11
    ctx->pc = 0x14e664u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x14e668: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e66c: 0x8c435814  lw          $v1, 0x5814($v0)
    ctx->pc = 0x14e66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22548)));
    // 0x14e670: 0xc51025  or          $v0, $a2, $a1
    ctx->pc = 0x14e670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x14e674: 0x448025  or          $s0, $v0, $a0
    ctx->pc = 0x14e674u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x14e678: 0x306200fc  andi        $v0, $v1, 0xFC
    ctx->pc = 0x14e678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)252);
    // 0x14e67c: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x14E67Cu;
    {
        const bool branch_taken_0x14e67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e67c) {
            ctx->pc = 0x14E7C0u;
            goto label_14e7c0;
        }
    }
    ctx->pc = 0x14E684u;
    // 0x14e684: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x14e684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14e688: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x14e688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x14e68c: 0x50620027  beql        $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x14E68Cu;
    {
        const bool branch_taken_0x14e68c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e68c) {
            ctx->pc = 0x14E690u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14E68Cu;
            // 0x14e690: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14E72Cu;
            goto label_14e72c;
        }
    }
    ctx->pc = 0x14E694u;
    // 0x14e694: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x14e694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14e698: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x14E698u;
    {
        const bool branch_taken_0x14e698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e698) {
            ctx->pc = 0x14E718u;
            goto label_14e718;
        }
    }
    ctx->pc = 0x14E6A0u;
    // 0x14e6a0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x14e6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14e6a4: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E6A4u;
    {
        const bool branch_taken_0x14e6a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e6a4) {
            ctx->pc = 0x14E6A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14E6A4u;
            // 0x14e6a8: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14E6B4u;
            goto label_14e6b4;
        }
    }
    ctx->pc = 0x14E6ACu;
    // 0x14e6ac: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x14E6ACu;
    {
        const bool branch_taken_0x14e6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E6ACu;
            // 0x14e6b0: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e6ac) {
            ctx->pc = 0x14E7ACu;
            goto label_14e7ac;
        }
    }
    ctx->pc = 0x14E6B4u;
label_14e6b4:
    // 0x14e6b4: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x14e6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x14e6b8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x14E6B8u;
    {
        const bool branch_taken_0x14e6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e6b8) {
            ctx->pc = 0x14E6BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14E6B8u;
            // 0x14e6bc: 0x101a02  srl         $v1, $s0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14E6E8u;
            goto label_14e6e8;
        }
    }
    ctx->pc = 0x14E6C0u;
    // 0x14e6c0: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x14e6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x14e6c4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x14e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x14e6c8: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x14e6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x14e6cc: 0x244242e0  addiu       $v0, $v0, 0x42E0
    ctx->pc = 0x14e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17120));
    // 0x14e6d0: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x14e6d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x14e6d4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x14e6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x14e6d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14e6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14e6dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14e6e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14E6E0u;
    {
        const bool branch_taken_0x14e6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E6E0u;
            // 0x14e6e4: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e6e0) {
            ctx->pc = 0x14E6FCu;
            goto label_14e6fc;
        }
    }
    ctx->pc = 0x14E6E8u;
label_14e6e8:
    // 0x14e6e8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x14e6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x14e6ec: 0x24423660  addiu       $v0, $v0, 0x3660
    ctx->pc = 0x14e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13920));
    // 0x14e6f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14e6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14e6f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14e6f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14e6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14e6fc:
    // 0x14e6fc: 0x3202007f  andi        $v0, $s0, 0x7F
    ctx->pc = 0x14e6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)127);
    // 0x14e700: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14e700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14e704: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14e704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14e708: 0xc052da0  jal         func_14B680
    ctx->pc = 0x14E708u;
    SET_GPR_U32(ctx, 31, 0x14E710u);
    ctx->pc = 0x14E70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E708u;
            // 0x14e70c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B680u;
    if (runtime->hasFunction(0x14B680u)) {
        auto targetFn = runtime->lookupFunction(0x14B680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E710u; }
        if (ctx->pc != 0x14E710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B680_0x14b680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E710u; }
        if (ctx->pc != 0x14E710u) { return; }
    }
    ctx->pc = 0x14E710u;
label_14e710:
    // 0x14e710: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x14E710u;
    {
        const bool branch_taken_0x14e710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e710) {
            ctx->pc = 0x14E7A8u;
            goto label_14e7a8;
        }
    }
    ctx->pc = 0x14E718u;
label_14e718:
    // 0x14e718: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e71c: 0xc052da0  jal         func_14B680
    ctx->pc = 0x14E71Cu;
    SET_GPR_U32(ctx, 31, 0x14E724u);
    ctx->pc = 0x14E720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E71Cu;
            // 0x14e720: 0x8c445774  lw          $a0, 0x5774($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22388)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B680u;
    if (runtime->hasFunction(0x14B680u)) {
        auto targetFn = runtime->lookupFunction(0x14B680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E724u; }
        if (ctx->pc != 0x14E724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B680_0x14b680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E724u; }
        if (ctx->pc != 0x14E724u) { return; }
    }
    ctx->pc = 0x14E724u;
label_14e724:
    // 0x14e724: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x14E724u;
    {
        const bool branch_taken_0x14e724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e724) {
            ctx->pc = 0x14E7A8u;
            goto label_14e7a8;
        }
    }
    ctx->pc = 0x14E72Cu;
label_14e72c:
    // 0x14e72c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x14e72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x14e730: 0x30630070  andi        $v1, $v1, 0x70
    ctx->pc = 0x14e730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)112);
    // 0x14e734: 0x50620017  beql        $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x14E734u;
    {
        const bool branch_taken_0x14e734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e734) {
            ctx->pc = 0x14E738u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14E734u;
            // 0x14e738: 0xc78f8364  lwc1        $f15, -0x7C9C($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x14E794u;
            goto label_14e794;
        }
    }
    ctx->pc = 0x14E73Cu;
    // 0x14e73c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x14e73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14e740: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14E740u;
    {
        const bool branch_taken_0x14e740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e740) {
            ctx->pc = 0x14E744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14E740u;
            // 0x14e744: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14E778u;
            goto label_14e778;
        }
    }
    ctx->pc = 0x14E748u;
    // 0x14e748: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x14e748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x14e74c: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E74Cu;
    {
        const bool branch_taken_0x14e74c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14e74c) {
            ctx->pc = 0x14E750u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14E74Cu;
            // 0x14e750: 0xc78f8364  lwc1        $f15, -0x7C9C($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x14E75Cu;
            goto label_14e75c;
        }
    }
    ctx->pc = 0x14E754u;
    // 0x14e754: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14E754u;
    {
        const bool branch_taken_0x14e754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e754) {
            ctx->pc = 0x14E7A8u;
            goto label_14e7a8;
        }
    }
    ctx->pc = 0x14E75Cu;
label_14e75c:
    // 0x14e75c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14e760: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14e760u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14e764: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x14e764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x14e768: 0xc052d48  jal         func_14B520
    ctx->pc = 0x14E768u;
    SET_GPR_U32(ctx, 31, 0x14E770u);
    ctx->pc = 0x14E76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E768u;
            // 0x14e76c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B520u;
    if (runtime->hasFunction(0x14B520u)) {
        auto targetFn = runtime->lookupFunction(0x14B520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E770u; }
        if (ctx->pc != 0x14E770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B520_0x14b520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E770u; }
        if (ctx->pc != 0x14E770u) { return; }
    }
    ctx->pc = 0x14E770u;
label_14e770:
    // 0x14e770: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14E770u;
    {
        const bool branch_taken_0x14e770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e770) {
            ctx->pc = 0x14E7A8u;
            goto label_14e7a8;
        }
    }
    ctx->pc = 0x14E778u;
label_14e778:
    // 0x14e778: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14e778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14e77c: 0xc78f8364  lwc1        $f15, -0x7C9C($gp)
    ctx->pc = 0x14e77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x14e780: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x14e780u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x14e784: 0xc052d48  jal         func_14B520
    ctx->pc = 0x14E784u;
    SET_GPR_U32(ctx, 31, 0x14E78Cu);
    ctx->pc = 0x14E788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E784u;
            // 0x14e788: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B520u;
    if (runtime->hasFunction(0x14B520u)) {
        auto targetFn = runtime->lookupFunction(0x14B520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E78Cu; }
        if (ctx->pc != 0x14E78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B520_0x14b520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E78Cu; }
        if (ctx->pc != 0x14E78Cu) { return; }
    }
    ctx->pc = 0x14E78Cu;
label_14e78c:
    // 0x14e78c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14E78Cu;
    {
        const bool branch_taken_0x14e78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e78c) {
            ctx->pc = 0x14E7A8u;
            goto label_14e7a8;
        }
    }
    ctx->pc = 0x14E794u;
label_14e794:
    // 0x14e794: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14e794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14e798: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x14e798u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x14e79c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x14e79cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14e7a0: 0xc052d48  jal         func_14B520
    ctx->pc = 0x14E7A0u;
    SET_GPR_U32(ctx, 31, 0x14E7A8u);
    ctx->pc = 0x14E7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E7A0u;
            // 0x14e7a4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B520u;
    if (runtime->hasFunction(0x14B520u)) {
        auto targetFn = runtime->lookupFunction(0x14B520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E7A8u; }
        if (ctx->pc != 0x14E7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B520_0x14b520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E7A8u; }
        if (ctx->pc != 0x14E7A8u) { return; }
    }
    ctx->pc = 0x14E7A8u;
label_14e7a8:
    // 0x14e7a8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x14e7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_14e7ac:
    // 0x14e7ac: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x14e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x14e7b0: 0x34631fff  ori         $v1, $v1, 0x1FFF
    ctx->pc = 0x14e7b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8191);
    // 0x14e7b4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x14e7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x14e7b8: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x14e7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x14e7bc: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x14e7bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_14e7c0:
    // 0x14e7c0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e7c4: 0x8c425844  lw          $v0, 0x5844($v0)
    ctx->pc = 0x14e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22596)));
    // 0x14e7c8: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14E7C8u;
    {
        const bool branch_taken_0x14e7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x14e7c8) {
            ctx->pc = 0x14E7E0u;
            goto label_14e7e0;
        }
    }
    ctx->pc = 0x14E7D0u;
    // 0x14e7d0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e7d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e7d8: 0xc04fd58  jal         func_13F560
    ctx->pc = 0x14E7D8u;
    SET_GPR_U32(ctx, 31, 0x14E7E0u);
    ctx->pc = 0x14E7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E7D8u;
            // 0x14e7dc: 0xac505844  sw          $s0, 0x5844($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22596), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F560u;
    if (runtime->hasFunction(0x13F560u)) {
        auto targetFn = runtime->lookupFunction(0x13F560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E7E0u; }
        if (ctx->pc != 0x14E7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F560_0x13f560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E7E0u; }
        if (ctx->pc != 0x14E7E0u) { return; }
    }
    ctx->pc = 0x14E7E0u;
label_14e7e0:
    // 0x14e7e0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14e7e4: 0x8c425814  lw          $v0, 0x5814($v0)
    ctx->pc = 0x14e7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22548)));
    // 0x14e7e8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x14e7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x14e7ec: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x14E7ECu;
    {
        const bool branch_taken_0x14e7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e7ec) {
            ctx->pc = 0x14E7F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14E7ECu;
            // 0x14e7f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14E814u;
            goto label_14e814;
        }
    }
    ctx->pc = 0x14E7F4u;
    // 0x14e7f4: 0xc056b10  jal         func_15AC40
    ctx->pc = 0x14E7F4u;
    SET_GPR_U32(ctx, 31, 0x14E7FCu);
    ctx->pc = 0x15AC40u;
    if (runtime->hasFunction(0x15AC40u)) {
        auto targetFn = runtime->lookupFunction(0x15AC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E7FCu; }
        if (ctx->pc != 0x14E7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC40_0x15ac40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E7FCu; }
        if (ctx->pc != 0x14E7FCu) { return; }
    }
    ctx->pc = 0x14E7FCu;
label_14e7fc:
    // 0x14e7fc: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x14e7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14e800: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x14e800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x14e804: 0xc056b18  jal         func_15AC60
    ctx->pc = 0x14E804u;
    SET_GPR_U32(ctx, 31, 0x14E80Cu);
    ctx->pc = 0x14E808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E804u;
            // 0x14e808: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC60u;
    if (runtime->hasFunction(0x15AC60u)) {
        auto targetFn = runtime->lookupFunction(0x15AC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E80Cu; }
        if (ctx->pc != 0x14E80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC60_0x15ac60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E80Cu; }
        if (ctx->pc != 0x14E80Cu) { return; }
    }
    ctx->pc = 0x14E80Cu;
label_14e80c:
    // 0x14e80c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14E80Cu;
    {
        const bool branch_taken_0x14e80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E80Cu;
            // 0x14e810: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e80c) {
            ctx->pc = 0x14E820u;
            goto label_14e820;
        }
    }
    ctx->pc = 0x14E814u;
label_14e814:
    // 0x14e814: 0xc052e24  jal         func_14B890
    ctx->pc = 0x14E814u;
    SET_GPR_U32(ctx, 31, 0x14E81Cu);
    ctx->pc = 0x14B890u;
    if (runtime->hasFunction(0x14B890u)) {
        auto targetFn = runtime->lookupFunction(0x14B890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E81Cu; }
        if (ctx->pc != 0x14E81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B890_0x14b890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E81Cu; }
        if (ctx->pc != 0x14E81Cu) { return; }
    }
    ctx->pc = 0x14E81Cu;
label_14e81c:
    // 0x14e81c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14e81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_14e820:
    // 0x14e820: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14e820u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e824: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14e824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e828: 0x3e00008  jr          $ra
    ctx->pc = 0x14E828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E828u;
            // 0x14e82c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14E830u;
}
