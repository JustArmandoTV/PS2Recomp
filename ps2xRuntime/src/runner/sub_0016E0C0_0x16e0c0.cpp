#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016E0C0
// Address: 0x16e0c0 - 0x16e3f0
void sub_0016E0C0_0x16e0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E0C0_0x16e0c0");
#endif

    switch (ctx->pc) {
        case 0x16e0fcu: goto label_16e0fc;
        case 0x16e10cu: goto label_16e10c;
        case 0x16e11cu: goto label_16e11c;
        case 0x16e1ecu: goto label_16e1ec;
        case 0x16e204u: goto label_16e204;
        case 0x16e214u: goto label_16e214;
        case 0x16e220u: goto label_16e220;
        case 0x16e228u: goto label_16e228;
        case 0x16e230u: goto label_16e230;
        case 0x16e238u: goto label_16e238;
        case 0x16e244u: goto label_16e244;
        case 0x16e250u: goto label_16e250;
        case 0x16e264u: goto label_16e264;
        case 0x16e278u: goto label_16e278;
        case 0x16e2d8u: goto label_16e2d8;
        case 0x16e2e0u: goto label_16e2e0;
        case 0x16e2e8u: goto label_16e2e8;
        case 0x16e2f0u: goto label_16e2f0;
        case 0x16e2f8u: goto label_16e2f8;
        case 0x16e300u: goto label_16e300;
        case 0x16e308u: goto label_16e308;
        case 0x16e320u: goto label_16e320;
        case 0x16e32cu: goto label_16e32c;
        case 0x16e338u: goto label_16e338;
        default: break;
    }

    ctx->pc = 0x16e0c0u;

    // 0x16e0c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16e0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16e0c4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16e0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16e0c8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x16e0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x16e0cc: 0x3c12005e  lui         $s2, 0x5E
    ctx->pc = 0x16e0ccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)94 << 16));
    // 0x16e0d0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x16e0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x16e0d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16e0d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e0d8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x16e0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x16e0dc: 0x2442aa30  addiu       $v0, $v0, -0x55D0
    ctx->pc = 0x16e0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945328));
    // 0x16e0e0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x16e0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x16e0e4: 0x8e43aa34  lw          $v1, -0x55CC($s2)
    ctx->pc = 0x16e0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945332)));
    // 0x16e0e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x16e0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16e0ec: 0x54600066  bnel        $v1, $zero, . + 4 + (0x66 << 2)
    ctx->pc = 0x16E0ECu;
    {
        const bool branch_taken_0x16e0ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e0ec) {
            ctx->pc = 0x16E0F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16E0ECu;
            // 0x16e0f0: 0x2643aa34  addiu       $v1, $s2, -0x55CC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945332));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16E288u;
            goto label_16e288;
        }
    }
    ctx->pc = 0x16E0F4u;
    // 0x16e0f4: 0xc062274  jal         func_1889D0
    ctx->pc = 0x16E0F4u;
    SET_GPR_U32(ctx, 31, 0x16E0FCu);
    ctx->pc = 0x1889D0u;
    if (runtime->hasFunction(0x1889D0u)) {
        auto targetFn = runtime->lookupFunction(0x1889D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E0FCu; }
        if (ctx->pc != 0x16E0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001889D0_0x1889d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E0FCu; }
        if (ctx->pc != 0x16E0FCu) { return; }
    }
    ctx->pc = 0x16E0FCu;
label_16e0fc:
    // 0x16e0fc: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x16e0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x16e100: 0x2484c7c8  addiu       $a0, $a0, -0x3838
    ctx->pc = 0x16e100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952904));
    // 0x16e104: 0xc0621ac  jal         func_1886B0
    ctx->pc = 0x16E104u;
    SET_GPR_U32(ctx, 31, 0x16E10Cu);
    ctx->pc = 0x16E108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E104u;
            // 0x16e108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1886B0u;
    if (runtime->hasFunction(0x1886B0u)) {
        auto targetFn = runtime->lookupFunction(0x1886B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E10Cu; }
        if (ctx->pc != 0x16E10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001886B0_0x1886b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E10Cu; }
        if (ctx->pc != 0x16E10Cu) { return; }
    }
    ctx->pc = 0x16E10Cu;
