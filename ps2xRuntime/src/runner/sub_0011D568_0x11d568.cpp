#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011D568
// Address: 0x11d568 - 0x11d6f8
void sub_0011D568_0x11d568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D568_0x11d568");
#endif

    switch (ctx->pc) {
        case 0x11d5d0u: goto label_11d5d0;
        case 0x11d5d4u: goto label_11d5d4;
        case 0x11d61cu: goto label_11d61c;
        case 0x11d628u: goto label_11d628;
        case 0x11d630u: goto label_11d630;
        default: break;
    }

    ctx->pc = 0x11d568u;

    // 0x11d568: 0x4583f  dsra32      $t3, $a0, 0
    ctx->pc = 0x11d568u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11d56c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11d56cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11d570: 0xb7503  sra         $t6, $t3, 20
    ctx->pc = 0x11d570u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 11), 20));
    // 0x11d574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11d574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11d578: 0x31ce07ff  andi        $t6, $t6, 0x7FF
    ctx->pc = 0x11d578u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)2047);
    // 0x11d57c: 0x4503c  dsll32      $t2, $a0, 0
    ctx->pc = 0x11d57cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11d580: 0x25cdfc01  addiu       $t5, $t6, -0x3FF
    ctx->pc = 0x11d580u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), 4294966273));
    // 0x11d584: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x11d584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d588: 0x29af0014  slti        $t7, $t5, 0x14
    ctx->pc = 0x11d588u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x11d58c: 0x11e00036  beqz        $t7, . + 4 + (0x36 << 2)
    ctx->pc = 0x11D58Cu;
    {
        const bool branch_taken_0x11d58c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D58Cu;
            // 0x11d590: 0xa503f  dsra32      $t2, $t2, 0 (Delay Slot)
        SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d58c) {
            ctx->pc = 0x11D668u;
            goto label_11d668;
        }
    }
    ctx->pc = 0x11D594u;
    // 0x11d594: 0x5a10011  bgez        $t5, . + 4 + (0x11 << 2)
    ctx->pc = 0x11D594u;
    {
        const bool branch_taken_0x11d594 = (GPR_S32(ctx, 13) >= 0);
        ctx->pc = 0x11D598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D594u;
            // 0x11d598: 0x3c0e000f  lui         $t6, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d594) {
            ctx->pc = 0x11D5DCu;
            goto label_11d5dc;
        }
    }
    ctx->pc = 0x11D59Cu;
    // 0x11d59c: 0x3c0f8000  lui         $t7, 0x8000
    ctx->pc = 0x11d59cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32768 << 16));
    // 0x11d5a0: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x11d5a0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x11d5a4: 0x16f7824  and         $t7, $t3, $t7
    ctx->pc = 0x11d5a4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) & GPR_U64(ctx, 15));
    // 0x11d5a8: 0xc603e  dsrl32      $t4, $t4, 0
    ctx->pc = 0x11d5a8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 0));
    // 0x11d5ac: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x11d5acu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x11d5b0: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x11d5b0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11d5b4: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x11d5b4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x11d5b8: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x11d5b8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x11d5bc: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x11d5bcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x11d5c0: 0x18f6025  or          $t4, $t4, $t7
    ctx->pc = 0x11d5c0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 15));
    // 0x11d5c4: 0x18e6024  and         $t4, $t4, $t6
    ctx->pc = 0x11d5c4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 14));
    // 0x11d5c8: 0xfcac0000  sd          $t4, 0x0($a1)
    ctx->pc = 0x11d5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 12));
    // 0x11d5cc: 0x0  nop
    ctx->pc = 0x11d5ccu;
    // NOP
label_11d5d0:
    // 0x11d5d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11d5d4:
    // 0x11d5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x11D5D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D5D4u;
            // 0x11d5d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11D5DCu;
label_11d5dc:
    // 0x11d5dc: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11d5dcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11d5e0: 0x1ae6007  srav        $t4, $t6, $t5
    ctx->pc = 0x11d5e0u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 14), GPR_U32(ctx, 13) & 0x1F));
    // 0x11d5e4: 0x16c7824  and         $t7, $t3, $t4
    ctx->pc = 0x11d5e4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) & GPR_U64(ctx, 12));
    // 0x11d5e8: 0x1ea7825  or          $t7, $t7, $t2
    ctx->pc = 0x11d5e8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 10));
    // 0x11d5ec: 0x11e00010  beqz        $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x11D5ECu;
    {
        const bool branch_taken_0x11d5ec = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D5ECu;
            // 0x11d5f0: 0xc7827  nor         $t7, $zero, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d5ec) {
            ctx->pc = 0x11D630u;
            goto label_11d630;
        }
    }
    ctx->pc = 0x11D5F4u;
    // 0x11d5f4: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x11d5f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x11d5f8: 0x16f7824  and         $t7, $t3, $t7
    ctx->pc = 0x11d5f8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) & GPR_U64(ctx, 15));
    // 0x11d5fc: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x11d5fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x11d600: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x11d600u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x11d604: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x11d604u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11d608: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x11d608u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x11d60c: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x11d60cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x11d610: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x11d610u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x11d614: 0x12f4825  or          $t1, $t1, $t7
    ctx->pc = 0x11d614u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 15));
    // 0x11d618: 0x12e4824  and         $t1, $t1, $t6
    ctx->pc = 0x11d618u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 14));
