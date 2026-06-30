#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048A610
// Address: 0x48a610 - 0x48a840
void sub_0048A610_0x48a610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048A610_0x48a610");
#endif

    switch (ctx->pc) {
        case 0x48a65cu: goto label_48a65c;
        case 0x48a68cu: goto label_48a68c;
        case 0x48a6a8u: goto label_48a6a8;
        case 0x48a6bcu: goto label_48a6bc;
        case 0x48a6fcu: goto label_48a6fc;
        case 0x48a730u: goto label_48a730;
        case 0x48a79cu: goto label_48a79c;
        case 0x48a7a4u: goto label_48a7a4;
        case 0x48a7f8u: goto label_48a7f8;
        case 0x48a80cu: goto label_48a80c;
        case 0x48a828u: goto label_48a828;
        default: break;
    }

    ctx->pc = 0x48a610u;

    // 0x48a610: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x48a610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x48a614: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x48a614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x48a618: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x48a618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x48a61c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x48a61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x48a620: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x48a620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x48a624: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x48a624u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a628: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x48a628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x48a62c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x48a62cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a630: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48a630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x48a634: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x48a634u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a638: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48a638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x48a63c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x48a63cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a640: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48a640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48a644: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x48a644u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48a648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48a64c: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x48a64cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a650: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x48a650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a654: 0xc04e710  jal         func_139C40
    ctx->pc = 0x48A654u;
    SET_GPR_U32(ctx, 31, 0x48A65Cu);
    ctx->pc = 0x48A658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A654u;
            // 0x48a658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C40u;
    if (runtime->hasFunction(0x139C40u)) {
        auto targetFn = runtime->lookupFunction(0x139C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A65Cu; }
        if (ctx->pc != 0x48A65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139C40_0x139c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A65Cu; }
        if (ctx->pc != 0x48A65Cu) { return; }
    }
    ctx->pc = 0x48A65Cu;
label_48a65c:
    // 0x48a65c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48a65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48a660: 0x12c3000c  beq         $s6, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x48A660u;
    {
        const bool branch_taken_0x48a660 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 3));
        if (branch_taken_0x48a660) {
            ctx->pc = 0x48A694u;
            goto label_48a694;
        }
    }
    ctx->pc = 0x48A668u;
    // 0x48a668: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x48A668u;
    {
        const bool branch_taken_0x48a668 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x48a668) {
            ctx->pc = 0x48A678u;
            goto label_48a678;
        }
    }
    ctx->pc = 0x48A670u;
    // 0x48a670: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x48A670u;
    {
        const bool branch_taken_0x48a670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A670u;
            // 0x48a674: 0x8ea60008  lw          $a2, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a670) {
            ctx->pc = 0x48A6B0u;
            goto label_48a6b0;
        }
    }
    ctx->pc = 0x48A678u;
label_48a678:
    // 0x48a678: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x48a678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x48a67c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x48a67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a680: 0x8c647378  lw          $a0, 0x7378($v1)
    ctx->pc = 0x48a680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29560)));
    // 0x48a684: 0xc0fe5a8  jal         func_3F96A0
    ctx->pc = 0x48A684u;
    SET_GPR_U32(ctx, 31, 0x48A68Cu);
    ctx->pc = 0x48A688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A684u;
            // 0x48a688: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96A0u;
    if (runtime->hasFunction(0x3F96A0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A68Cu; }
        if (ctx->pc != 0x48A68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96A0_0x3f96a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A68Cu; }
        if (ctx->pc != 0x48A68Cu) { return; }
    }
    ctx->pc = 0x48A68Cu;
label_48a68c:
    // 0x48a68c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x48A68Cu;
    {
        const bool branch_taken_0x48a68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A68Cu;
            // 0x48a690: 0xaea20008  sw          $v0, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a68c) {
            ctx->pc = 0x48A6ACu;
            goto label_48a6ac;
        }
    }
    ctx->pc = 0x48A694u;