label_16e10c:
    // 0x16e10c: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x16e10cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x16e110: 0x2484c850  addiu       $a0, $a0, -0x37B0
    ctx->pc = 0x16e110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953040));
    // 0x16e114: 0xc0621b2  jal         func_1886C8
    ctx->pc = 0x16E114u;
    SET_GPR_U32(ctx, 31, 0x16E11Cu);
    ctx->pc = 0x16E118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E114u;
            // 0x16e118: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1886C8u;
    if (runtime->hasFunction(0x1886C8u)) {
        auto targetFn = runtime->lookupFunction(0x1886C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E11Cu; }
        if (ctx->pc != 0x16E11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001886C8_0x1886c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E11Cu; }
        if (ctx->pc != 0x16E11Cu) { return; }
    }
    ctx->pc = 0x16E11Cu;
label_16e11c:
    // 0x16e11c: 0x56200018  bnel        $s1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x16E11Cu;
    {
        const bool branch_taken_0x16e11c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e11c) {
            ctx->pc = 0x16E120u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16E11Cu;
            // 0x16e120: 0x8e230014  lw          $v1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16E180u;
            goto label_16e180;
        }
    }
    ctx->pc = 0x16E124u;
    // 0x16e124: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x16e124u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x16e128: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x16e128u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x16e12c: 0x2602aa40  addiu       $v0, $s0, -0x55C0
    ctx->pc = 0x16e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945344));
    // 0x16e130: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16e130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e134: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x16e134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16e138: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x16e138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x16e13c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x16e13cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x16e140: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x16e140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x16e144: 0x24080019  addiu       $t0, $zero, 0x19
    ctx->pc = 0x16e144u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x16e148: 0x2409001a  addiu       $t1, $zero, 0x1A
    ctx->pc = 0x16e148u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x16e14c: 0xac4a0014  sw          $t2, 0x14($v0)
    ctx->pc = 0x16e14cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 10));
    // 0x16e150: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x16e150u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x16e154: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x16e154u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x16e158: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x16e158u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x16e15c: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x16e15cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x16e160: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x16e160u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x16e164: 0xac480018  sw          $t0, 0x18($v0)
    ctx->pc = 0x16e164u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 8));
    // 0x16e168: 0xac49001c  sw          $t1, 0x1C($v0)
    ctx->pc = 0x16e168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 9));
    // 0x16e16c: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x16e16cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x16e170: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x16e170u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x16e174: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x16e174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x16e178: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x16E178u;
    {
        const bool branch_taken_0x16e178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E178u;
            // 0x16e17c: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e178) {
            ctx->pc = 0x16E1E4u;
            goto label_16e1e4;
        }
    }
    ctx->pc = 0x16E180u;
label_16e180:
    // 0x16e180: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x16e180u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x16e184: 0x2604aa40  addiu       $a0, $s0, -0x55C0
    ctx->pc = 0x16e184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945344));
    // 0x16e188: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x16e188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x16e18c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x16e18cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x16e190: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x16e190u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x16e194: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x16e194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16e198: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x16e198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x16e19c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x16e19cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x16e1a0: 0xac850028  sw          $a1, 0x28($a0)
    ctx->pc = 0x16e1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
    // 0x16e1a4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x16e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16e1a8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x16e1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x16e1ac: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x16e1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x16e1b0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x16e1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x16e1b4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x16e1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x16e1b8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x16e1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x16e1bc: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x16e1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x16e1c0: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x16e1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x16e1c4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x16e1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x16e1c8: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x16e1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x16e1cc: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x16e1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x16e1d0: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x16e1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x16e1d4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x16e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x16e1d8: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x16e1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x16e1dc: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x16e1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x16e1e0: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x16e1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
label_16e1e4:
    // 0x16e1e4: 0xc043094  jal         func_10C250
    ctx->pc = 0x16E1E4u;
    SET_GPR_U32(ctx, 31, 0x16E1ECu);
    ctx->pc = 0x16E1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E1E4u;
            // 0x16e1e8: 0x3c11005e  lui         $s1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C250u;
    if (runtime->hasFunction(0x10C250u)) {
        auto targetFn = runtime->lookupFunction(0x10C250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E1ECu; }
        if (ctx->pc != 0x16E1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C250_0x10c250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E1ECu; }
        if (ctx->pc != 0x16E1ECu) { return; }
    }
    ctx->pc = 0x16E1ECu;
