#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010A5F8
// Address: 0x10a5f8 - 0x10a8b8
void sub_0010A5F8_0x10a5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A5F8_0x10a5f8");
#endif

    switch (ctx->pc) {
        case 0x10a690u: goto label_10a690;
        case 0x10a820u: goto label_10a820;
        case 0x10a82cu: goto label_10a82c;
        case 0x10a858u: goto label_10a858;
        case 0x10a868u: goto label_10a868;
        default: break;
    }

    ctx->pc = 0x10a5f8u;

    // 0x10a5f8: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x10a5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x10a5fc: 0xffb70170  sd          $s7, 0x170($sp)
    ctx->pc = 0x10a5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 23));
    // 0x10a600: 0xffb60160  sd          $s6, 0x160($sp)
    ctx->pc = 0x10a600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 22));
    // 0x10a604: 0xffb50150  sd          $s5, 0x150($sp)
    ctx->pc = 0x10a604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 21));
    // 0x10a608: 0xffb30130  sd          $s3, 0x130($sp)
    ctx->pc = 0x10a608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x10a60c: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x10a60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x10a610: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x10a610u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a614: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x10a614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x10a618: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10a618u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a61c: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x10a61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x10a620: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x10a620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x10a624: 0xffb40140  sd          $s4, 0x140($sp)
    ctx->pc = 0x10a624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x10a628: 0x8e540868  lw          $s4, 0x868($s2)
    ctx->pc = 0x10a628u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
    // 0x10a62c: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x10a62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x10a630: 0x26950010  addiu       $s5, $s4, 0x10
    ctx->pc = 0x10a630u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x10a634: 0x26960018  addiu       $s6, $s4, 0x18
    ctx->pc = 0x10a634u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x10a638: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x10A638u;
    {
        const bool branch_taken_0x10a638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A638u;
            // 0x10a63c: 0x26970020  addiu       $s7, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a638) {
            ctx->pc = 0x10A6C8u;
            goto label_10a6c8;
        }
    }
    ctx->pc = 0x10A640u;
    // 0x10a640: 0xde630018  ld          $v1, 0x18($s3)
    ctx->pc = 0x10a640u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x10a644: 0x4630022  bgezl       $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x10A644u;
    {
        const bool branch_taken_0x10a644 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x10a644) {
            ctx->pc = 0x10A648u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A644u;
            // 0x10a648: 0xfea30000  sd          $v1, 0x0($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A6D0u;
            goto label_10a6d0;
        }
    }
    ctx->pc = 0x10A64Cu;
    // 0x10a64c: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x10a64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x10a650: 0x442001f  bltzl       $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x10A650u;
    {
        const bool branch_taken_0x10a650 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10a650) {
            ctx->pc = 0x10A654u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A650u;
            // 0x10a654: 0xfea30000  sd          $v1, 0x0($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A6D0u;
            goto label_10a6d0;
        }
    }
    ctx->pc = 0x10A658u;
    // 0x10a658: 0xde4500a0  ld          $a1, 0xA0($s2)
    ctx->pc = 0x10a658u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x10a65c: 0x8e50009c  lw          $s0, 0x9C($s2)
    ctx->pc = 0x10a65cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x10a660: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x10a660u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x10a664: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x10a664u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x10a668: 0xde440090  ld          $a0, 0x90($s2)
    ctx->pc = 0x10a668u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x10a66c: 0x30b10001  andi        $s1, $a1, 0x1
    ctx->pc = 0x10a66cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x10a670: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x10a670u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x10a674: 0x2308024  and         $s0, $s1, $s0
    ctx->pc = 0x10a674u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x10a678: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x10a678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x10a67c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x10a67cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x10a680: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x10a680u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x10a684: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x10a684u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x10a688: 0xc048ce6  jal         func_123398
    ctx->pc = 0x10A688u;
    SET_GPR_U32(ctx, 31, 0x10A690u);
    ctx->pc = 0x10A68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A688u;
            // 0x10a68c: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123398u;
    if (runtime->hasFunction(0x123398u)) {
        auto targetFn = runtime->lookupFunction(0x123398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A690u; }
        if (ctx->pc != 0x10A690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123398_0x123398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A690u; }
        if (ctx->pc != 0x10A690u) { return; }
    }
    ctx->pc = 0x10A690u;