label_11d61c:
    // 0x11d61c: 0xfca90000  sd          $t1, 0x0($a1)
    ctx->pc = 0x11d61cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 9));
    // 0x11d620: 0xc049622  jal         func_125888
    ctx->pc = 0x11D620u;
    SET_GPR_U32(ctx, 31, 0x11D628u);
    ctx->pc = 0x11D624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D620u;
            // 0x11d624: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D628u; }
        if (ctx->pc != 0x11D628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D628u; }
        if (ctx->pc != 0x11D628u) { return; }
    }
    ctx->pc = 0x11D628u;
label_11d628:
    // 0x11d628: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x11D628u;
    {
        const bool branch_taken_0x11d628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D628u;
            // 0x11d62c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d628) {
            ctx->pc = 0x11D5D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d5d4;
        }
    }
    ctx->pc = 0x11D630u;
label_11d630:
    // 0x11d630: 0x2783f  dsra32      $t7, $v0, 0
    ctx->pc = 0x11d630u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11d634: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x11d634u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x11d638: 0x3c0e8000  lui         $t6, 0x8000
    ctx->pc = 0x11d638u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32768 << 16));
    // 0x11d63c: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x11d63cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x11d640: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x11d640u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x11d644: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x11d644u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x11d648: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x11d648u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x11d64c: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x11d64cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11d650: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x11d650u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x11d654: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x11d654u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x11d658: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x11d658u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x11d65c: 0x12f4825  or          $t1, $t1, $t7
    ctx->pc = 0x11d65cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 15));
    // 0x11d660: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
    ctx->pc = 0x11D660u;
    {
        const bool branch_taken_0x11d660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D660u;
            // 0x11d664: 0x12e1024  and         $v0, $t1, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d660) {
            ctx->pc = 0x11D5D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d5d0;
        }
    }
    ctx->pc = 0x11D668u;
label_11d668:
    // 0x11d668: 0x29af0034  slti        $t7, $t5, 0x34
    ctx->pc = 0x11d668u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)52) ? 1 : 0);
    // 0x11d66c: 0x15e0000f  bnez        $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x11D66Cu;
    {
        const bool branch_taken_0x11d66c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D66Cu;
            // 0x11d670: 0x25cffbed  addiu       $t7, $t6, -0x413 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 4294966253));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d66c) {
            ctx->pc = 0x11D6ACu;
            goto label_11d6ac;
        }
    }
    ctx->pc = 0x11D674u;
    // 0x11d674: 0x3c0e8000  lui         $t6, 0x8000
    ctx->pc = 0x11d674u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32768 << 16));
    // 0x11d678: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x11d678u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x11d67c: 0x4783f  dsra32      $t7, $a0, 0
    ctx->pc = 0x11d67cu;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11d680: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x11d680u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x11d684: 0x1ee7824  and         $t7, $t7, $t6
    ctx->pc = 0x11d684u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 14));
    // 0x11d688: 0xc603e  dsrl32      $t4, $t4, 0
    ctx->pc = 0x11d688u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 0));
    // 0x11d68c: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x11d68cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x11d690: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x11d690u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11d694: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x11d694u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x11d698: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x11d698u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x11d69c: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x11d69cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x11d6a0: 0x18f6025  or          $t4, $t4, $t7
    ctx->pc = 0x11d6a0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 15));
    // 0x11d6a4: 0x1000ffca  b           . + 4 + (-0x36 << 2)
    ctx->pc = 0x11D6A4u;
    {
        const bool branch_taken_0x11d6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D6A4u;
            // 0x11d6a8: 0x18e1024  and         $v0, $t4, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6a4) {
            ctx->pc = 0x11D5D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d5d0;
        }
    }
    ctx->pc = 0x11D6ACu;
label_11d6ac:
    // 0x11d6ac: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x11d6acu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11d6b0: 0x1ee6006  srlv        $t4, $t6, $t7
    ctx->pc = 0x11d6b0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 14), GPR_U32(ctx, 15) & 0x1F));
    // 0x11d6b4: 0x14c6824  and         $t5, $t2, $t4
    ctx->pc = 0x11d6b4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 10) & GPR_U64(ctx, 12));
    // 0x11d6b8: 0x11a0ffdd  beqz        $t5, . + 4 + (-0x23 << 2)
    ctx->pc = 0x11D6B8u;
    {
        const bool branch_taken_0x11d6b8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D6B8u;
            // 0x11d6bc: 0xb703c  dsll32      $t6, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6b8) {
            ctx->pc = 0x11D630u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d630;
        }
    }
    ctx->pc = 0x11D6C0u;
    // 0x11d6c0: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x11d6c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x11d6c4: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x11d6c4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x11d6c8: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x11d6c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x11d6cc: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x11d6ccu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x11d6d0: 0xc7827  nor         $t7, $zero, $t4
    ctx->pc = 0x11d6d0u;
    SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 12)));
    // 0x11d6d4: 0x12e4825  or          $t1, $t1, $t6
    ctx->pc = 0x11d6d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 14));
    // 0x11d6d8: 0x14f7824  and         $t7, $t2, $t7
    ctx->pc = 0x11d6d8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) & GPR_U64(ctx, 15));
    // 0x11d6dc: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x11d6dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11d6e0: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x11d6e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x11d6e4: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x11d6e4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x11d6e8: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x11d6e8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x11d6ec: 0x12e4824  and         $t1, $t1, $t6
    ctx->pc = 0x11d6ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 14));
    // 0x11d6f0: 0x1000ffca  b           . + 4 + (-0x36 << 2)
    ctx->pc = 0x11D6F0u;
    {
        const bool branch_taken_0x11d6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D6F0u;
            // 0x11d6f4: 0x12f4825  or          $t1, $t1, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d6f0) {
            ctx->pc = 0x11D61Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d61c;
        }
    }
    ctx->pc = 0x11D6F8u;
}