label_16e1ec:
    // 0x16e1ec: 0x2631aad8  addiu       $s1, $s1, -0x5528
    ctx->pc = 0x16e1ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945496));
    // 0x16e1f0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x16e1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e1f4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x16e1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x16e1f8: 0x2610aa40  addiu       $s0, $s0, -0x55C0
    ctx->pc = 0x16e1f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945344));
    // 0x16e1fc: 0xc043098  jal         func_10C260
    ctx->pc = 0x16E1FCu;
    SET_GPR_U32(ctx, 31, 0x16E204u);
    ctx->pc = 0x16E200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E1FCu;
            // 0x16e200: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C260u;
    if (runtime->hasFunction(0x10C260u)) {
        auto targetFn = runtime->lookupFunction(0x10C260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E204u; }
        if (ctx->pc != 0x16E204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C260_0x10c260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E204u; }
        if (ctx->pc != 0x16E204u) { return; }
    }
    ctx->pc = 0x16E204u;
label_16e204:
    // 0x16e204: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16e204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16e208: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x16e208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16e20c: 0xc05b422  jal         func_16D088
    ctx->pc = 0x16E20Cu;
    SET_GPR_U32(ctx, 31, 0x16E214u);
    ctx->pc = 0x16E210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E20Cu;
            // 0x16e210: 0xac622368  sw          $v0, 0x2368($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 9064), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16D088u;
    if (runtime->hasFunction(0x16D088u)) {
        auto targetFn = runtime->lookupFunction(0x16D088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E214u; }
        if (ctx->pc != 0x16E214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D088_0x16d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E214u; }
        if (ctx->pc != 0x16E214u) { return; }
    }
    ctx->pc = 0x16E214u;
label_16e214:
    // 0x16e214: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x16e214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x16e218: 0xc05b44c  jal         func_16D130
    ctx->pc = 0x16E218u;
    SET_GPR_U32(ctx, 31, 0x16E220u);
    ctx->pc = 0x16E21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E218u;
            // 0x16e21c: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16D130u;
    if (runtime->hasFunction(0x16D130u)) {
        auto targetFn = runtime->lookupFunction(0x16D130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E220u; }
        if (ctx->pc != 0x16E220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D130_0x16d130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E220u; }
        if (ctx->pc != 0x16E220u) { return; }
    }
    ctx->pc = 0x16E220u;
label_16e220:
    // 0x16e220: 0xc05b47a  jal         func_16D1E8
    ctx->pc = 0x16E220u;
    SET_GPR_U32(ctx, 31, 0x16E228u);
    ctx->pc = 0x16D1E8u;
    if (runtime->hasFunction(0x16D1E8u)) {
        auto targetFn = runtime->lookupFunction(0x16D1E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E228u; }
        if (ctx->pc != 0x16E228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D1E8_0x16d1e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E228u; }
        if (ctx->pc != 0x16E228u) { return; }
    }
    ctx->pc = 0x16E228u;
label_16e228:
    // 0x16e228: 0xc05b49c  jal         func_16D270
    ctx->pc = 0x16E228u;
    SET_GPR_U32(ctx, 31, 0x16E230u);
    ctx->pc = 0x16D270u;
    if (runtime->hasFunction(0x16D270u)) {
        auto targetFn = runtime->lookupFunction(0x16D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E230u; }
        if (ctx->pc != 0x16E230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D270_0x16d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E230u; }
        if (ctx->pc != 0x16E230u) { return; }
    }
    ctx->pc = 0x16E230u;
label_16e230:
    // 0x16e230: 0xc05b4be  jal         func_16D2F8
    ctx->pc = 0x16E230u;
    SET_GPR_U32(ctx, 31, 0x16E238u);
    ctx->pc = 0x16D2F8u;
    if (runtime->hasFunction(0x16D2F8u)) {
        auto targetFn = runtime->lookupFunction(0x16D2F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E238u; }
        if (ctx->pc != 0x16E238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D2F8_0x16d2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E238u; }
        if (ctx->pc != 0x16E238u) { return; }
    }
    ctx->pc = 0x16E238u;
label_16e238:
    // 0x16e238: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x16e238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x16e23c: 0xc05b4e4  jal         func_16D390
    ctx->pc = 0x16E23Cu;
    SET_GPR_U32(ctx, 31, 0x16E244u);
    ctx->pc = 0x16E240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E23Cu;
            // 0x16e240: 0x8e05002c  lw          $a1, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16D390u;
    if (runtime->hasFunction(0x16D390u)) {
        auto targetFn = runtime->lookupFunction(0x16D390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E244u; }
        if (ctx->pc != 0x16E244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D390_0x16d390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E244u; }
        if (ctx->pc != 0x16E244u) { return; }
    }
    ctx->pc = 0x16E244u;