label_48a694:
    // 0x48a694: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x48a694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x48a698: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x48a698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a69c: 0x8c647378  lw          $a0, 0x7378($v1)
    ctx->pc = 0x48a69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29560)));
    // 0x48a6a0: 0xc0fe478  jal         func_3F91E0
    ctx->pc = 0x48A6A0u;
    SET_GPR_U32(ctx, 31, 0x48A6A8u);
    ctx->pc = 0x48A6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A6A0u;
            // 0x48a6a4: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F91E0u;
    if (runtime->hasFunction(0x3F91E0u)) {
        auto targetFn = runtime->lookupFunction(0x3F91E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A6A8u; }
        if (ctx->pc != 0x48A6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F91E0_0x3f91e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A6A8u; }
        if (ctx->pc != 0x48A6A8u) { return; }
    }
    ctx->pc = 0x48A6A8u;
label_48a6a8:
    // 0x48a6a8: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x48a6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
label_48a6ac:
    // 0x48a6ac: 0x8ea60008  lw          $a2, 0x8($s5)
    ctx->pc = 0x48a6acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_48a6b0:
    // 0x48a6b0: 0x26a4000c  addiu       $a0, $s5, 0xC
    ctx->pc = 0x48a6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x48a6b4: 0xc04e718  jal         func_139C60
    ctx->pc = 0x48A6B4u;
    SET_GPR_U32(ctx, 31, 0x48A6BCu);
    ctx->pc = 0x48A6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A6B4u;
            // 0x48a6b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C60u;
    if (runtime->hasFunction(0x139C60u)) {
        auto targetFn = runtime->lookupFunction(0x139C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A6BCu; }
        if (ctx->pc != 0x48A6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139C60_0x139c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A6BCu; }
        if (ctx->pc != 0x48A6BCu) { return; }
    }
    ctx->pc = 0x48A6BCu;
label_48a6bc:
    // 0x48a6bc: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x48A6BCu;
    {
        const bool branch_taken_0x48a6bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x48a6bc) {
            ctx->pc = 0x48A6C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48A6BCu;
            // 0x48a6c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48A6E4u;
            goto label_48a6e4;
        }
    }
    ctx->pc = 0x48A6C4u;
    // 0x48a6c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x48a6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x48a6c8: 0x52020003  beql        $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x48A6C8u;
    {
        const bool branch_taken_0x48a6c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x48a6c8) {
            ctx->pc = 0x48A6CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48A6C8u;
            // 0x48a6cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48A6D8u;
            goto label_48a6d8;
        }
    }
    ctx->pc = 0x48A6D0u;
    // 0x48a6d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x48A6D0u;
    {
        const bool branch_taken_0x48a6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A6D0u;
            // 0x48a6d4: 0x8ea2000c  lw          $v0, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a6d0) {
            ctx->pc = 0x48A6F0u;
            goto label_48a6f0;
        }
    }
    ctx->pc = 0x48A6D8u;
label_48a6d8:
    // 0x48a6d8: 0x24170008  addiu       $s7, $zero, 0x8
    ctx->pc = 0x48a6d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x48a6dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x48A6DCu;
    {
        const bool branch_taken_0x48a6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48A6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A6DCu;
            // 0x48a6e0: 0xa2a20005  sb          $v0, 0x5($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a6dc) {
            ctx->pc = 0x48A6ECu;
            goto label_48a6ec;
        }
    }
    ctx->pc = 0x48A6E4u;
label_48a6e4:
    // 0x48a6e4: 0x24170009  addiu       $s7, $zero, 0x9
    ctx->pc = 0x48a6e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x48a6e8: 0xa2a20005  sb          $v0, 0x5($s5)
    ctx->pc = 0x48a6e8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 5), (uint8_t)GPR_U32(ctx, 2));