label_10a690:
    // 0x10a690: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x10a690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x10a694: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10a694u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10a698: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x10a698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x10a69c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x10a69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x10a6a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10a6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10a6a4: 0xfe830010  sd          $v1, 0x10($s4)
    ctx->pc = 0x10a6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 3));
    // 0x10a6a8: 0xde420090  ld          $v0, 0x90($s2)
    ctx->pc = 0x10a6a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x10a6ac: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x10a6acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x10a6b0: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10A6B0u;
    {
        const bool branch_taken_0x10a6b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A6B0u;
            // 0x10a6b4: 0x8e540868  lw          $s4, 0x868($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6b0) {
            ctx->pc = 0x10A6D0u;
            goto label_10a6d0;
        }
    }
    ctx->pc = 0x10A6B8u;
    // 0x10a6b8: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x10a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x10a6bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10a6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10a6c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10A6C0u;
    {
        const bool branch_taken_0x10a6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A6C0u;
            // 0x10a6c4: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6c0) {
            ctx->pc = 0x10A6D0u;
            goto label_10a6d0;
        }
    }
    ctx->pc = 0x10A6C8u;
label_10a6c8:
    // 0x10a6c8: 0xde630018  ld          $v1, 0x18($s3)
    ctx->pc = 0x10a6c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x10a6cc: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x10a6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
label_10a6d0:
    // 0x10a6d0: 0x8e430108  lw          $v1, 0x108($s2)
    ctx->pc = 0x10a6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x10a6d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10a6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10a6d8: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10A6D8u;
    {
        const bool branch_taken_0x10a6d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10a6d8) {
            ctx->pc = 0x10A6DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A6D8u;
            // 0x10a6dc: 0x8e660040  lw          $a2, 0x40($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A700u;
            goto label_10a700;
        }
    }
    ctx->pc = 0x10A6E0u;
    // 0x10a6e0: 0xde420100  ld          $v0, 0x100($s2)
    ctx->pc = 0x10a6e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x10a6e4: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A6E4u;
    {
        const bool branch_taken_0x10a6e4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10a6e4) {
            ctx->pc = 0x10A6E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A6E4u;
            // 0x10a6e8: 0x8e660040  lw          $a2, 0x40($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A700u;
            goto label_10a700;
        }
    }
    ctx->pc = 0x10A6ECu;
    // 0x10a6ec: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x10a6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x10a6f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10a6f4: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x10a6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
    // 0x10a6f8: 0xfe420100  sd          $v0, 0x100($s2)
    ctx->pc = 0x10a6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 256), GPR_U64(ctx, 2));
    // 0x10a6fc: 0x8e660040  lw          $a2, 0x40($s3)
    ctx->pc = 0x10a6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_10a700:
    // 0x10a700: 0x3c08005d  lui         $t0, 0x5D
    ctx->pc = 0x10a700u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)93 << 16));
    // 0x10a704: 0x8e65003c  lw          $a1, 0x3C($s3)
    ctx->pc = 0x10a704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x10a708: 0x2508e2c0  addiu       $t0, $t0, -0x1D40
    ctx->pc = 0x10a708u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959808));
    // 0x10a70c: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x10a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x10a710: 0x63178  dsll        $a2, $a2, 5
    ctx->pc = 0x10a710u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 5);
    // 0x10a714: 0x8e67002c  lw          $a3, 0x2C($s3)
    ctx->pc = 0x10a714u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x10a718: 0x529b8  dsll        $a1, $a1, 6
    ctx->pc = 0x10a718u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 6);
    // 0x10a71c: 0x8e640038  lw          $a0, 0x38($s3)
    ctx->pc = 0x10a71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x10a720: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x10a720u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x10a724: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x10a724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x10a728: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x10a728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x10a72c: 0xde650020  ld          $a1, 0x20($s3)
    ctx->pc = 0x10a72cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x10a730: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x10a730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x10a734: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x10a734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x10a738: 0x421f8  dsll        $a0, $a0, 7
    ctx->pc = 0x10a738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 7);
    // 0x10a73c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x10a73cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x10a740: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x10a740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x10a744: 0xfec50000  sd          $a1, 0x0($s6)
    ctx->pc = 0x10a744u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 5));
    // 0x10a748: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x10a748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x10a74c: 0xfee20000  sd          $v0, 0x0($s7)
    ctx->pc = 0x10a74cu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 2));
    // 0x10a750: 0x8e4500f4  lw          $a1, 0xF4($s2)
    ctx->pc = 0x10a750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
    // 0x10a754: 0xde820020  ld          $v0, 0x20($s4)
    ctx->pc = 0x10a754u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x10a758: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x10a758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x10a75c: 0x216f8  dsll        $v0, $v0, 27
    ctx->pc = 0x10a75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
    // 0x10a760: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x10a760u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x10a764: 0xae430098  sw          $v1, 0x98($s2)
    ctx->pc = 0x10a764u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
    // 0x10a768: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x10a768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x10a76c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10a76cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10a770: 0x8e63005c  lw          $v1, 0x5C($s3)
    ctx->pc = 0x10a770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x10a774: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x10a774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x10a778: 0x9c440000  lwu         $a0, 0x0($v0)
    ctx->pc = 0x10a778u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a77c: 0xae4300e0  sw          $v1, 0xE0($s2)
    ctx->pc = 0x10a77cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 3));
    // 0x10a780: 0xfe4400a0  sd          $a0, 0xA0($s2)
    ctx->pc = 0x10a780u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 4));
    // 0x10a784: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x10a784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x10a788: 0xae4200e4  sw          $v0, 0xE4($s2)
    ctx->pc = 0x10a788u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 2));
    // 0x10a78c: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x10a78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x10a790: 0xae4300c8  sw          $v1, 0xC8($s2)
    ctx->pc = 0x10a790u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 3));
    // 0x10a794: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x10a794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x10a798: 0xae4200cc  sw          $v0, 0xCC($s2)
    ctx->pc = 0x10a798u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
    // 0x10a79c: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x10a79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x10a7a0: 0xae4300d0  sw          $v1, 0xD0($s2)
    ctx->pc = 0x10a7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 3));
    // 0x10a7a4: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x10a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x10a7a8: 0xae4200d4  sw          $v0, 0xD4($s2)
    ctx->pc = 0x10a7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
    // 0x10a7ac: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x10a7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x10a7b0: 0xae4300d8  sw          $v1, 0xD8($s2)
    ctx->pc = 0x10a7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 3));
    // 0x10a7b4: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x10a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x10a7b8: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x10A7B8u;
    {
        const bool branch_taken_0x10a7b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A7B8u;
            // 0x10a7bc: 0xae4200dc  sw          $v0, 0xDC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a7b8) {
            ctx->pc = 0x10A7E4u;
            goto label_10a7e4;
        }
    }
    ctx->pc = 0x10A7C0u;
    // 0x10a7c0: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x10a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x10a7c4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x10a7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x10a7c8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x10a7c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10a7cc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x10A7CCu;
    {
        const bool branch_taken_0x10a7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A7CCu;
            // 0x10a7d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a7cc) {
            ctx->pc = 0x10A7FCu;
            goto label_10a7fc;
        }
    }
    ctx->pc = 0x10A7D4u;
    // 0x10a7d4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x10a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x10a7d8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x10a7d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10a7dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10A7DCu;
    {
        const bool branch_taken_0x10a7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A7DCu;
            // 0x10a7e0: 0x38500001  xori        $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a7dc) {
            ctx->pc = 0x10A7FCu;
            goto label_10a7fc;
        }
    }
    ctx->pc = 0x10A7E4u;