label_16e244:
    // 0x16e244: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x16e244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16e248: 0xc04307c  jal         func_10C1F0
    ctx->pc = 0x16E248u;
    SET_GPR_U32(ctx, 31, 0x16E250u);
    ctx->pc = 0x16E24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E248u;
            // 0x16e24c: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C1F0u;
    if (runtime->hasFunction(0x10C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x10C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E250u; }
        if (ctx->pc != 0x16E250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C1F0_0x10c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E250u; }
        if (ctx->pc != 0x16E250u) { return; }
    }
    ctx->pc = 0x16E250u;
label_16e250:
    // 0x16e250: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x16e250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x16e254: 0x24a5c9a8  addiu       $a1, $a1, -0x3658
    ctx->pc = 0x16e254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953384));
    // 0x16e258: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x16e258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16e25c: 0xc062176  jal         func_1885D8
    ctx->pc = 0x16E25Cu;
    SET_GPR_U32(ctx, 31, 0x16E264u);
    ctx->pc = 0x16E260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E25Cu;
            // 0x16e260: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1885D8u;
    if (runtime->hasFunction(0x1885D8u)) {
        auto targetFn = runtime->lookupFunction(0x1885D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E264u; }
        if (ctx->pc != 0x16E264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001885D8_0x1885d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E264u; }
        if (ctx->pc != 0x16E264u) { return; }
    }
    ctx->pc = 0x16E264u;
label_16e264:
    // 0x16e264: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x16e264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x16e268: 0x24a5c9d0  addiu       $a1, $a1, -0x3630
    ctx->pc = 0x16e268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953424));
    // 0x16e26c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x16e26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16e270: 0xc062176  jal         func_1885D8
    ctx->pc = 0x16E270u;
    SET_GPR_U32(ctx, 31, 0x16E278u);
    ctx->pc = 0x16E274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E270u;
            // 0x16e274: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1885D8u;
    if (runtime->hasFunction(0x1885D8u)) {
        auto targetFn = runtime->lookupFunction(0x1885D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E278u; }
        if (ctx->pc != 0x16E278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001885D8_0x1885d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E278u; }
        if (ctx->pc != 0x16E278u) { return; }
    }
    ctx->pc = 0x16E278u;
label_16e278:
    // 0x16e278: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16e278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16e27c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16e27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e280: 0xac62aa38  sw          $v0, -0x55C8($v1)
    ctx->pc = 0x16e280u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294945336), GPR_U32(ctx, 2));
    // 0x16e284: 0x2643aa34  addiu       $v1, $s2, -0x55CC
    ctx->pc = 0x16e284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945332));
label_16e288:
    // 0x16e288: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x16e288u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16e28c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16e28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e290: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x16e290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16e294: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x16e294u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16e298: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16e298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16e29c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x16e29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x16e2a0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x16e2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x16e2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x16E2A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E2A4u;
            // 0x16e2a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E2ACu;
    // 0x16e2ac: 0x0  nop
    ctx->pc = 0x16e2acu;
    // NOP
    // 0x16e2b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e2b4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16e2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16e2b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e2bc: 0x2463aa34  addiu       $v1, $v1, -0x55CC
    ctx->pc = 0x16e2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945332));
    // 0x16e2c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e2c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16e2c8: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x16E2C8u;
    {
        const bool branch_taken_0x16e2c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e2c8) {
            ctx->pc = 0x16E350u;
            goto label_16e350;
        }
    }
    ctx->pc = 0x16E2D0u;
    // 0x16e2d0: 0xc05b58a  jal         func_16D628
    ctx->pc = 0x16E2D0u;
    SET_GPR_U32(ctx, 31, 0x16E2D8u);
    ctx->pc = 0x16D628u;
    if (runtime->hasFunction(0x16D628u)) {
        auto targetFn = runtime->lookupFunction(0x16D628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E2D8u; }
        if (ctx->pc != 0x16E2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D628_0x16d628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E2D8u; }
        if (ctx->pc != 0x16E2D8u) { return; }
    }
    ctx->pc = 0x16E2D8u;