label_48a6ec:
    // 0x48a6ec: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x48a6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_48a6f0:
    // 0x48a6f0: 0x36f66000  ori         $s6, $s7, 0x6000
    ctx->pc = 0x48a6f0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)24576);
    // 0x48a6f4: 0x293b818  mult        $s7, $s4, $s3
    ctx->pc = 0x48a6f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
    // 0x48a6f8: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x48a6f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_48a6fc:
    // 0x48a6fc: 0xa6160008  sh          $s6, 0x8($s0)
    ctx->pc = 0x48a6fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 22));
    // 0x48a700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48a700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a704: 0xa614000c  sh          $s4, 0xC($s0)
    ctx->pc = 0x48a704u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 20));
    // 0x48a708: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x48a708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a70c: 0xa613000e  sh          $s3, 0xE($s0)
    ctx->pc = 0x48a70cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 19));
    // 0x48a710: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x48a710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a714: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x48a714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x48a718: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x48a718u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a71c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x48a71cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a720: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x48a720u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a724: 0x34420201  ori         $v0, $v0, 0x201
    ctx->pc = 0x48a724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)513);
    // 0x48a728: 0xc0564a4  jal         func_159290
    ctx->pc = 0x48A728u;
    SET_GPR_U32(ctx, 31, 0x48A730u);
    ctx->pc = 0x48A72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A728u;
            // 0x48a72c: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159290u;
    if (runtime->hasFunction(0x159290u)) {
        auto targetFn = runtime->lookupFunction(0x159290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A730u; }
        if (ctx->pc != 0x48A730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00159290_0x159290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A730u; }
        if (ctx->pc != 0x48A730u) { return; }
    }
    ctx->pc = 0x48A730u;
label_48a730:
    // 0x48a730: 0x82a30005  lb          $v1, 0x5($s5)
    ctx->pc = 0x48a730u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 5)));
    // 0x48a734: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x48a734u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x48a738: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x48a738u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x48a73c: 0x771804  sllv        $v1, $s7, $v1
    ctx->pc = 0x48a73cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), GPR_U32(ctx, 3) & 0x1F));
    // 0x48a740: 0x1620ffee  bnez        $s1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x48A740u;
    {
        const bool branch_taken_0x48a740 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x48A744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A740u;
            // 0x48a744: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48a740) {
            ctx->pc = 0x48A6FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48a6fc;
        }
    }
    ctx->pc = 0x48A748u;
    // 0x48a748: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x48a748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x48a74c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x48a74cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x48a750: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x48a750u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x48a754: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x48a754u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x48a758: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x48a758u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48a75c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48a75cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48a760: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48a760u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48a764: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48a764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48a768: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48a768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48a76c: 0x3e00008  jr          $ra
    ctx->pc = 0x48A76Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48A770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A76Cu;
            // 0x48a770: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48A774u;
    // 0x48a774: 0x0  nop
    ctx->pc = 0x48a774u;
    // NOP
    // 0x48a778: 0x0  nop
    ctx->pc = 0x48a778u;
    // NOP
    // 0x48a77c: 0x0  nop
    ctx->pc = 0x48a77cu;
    // NOP
    // 0x48a780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48a780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48a784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48a784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48a788: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x48a788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x48a78c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48a78cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x48a790: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x48a790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x48a794: 0xc0570cc  jal         func_15C330
    ctx->pc = 0x48A794u;
    SET_GPR_U32(ctx, 31, 0x48A79Cu);
    ctx->pc = 0x48A798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A794u;
            // 0x48a798: 0x8c4400f8  lw          $a0, 0xF8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C330u;
    if (runtime->hasFunction(0x15C330u)) {
        auto targetFn = runtime->lookupFunction(0x15C330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A79Cu; }
        if (ctx->pc != 0x48A79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C330_0x15c330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A79Cu; }
        if (ctx->pc != 0x48A79Cu) { return; }
    }
    ctx->pc = 0x48A79Cu;
label_48a79c:
    // 0x48a79c: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x48A79Cu;
    SET_GPR_U32(ctx, 31, 0x48A7A4u);
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A7A4u; }
        if (ctx->pc != 0x48A7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A7A4u; }
        if (ctx->pc != 0x48A7A4u) { return; }
    }
    ctx->pc = 0x48A7A4u;