label_10a7e4:
    // 0x10a7e4: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x10a7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x10a7e8: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x10a7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x10a7ec: 0x8e4200f8  lw          $v0, 0xF8($s2)
    ctx->pc = 0x10a7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x10a7f0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x10a7f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10a7f4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x10a7f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10a7f8: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x10a7f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10a7fc:
    // 0x10a7fc: 0x5600000e  bnel        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x10A7FCu;
    {
        const bool branch_taken_0x10a7fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a7fc) {
            ctx->pc = 0x10A800u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A7FCu;
            // 0x10a800: 0x8e630028  lw          $v1, 0x28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A838u;
            goto label_10a838;
        }
    }
    ctx->pc = 0x10A804u;
    // 0x10a804: 0x3c060063  lui         $a2, 0x63
    ctx->pc = 0x10a804u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)99 << 16));
    // 0x10a808: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x10a808u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x10a80c: 0x8e680008  lw          $t0, 0x8($s3)
    ctx->pc = 0x10a80cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x10a810: 0x24c6eb38  addiu       $a2, $a2, -0x14C8
    ctx->pc = 0x10a810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961976));
    // 0x10a814: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10a814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a818: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x10A818u;
    SET_GPR_U32(ctx, 31, 0x10A820u);
    ctx->pc = 0x10A81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A818u;
            // 0x10a81c: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A820u; }
        if (ctx->pc != 0x10A820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A820u; }
        if (ctx->pc != 0x10A820u) { return; }
    }
    ctx->pc = 0x10A820u;