label_16e2d8:
    // 0x16e2d8: 0xc05b5c4  jal         func_16D710
    ctx->pc = 0x16E2D8u;
    SET_GPR_U32(ctx, 31, 0x16E2E0u);
    ctx->pc = 0x16D710u;
    if (runtime->hasFunction(0x16D710u)) {
        auto targetFn = runtime->lookupFunction(0x16D710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E2E0u; }
        if (ctx->pc != 0x16E2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D710_0x16d710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E2E0u; }
        if (ctx->pc != 0x16E2E0u) { return; }
    }
    ctx->pc = 0x16E2E0u;
label_16e2e0:
    // 0x16e2e0: 0xc05b5f8  jal         func_16D7E0
    ctx->pc = 0x16E2E0u;
    SET_GPR_U32(ctx, 31, 0x16E2E8u);
    ctx->pc = 0x16D7E0u;
    if (runtime->hasFunction(0x16D7E0u)) {
        auto targetFn = runtime->lookupFunction(0x16D7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E2E8u; }
        if (ctx->pc != 0x16E2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D7E0_0x16d7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E2E8u; }
        if (ctx->pc != 0x16E2E8u) { return; }
    }
    ctx->pc = 0x16E2E8u;
label_16e2e8:
    // 0x16e2e8: 0xc05b660  jal         func_16D980
    ctx->pc = 0x16E2E8u;
    SET_GPR_U32(ctx, 31, 0x16E2F0u);
    ctx->pc = 0x16D980u;
    if (runtime->hasFunction(0x16D980u)) {
        auto targetFn = runtime->lookupFunction(0x16D980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E2F0u; }
        if (ctx->pc != 0x16E2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D980_0x16d980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E2F0u; }
        if (ctx->pc != 0x16E2F0u) { return; }
    }
    ctx->pc = 0x16E2F0u;
label_16e2f0:
    // 0x16e2f0: 0xc05b62c  jal         func_16D8B0
    ctx->pc = 0x16E2F0u;
    SET_GPR_U32(ctx, 31, 0x16E2F8u);
    ctx->pc = 0x16D8B0u;
    if (runtime->hasFunction(0x16D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x16D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E2F8u; }
        if (ctx->pc != 0x16E2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D8B0_0x16d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E2F8u; }
        if (ctx->pc != 0x16E2F8u) { return; }
    }
    ctx->pc = 0x16E2F8u;
label_16e2f8:
    // 0x16e2f8: 0xc05b6ac  jal         func_16DAB0
    ctx->pc = 0x16E2F8u;
    SET_GPR_U32(ctx, 31, 0x16E300u);
    ctx->pc = 0x16DAB0u;
    if (runtime->hasFunction(0x16DAB0u)) {
        auto targetFn = runtime->lookupFunction(0x16DAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E300u; }
        if (ctx->pc != 0x16E300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016DAB0_0x16dab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E300u; }
        if (ctx->pc != 0x16E300u) { return; }
    }
    ctx->pc = 0x16E300u;
label_16e300:
    // 0x16e300: 0xc05b6e0  jal         func_16DB80
    ctx->pc = 0x16E300u;
    SET_GPR_U32(ctx, 31, 0x16E308u);
    ctx->pc = 0x16DB80u;
    if (runtime->hasFunction(0x16DB80u)) {
        auto targetFn = runtime->lookupFunction(0x16DB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E308u; }
        if (ctx->pc != 0x16E308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016DB80_0x16db80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E308u; }
        if (ctx->pc != 0x16E308u) { return; }
    }
    ctx->pc = 0x16E308u;
label_16e308:
    // 0x16e308: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16e308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16e30c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16e30cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16e310: 0x2442aad8  addiu       $v0, $v0, -0x5528
    ctx->pc = 0x16e310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945496));
    // 0x16e314: 0x8c652368  lw          $a1, 0x2368($v1)
    ctx->pc = 0x16e314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9064)));
    // 0x16e318: 0xc04307c  jal         func_10C1F0
    ctx->pc = 0x16E318u;
    SET_GPR_U32(ctx, 31, 0x16E320u);
    ctx->pc = 0x16E31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E318u;
            // 0x16e31c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C1F0u;
    if (runtime->hasFunction(0x10C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x10C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E320u; }
        if (ctx->pc != 0x16E320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C1F0_0x10c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E320u; }
        if (ctx->pc != 0x16E320u) { return; }
    }
    ctx->pc = 0x16E320u;