label_48a7a4:
    // 0x48a7a4: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x48a7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x48a7a8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x48a7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x48a7ac: 0xfc64ce68  sd          $a0, -0x3198($v1)
    ctx->pc = 0x48a7acu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294954600), GPR_U64(ctx, 4));
    // 0x48a7b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48a7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48a7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x48A7B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48A7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A7B4u;
            // 0x48a7b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48A7BCu;
    // 0x48a7bc: 0x0  nop
    ctx->pc = 0x48a7bcu;
    // NOP
    // 0x48a7c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48a7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48a7c4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x48a7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x48a7c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x48a7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x48a7cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48a7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48a7d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48a7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48a7d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x48a7d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a7d8: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x48a7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x48a7dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x48a7dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a7e0: 0x8c4389e8  lw          $v1, -0x7618($v0)
    ctx->pc = 0x48a7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
    // 0x48a7e4: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x48a7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x48a7e8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x48a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x48a7ec: 0x8c6401a0  lw          $a0, 0x1A0($v1)
    ctx->pc = 0x48a7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 416)));
    // 0x48a7f0: 0xc067c32  jal         func_19F0C8
    ctx->pc = 0x48A7F0u;
    SET_GPR_U32(ctx, 31, 0x48A7F8u);
    ctx->pc = 0x48A7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A7F0u;
            // 0x48a7f4: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F0C8u;
    if (runtime->hasFunction(0x19F0C8u)) {
        auto targetFn = runtime->lookupFunction(0x19F0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A7F8u; }
        if (ctx->pc != 0x48A7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F0C8_0x19f0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A7F8u; }
        if (ctx->pc != 0x48A7F8u) { return; }
    }
    ctx->pc = 0x48A7F8u;
label_48a7f8:
    // 0x48a7f8: 0x8e220100  lw          $v0, 0x100($s1)
    ctx->pc = 0x48a7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x48a7fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x48a7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48a800: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48a800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x48a804: 0xc043178  jal         func_10C5E0
    ctx->pc = 0x48A804u;
    SET_GPR_U32(ctx, 31, 0x48A80Cu);
    ctx->pc = 0x48A808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A804u;
            // 0x48a808: 0xae220100  sw          $v0, 0x100($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C5E0u;
    if (runtime->hasFunction(0x10C5E0u)) {
        auto targetFn = runtime->lookupFunction(0x10C5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A80Cu; }
        if (ctx->pc != 0x48A80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C5E0_0x10c5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A80Cu; }
        if (ctx->pc != 0x48A80Cu) { return; }
    }
    ctx->pc = 0x48A80Cu;
label_48a80c:
    // 0x48a80c: 0x8e220100  lw          $v0, 0x100($s1)
    ctx->pc = 0x48a80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x48a810: 0x8e2600cc  lw          $a2, 0xCC($s1)
    ctx->pc = 0x48a810u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x48a814: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48a814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x48a818: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x48a818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x48a81c: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x48a81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x48a820: 0xc075018  jal         func_1D4060
    ctx->pc = 0x48A820u;
    SET_GPR_U32(ctx, 31, 0x48A828u);
    ctx->pc = 0x48A824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48A820u;
            // 0x48a824: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4060u;
    if (runtime->hasFunction(0x1D4060u)) {
        auto targetFn = runtime->lookupFunction(0x1D4060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A828u; }
        if (ctx->pc != 0x48A828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4060_0x1d4060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48A828u; }
        if (ctx->pc != 0x48A828u) { return; }
    }
    ctx->pc = 0x48A828u;
label_48a828:
    // 0x48a828: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48a828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48a82c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48a82cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48a830: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48a830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48a834: 0x3e00008  jr          $ra
    ctx->pc = 0x48A834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48A838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48A834u;
            // 0x48a838: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48A83Cu;
    // 0x48a83c: 0x0  nop
    ctx->pc = 0x48a83cu;
    // NOP
}