label_10a820:
    // 0x10a820: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10a820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a824: 0xc042e16  jal         func_10B858
    ctx->pc = 0x10A824u;
    SET_GPR_U32(ctx, 31, 0x10A82Cu);
    ctx->pc = 0x10A828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A824u;
            // 0x10a828: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B858u;
    if (runtime->hasFunction(0x10B858u)) {
        auto targetFn = runtime->lookupFunction(0x10B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A82Cu; }
        if (ctx->pc != 0x10A82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B858_0x10b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A82Cu; }
        if (ctx->pc != 0x10A82Cu) { return; }
    }
    ctx->pc = 0x10A82Cu;
label_10a82c:
    // 0x10a82c: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x10A82Cu;
    {
        const bool branch_taken_0x10a82c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A82Cu;
            // 0x10a830: 0xdfbf0180  ld          $ra, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a82c) {
            ctx->pc = 0x10A890u;
            goto label_10a890;
        }
    }
    ctx->pc = 0x10A834u;
    // 0x10a834: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x10a834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_10a838:
    // 0x10a838: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a83c: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x10A83Cu;
    {
        const bool branch_taken_0x10a83c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10A840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A83Cu;
            // 0x10a840: 0xdfbf0180  ld          $ra, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a83c) {
            ctx->pc = 0x10A890u;
            goto label_10a890;
        }
    }
    ctx->pc = 0x10A844u;
    // 0x10a844: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x10a844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x10a848: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10A848u;
    {
        const bool branch_taken_0x10a848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A848u;
            // 0x10a84c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a848) {
            ctx->pc = 0x10A860u;
            goto label_10a860;
        }
    }
    ctx->pc = 0x10A850u;
    // 0x10a850: 0xc042bfa  jal         func_10AFE8
    ctx->pc = 0x10A850u;
    SET_GPR_U32(ctx, 31, 0x10A858u);
    ctx->pc = 0x10A854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A850u;
            // 0x10a854: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AFE8u;
    if (runtime->hasFunction(0x10AFE8u)) {
        auto targetFn = runtime->lookupFunction(0x10AFE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A858u; }
        if (ctx->pc != 0x10A858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010AFE8_0x10afe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A858u; }
        if (ctx->pc != 0x10A858u) { return; }
    }
    ctx->pc = 0x10A858u;
label_10a858:
    // 0x10a858: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10A858u;
    {
        const bool branch_taken_0x10a858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A858u;
            // 0x10a85c: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a858) {
            ctx->pc = 0x10A86Cu;
            goto label_10a86c;
        }
    }
    ctx->pc = 0x10A860u;
label_10a860:
    // 0x10a860: 0xc0428da  jal         func_10A368
    ctx->pc = 0x10A860u;
    SET_GPR_U32(ctx, 31, 0x10A868u);
    ctx->pc = 0x10A864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A860u;
            // 0x10a864: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A368u;
    if (runtime->hasFunction(0x10A368u)) {
        auto targetFn = runtime->lookupFunction(0x10A368u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A868u; }
        if (ctx->pc != 0x10A868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A368_0x10a368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A868u; }
        if (ctx->pc != 0x10A868u) { return; }
    }
    ctx->pc = 0x10A868u;
label_10a868:
    // 0x10a868: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x10a868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_10a86c:
    // 0x10a86c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10a86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10a870: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10A870u;
    {
        const bool branch_taken_0x10a870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x10A874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A870u;
            // 0x10a874: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a870) {
            ctx->pc = 0x10A888u;
            goto label_10a888;
        }
    }
    ctx->pc = 0x10A878u;
    // 0x10a878: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x10a878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
    // 0x10a87c: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x10a87cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x10a880: 0xae4200c0  sw          $v0, 0xC0($s2)
    ctx->pc = 0x10a880u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
    // 0x10a884: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10a888:
    // 0x10a888: 0xae420834  sw          $v0, 0x834($s2)
    ctx->pc = 0x10a888u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2100), GPR_U32(ctx, 2));
    // 0x10a88c: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x10a88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_10a890:
    // 0x10a890: 0xdfb70170  ld          $s7, 0x170($sp)
    ctx->pc = 0x10a890u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x10a894: 0xdfb60160  ld          $s6, 0x160($sp)
    ctx->pc = 0x10a894u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x10a898: 0xdfb50150  ld          $s5, 0x150($sp)
    ctx->pc = 0x10a898u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x10a89c: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x10a89cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x10a8a0: 0xdfb30130  ld          $s3, 0x130($sp)
    ctx->pc = 0x10a8a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x10a8a4: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x10a8a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x10a8a8: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x10a8a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x10a8ac: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x10a8acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x10a8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x10A8B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A8B0u;
            // 0x10a8b4: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10A8B8u;
}