label_16e320:
    // 0x16e320: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16e320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e324: 0xc0621ac  jal         func_1886B0
    ctx->pc = 0x16E324u;
    SET_GPR_U32(ctx, 31, 0x16E32Cu);
    ctx->pc = 0x16E328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E324u;
            // 0x16e328: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1886B0u;
    if (runtime->hasFunction(0x1886B0u)) {
        auto targetFn = runtime->lookupFunction(0x1886B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E32Cu; }
        if (ctx->pc != 0x16E32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001886B0_0x1886b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E32Cu; }
        if (ctx->pc != 0x16E32Cu) { return; }
    }
    ctx->pc = 0x16E32Cu;
label_16e32c:
    // 0x16e32c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16e32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e330: 0xc0621b2  jal         func_1886C8
    ctx->pc = 0x16E330u;
    SET_GPR_U32(ctx, 31, 0x16E338u);
    ctx->pc = 0x16E334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E330u;
            // 0x16e334: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1886C8u;
    if (runtime->hasFunction(0x1886C8u)) {
        auto targetFn = runtime->lookupFunction(0x1886C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E338u; }
        if (ctx->pc != 0x16E338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001886C8_0x1886c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E338u; }
        if (ctx->pc != 0x16E338u) { return; }
    }
    ctx->pc = 0x16E338u;
label_16e338:
    // 0x16e338: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16e338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16e33c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e340: 0x0  nop
    ctx->pc = 0x16e340u;
    // NOP
    // 0x16e344: 0x8062284  j           func_188A10
    ctx->pc = 0x16E344u;
    ctx->pc = 0x16E348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E344u;
            // 0x16e348: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188A10u;
    if (runtime->hasFunction(0x188A10u)) {
        auto targetFn = runtime->lookupFunction(0x188A10u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00188A10_0x188a10(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16E34Cu;
    // 0x16e34c: 0x0  nop
    ctx->pc = 0x16e34cu;
    // NOP
label_16e350:
    // 0x16e350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e354: 0x3e00008  jr          $ra
    ctx->pc = 0x16E354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E354u;
            // 0x16e358: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E35Cu;
    // 0x16e35c: 0x0  nop
    ctx->pc = 0x16e35cu;
    // NOP
    // 0x16e360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e364: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x16e364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e368: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e36c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x16e36cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e370: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16e370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e374: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16e374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e37c: 0x8062114  j           func_188450
    ctx->pc = 0x16E37Cu;
    ctx->pc = 0x16E380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E37Cu;
            // 0x16e380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    {
        auto targetFn = runtime->lookupFunction(0x188450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16E384u;
    // 0x16e384: 0x0  nop
    ctx->pc = 0x16e384u;
    // NOP
    // 0x16e388: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e38c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x16e38cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e394: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x16e394u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e398: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x16e398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16e39c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16e39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e3a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e3a4: 0x8062114  j           func_188450
    ctx->pc = 0x16E3A4u;
    ctx->pc = 0x16E3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E3A4u;
            // 0x16e3a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    {
        auto targetFn = runtime->lookupFunction(0x188450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16E3ACu;
    // 0x16e3ac: 0x0  nop
    ctx->pc = 0x16e3acu;
    // NOP
    // 0x16e3b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e3b4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x16e3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16e3b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e3bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e3c0: 0x806218c  j           func_188630
    ctx->pc = 0x16E3C0u;
    ctx->pc = 0x16E3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E3C0u;
            // 0x16e3c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188630u;
    {
        auto targetFn = runtime->lookupFunction(0x188630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16E3C8u;
    // 0x16e3c8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x16e3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x16e3cc: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x16e3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x16e3d0: 0x2442d168  addiu       $v0, $v0, -0x2E98
    ctx->pc = 0x16e3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955368));
    // 0x16e3d4: 0x2463d170  addiu       $v1, $v1, -0x2E90
    ctx->pc = 0x16e3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955376));
    // 0x16e3d8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x16e3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x16e3dc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x16e3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x16e3e0: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x16e3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    // 0x16e3e4: 0x3e00008  jr          $ra
    ctx->pc = 0x16E3E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E3E4u;
            // 0x16e3e8: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E3ECu;
    // 0x16e3ec: 0x0  nop
    ctx->pc = 0x16e3ecu;
    // NOP
}
