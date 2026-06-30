#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037E880
// Address: 0x37e880 - 0x37ea10
void sub_0037E880_0x37e880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037E880_0x37e880");
#endif

    switch (ctx->pc) {
        case 0x37e880u: goto label_37e880;
        case 0x37e884u: goto label_37e884;
        case 0x37e888u: goto label_37e888;
        case 0x37e88cu: goto label_37e88c;
        case 0x37e890u: goto label_37e890;
        case 0x37e894u: goto label_37e894;
        case 0x37e898u: goto label_37e898;
        case 0x37e89cu: goto label_37e89c;
        case 0x37e8a0u: goto label_37e8a0;
        case 0x37e8a4u: goto label_37e8a4;
        case 0x37e8a8u: goto label_37e8a8;
        case 0x37e8acu: goto label_37e8ac;
        case 0x37e8b0u: goto label_37e8b0;
        case 0x37e8b4u: goto label_37e8b4;
        case 0x37e8b8u: goto label_37e8b8;
        case 0x37e8bcu: goto label_37e8bc;
        case 0x37e8c0u: goto label_37e8c0;
        case 0x37e8c4u: goto label_37e8c4;
        case 0x37e8c8u: goto label_37e8c8;
        case 0x37e8ccu: goto label_37e8cc;
        case 0x37e8d0u: goto label_37e8d0;
        case 0x37e8d4u: goto label_37e8d4;
        case 0x37e8d8u: goto label_37e8d8;
        case 0x37e8dcu: goto label_37e8dc;
        case 0x37e8e0u: goto label_37e8e0;
        case 0x37e8e4u: goto label_37e8e4;
        case 0x37e8e8u: goto label_37e8e8;
        case 0x37e8ecu: goto label_37e8ec;
        case 0x37e8f0u: goto label_37e8f0;
        case 0x37e8f4u: goto label_37e8f4;
        case 0x37e8f8u: goto label_37e8f8;
        case 0x37e8fcu: goto label_37e8fc;
        case 0x37e900u: goto label_37e900;
        case 0x37e904u: goto label_37e904;
        case 0x37e908u: goto label_37e908;
        case 0x37e90cu: goto label_37e90c;
        case 0x37e910u: goto label_37e910;
        case 0x37e914u: goto label_37e914;
        case 0x37e918u: goto label_37e918;
        case 0x37e91cu: goto label_37e91c;
        case 0x37e920u: goto label_37e920;
        case 0x37e924u: goto label_37e924;
        case 0x37e928u: goto label_37e928;
        case 0x37e92cu: goto label_37e92c;
        case 0x37e930u: goto label_37e930;
        case 0x37e934u: goto label_37e934;
        case 0x37e938u: goto label_37e938;
        case 0x37e93cu: goto label_37e93c;
        case 0x37e940u: goto label_37e940;
        case 0x37e944u: goto label_37e944;
        case 0x37e948u: goto label_37e948;
        case 0x37e94cu: goto label_37e94c;
        case 0x37e950u: goto label_37e950;
        case 0x37e954u: goto label_37e954;
        case 0x37e958u: goto label_37e958;
        case 0x37e95cu: goto label_37e95c;
        case 0x37e960u: goto label_37e960;
        case 0x37e964u: goto label_37e964;
        case 0x37e968u: goto label_37e968;
        case 0x37e96cu: goto label_37e96c;
        case 0x37e970u: goto label_37e970;
        case 0x37e974u: goto label_37e974;
        case 0x37e978u: goto label_37e978;
        case 0x37e97cu: goto label_37e97c;
        case 0x37e980u: goto label_37e980;
        case 0x37e984u: goto label_37e984;
        case 0x37e988u: goto label_37e988;
        case 0x37e98cu: goto label_37e98c;
        case 0x37e990u: goto label_37e990;
        case 0x37e994u: goto label_37e994;
        case 0x37e998u: goto label_37e998;
        case 0x37e99cu: goto label_37e99c;
        case 0x37e9a0u: goto label_37e9a0;
        case 0x37e9a4u: goto label_37e9a4;
        case 0x37e9a8u: goto label_37e9a8;
        case 0x37e9acu: goto label_37e9ac;
        case 0x37e9b0u: goto label_37e9b0;
        case 0x37e9b4u: goto label_37e9b4;
        case 0x37e9b8u: goto label_37e9b8;
        case 0x37e9bcu: goto label_37e9bc;
        case 0x37e9c0u: goto label_37e9c0;
        case 0x37e9c4u: goto label_37e9c4;
        case 0x37e9c8u: goto label_37e9c8;
        case 0x37e9ccu: goto label_37e9cc;
        case 0x37e9d0u: goto label_37e9d0;
        case 0x37e9d4u: goto label_37e9d4;
        case 0x37e9d8u: goto label_37e9d8;
        case 0x37e9dcu: goto label_37e9dc;
        case 0x37e9e0u: goto label_37e9e0;
        case 0x37e9e4u: goto label_37e9e4;
        case 0x37e9e8u: goto label_37e9e8;
        case 0x37e9ecu: goto label_37e9ec;
        case 0x37e9f0u: goto label_37e9f0;
        case 0x37e9f4u: goto label_37e9f4;
        case 0x37e9f8u: goto label_37e9f8;
        case 0x37e9fcu: goto label_37e9fc;
        case 0x37ea00u: goto label_37ea00;
        case 0x37ea04u: goto label_37ea04;
        case 0x37ea08u: goto label_37ea08;
        case 0x37ea0cu: goto label_37ea0c;
        default: break;
    }

    ctx->pc = 0x37e880u;

label_37e880:
    // 0x37e880: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x37e880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_37e884:
    // 0x37e884: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x37e884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_37e888:
    // 0x37e888: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x37e888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_37e88c:
    // 0x37e88c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37e88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37e890:
    // 0x37e890: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x37e890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_37e894:
    // 0x37e894: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37e894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_37e898:
    // 0x37e898: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37e898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_37e89c:
    // 0x37e89c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37e89cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37e8a0:
    // 0x37e8a0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x37e8a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_37e8a4:
    // 0x37e8a4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x37e8a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_37e8a8:
    // 0x37e8a8: 0x8c8300d8  lw          $v1, 0xD8($a0)
    ctx->pc = 0x37e8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
label_37e8ac:
    // 0x37e8ac: 0x8c5089e0  lw          $s0, -0x7620($v0)
    ctx->pc = 0x37e8acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_37e8b0:
    // 0x37e8b0: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x37e8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_37e8b4:
    // 0x37e8b4: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x37e8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
label_37e8b8:
    // 0x37e8b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37e8b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e8bc:
    // 0x37e8bc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37e8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37e8c0:
    // 0x37e8c0: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x37e8c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_37e8c4:
    // 0x37e8c4: 0x2483ffd3  addiu       $v1, $a0, -0x2D
    ctx->pc = 0x37e8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967251));
label_37e8c8:
    // 0x37e8c8: 0x8c4460a8  lw          $a0, 0x60A8($v0)
    ctx->pc = 0x37e8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24744)));
label_37e8cc:
    // 0x37e8cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37e8ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e8d0:
    // 0x37e8d0: 0xc0506ac  jal         func_141AB0
label_37e8d4:
    if (ctx->pc == 0x37E8D4u) {
        ctx->pc = 0x37E8D4u;
            // 0x37e8d4: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x37E8D8u;
        goto label_37e8d8;
    }
    ctx->pc = 0x37E8D0u;
    SET_GPR_U32(ctx, 31, 0x37E8D8u);
    ctx->pc = 0x37E8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37E8D0u;
            // 0x37e8d4: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E8D8u; }
        if (ctx->pc != 0x37E8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E8D8u; }
        if (ctx->pc != 0x37E8D8u) { return; }
    }
    ctx->pc = 0x37E8D8u;
label_37e8d8:
    // 0x37e8d8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x37e8d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_37e8dc:
    // 0x37e8dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37e8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37e8e0:
    // 0x37e8e0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x37e8e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_37e8e4:
    // 0x37e8e4: 0x320f809  jalr        $t9
label_37e8e8:
    if (ctx->pc == 0x37E8E8u) {
        ctx->pc = 0x37E8E8u;
            // 0x37e8e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x37E8ECu;
        goto label_37e8ec;
    }
    ctx->pc = 0x37E8E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37E8ECu);
        ctx->pc = 0x37E8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37E8E4u;
            // 0x37e8e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37E8ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37E8ECu; }
            if (ctx->pc != 0x37E8ECu) { return; }
        }
        }
    }
    ctx->pc = 0x37E8ECu;
label_37e8ec:
    // 0x37e8ec: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x37e8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_37e8f0:
    // 0x37e8f0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x37e8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_37e8f4:
    // 0x37e8f4: 0x24a55750  addiu       $a1, $a1, 0x5750
    ctx->pc = 0x37e8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22352));
label_37e8f8:
    // 0x37e8f8: 0x84445730  lh          $a0, 0x5730($v0)
    ctx->pc = 0x37e8f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22320)));
label_37e8fc:
    // 0x37e8fc: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x37e8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37e900:
    // 0x37e900: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x37e900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_37e904:
    // 0x37e904: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x37e904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37e908:
    // 0x37e908: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37e908u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37e90c:
    // 0x37e90c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x37e90cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_37e910:
    // 0x37e910: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x37e910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_37e914:
    // 0x37e914: 0x4600a3c0  add.s       $f15, $f20, $f0
    ctx->pc = 0x37e914u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_37e918:
    // 0x37e918: 0x84485732  lh          $t0, 0x5732($v0)
    ctx->pc = 0x37e918u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22322)));
label_37e91c:
    // 0x37e91c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x37e91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37e920:
    // 0x37e920: 0x3c0223ff  lui         $v0, 0x23FF
    ctx->pc = 0x37e920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
label_37e924:
    // 0x37e924: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x37e924u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e928:
    // 0x37e928: 0x344623ff  ori         $a2, $v0, 0x23FF
    ctx->pc = 0x37e928u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9215);
label_37e92c:
    // 0x37e92c: 0x46801420  cvt.s.w     $f16, $f2
    ctx->pc = 0x37e92cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_37e930:
    // 0x37e930: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x37e930u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_37e934:
    // 0x37e934: 0x4601ab80  add.s       $f14, $f21, $f1
    ctx->pc = 0x37e934u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_37e938:
    // 0x37e938: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x37e938u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_37e93c:
    // 0x37e93c: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x37e93cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_37e940:
    // 0x37e940: 0xc0bc284  jal         func_2F0A10
label_37e944:
    if (ctx->pc == 0x37E944u) {
        ctx->pc = 0x37E944u;
            // 0x37e944: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x37E948u;
        goto label_37e948;
    }
    ctx->pc = 0x37E940u;
    SET_GPR_U32(ctx, 31, 0x37E948u);
    ctx->pc = 0x37E944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37E940u;
            // 0x37e944: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E948u; }
        if (ctx->pc != 0x37E948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E948u; }
        if (ctx->pc != 0x37E948u) { return; }
    }
    ctx->pc = 0x37E948u;
label_37e948:
    // 0x37e948: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x37e948u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_37e94c:
    // 0x37e94c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x37e94cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_37e950:
    // 0x37e950: 0x320f809  jalr        $t9
label_37e954:
    if (ctx->pc == 0x37E954u) {
        ctx->pc = 0x37E954u;
            // 0x37e954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37E958u;
        goto label_37e958;
    }
    ctx->pc = 0x37E950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37E958u);
        ctx->pc = 0x37E954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37E950u;
            // 0x37e954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37E958u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37E958u; }
            if (ctx->pc != 0x37E958u) { return; }
        }
        }
    }
    ctx->pc = 0x37E958u;
label_37e958:
    // 0x37e958: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37e958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37e95c:
    // 0x37e95c: 0x8e3000dc  lw          $s0, 0xDC($s1)
    ctx->pc = 0x37e95cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_37e960:
    // 0x37e960: 0x8c430eac  lw          $v1, 0xEAC($v0)
    ctx->pc = 0x37e960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_37e964:
    // 0x37e964: 0x8c720080  lw          $s2, 0x80($v1)
    ctx->pc = 0x37e964u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
label_37e968:
    // 0x37e968: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x37e968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_37e96c:
    // 0x37e96c: 0xc157054  jal         func_55C150
label_37e970:
    if (ctx->pc == 0x37E970u) {
        ctx->pc = 0x37E970u;
            // 0x37e970: 0x344486a0  ori         $a0, $v0, 0x86A0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34464);
        ctx->pc = 0x37E974u;
        goto label_37e974;
    }
    ctx->pc = 0x37E96Cu;
    SET_GPR_U32(ctx, 31, 0x37E974u);
    ctx->pc = 0x37E970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37E96Cu;
            // 0x37e970: 0x344486a0  ori         $a0, $v0, 0x86A0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34464);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C150u;
    if (runtime->hasFunction(0x55C150u)) {
        auto targetFn = runtime->lookupFunction(0x55C150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E974u; }
        if (ctx->pc != 0x37E974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C150_0x55c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E974u; }
        if (ctx->pc != 0x37E974u) { return; }
    }
    ctx->pc = 0x37E974u;
label_37e974:
    // 0x37e974: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x37e974u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37e978:
    // 0x37e978: 0x3c0223ff  lui         $v0, 0x23FF
    ctx->pc = 0x37e978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9215 << 16));
label_37e97c:
    // 0x37e97c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x37e97cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_37e980:
    // 0x37e980: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x37e980u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
label_37e984:
    // 0x37e984: 0x3c08bf80  lui         $t0, 0xBF80
    ctx->pc = 0x37e984u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49024 << 16));
label_37e988:
    // 0x37e988: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x37e988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_37e98c:
    // 0x37e98c: 0x344623ff  ori         $a2, $v0, 0x23FF
    ctx->pc = 0x37e98cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9215);
label_37e990:
    // 0x37e990: 0x3c0a41c0  lui         $t2, 0x41C0
    ctx->pc = 0x37e990u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16832 << 16));
label_37e994:
    // 0x37e994: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x37e994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_37e998:
    // 0x37e998: 0x346586a0  ori         $a1, $v1, 0x86A0
    ctx->pc = 0x37e998u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34464);
label_37e99c:
    // 0x37e99c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37e99cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37e9a0:
    // 0x37e9a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x37e9a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_37e9a4:
    // 0x37e9a4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37e9a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_37e9a8:
    // 0x37e9a8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x37e9a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_37e9ac:
    // 0x37e9ac: 0x0  nop
    ctx->pc = 0x37e9acu;
    // NOP
label_37e9b0:
    // 0x37e9b0: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x37e9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
label_37e9b4:
    // 0x37e9b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37e9b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e9b8:
    // 0x37e9b8: 0x0  nop
    ctx->pc = 0x37e9b8u;
    // NOP
label_37e9bc:
    // 0x37e9bc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x37e9bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_37e9c0:
    // 0x37e9c0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x37e9c0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e9c4:
    // 0x37e9c4: 0x0  nop
    ctx->pc = 0x37e9c4u;
    // NOP
label_37e9c8:
    // 0x37e9c8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37e9c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_37e9cc:
    // 0x37e9cc: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x37e9ccu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37e9d0:
    // 0x37e9d0: 0x44897000  mtc1        $t1, $f14
    ctx->pc = 0x37e9d0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_37e9d4:
    // 0x37e9d4: 0x44887800  mtc1        $t0, $f15
    ctx->pc = 0x37e9d4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_37e9d8:
    // 0x37e9d8: 0xc15706c  jal         func_55C1B0
label_37e9dc:
    if (ctx->pc == 0x37E9DCu) {
        ctx->pc = 0x37E9DCu;
            // 0x37e9dc: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x37E9E0u;
        goto label_37e9e0;
    }
    ctx->pc = 0x37E9D8u;
    SET_GPR_U32(ctx, 31, 0x37E9E0u);
    ctx->pc = 0x37E9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37E9D8u;
            // 0x37e9dc: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C1B0u;
    if (runtime->hasFunction(0x55C1B0u)) {
        auto targetFn = runtime->lookupFunction(0x55C1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E9E0u; }
        if (ctx->pc != 0x37E9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C1B0_0x55c1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E9E0u; }
        if (ctx->pc != 0x37E9E0u) { return; }
    }
    ctx->pc = 0x37E9E0u;
label_37e9e0:
    // 0x37e9e0: 0xc0df888  jal         func_37E220
label_37e9e4:
    if (ctx->pc == 0x37E9E4u) {
        ctx->pc = 0x37E9E4u;
            // 0x37e9e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37E9E8u;
        goto label_37e9e8;
    }
    ctx->pc = 0x37E9E0u;
    SET_GPR_U32(ctx, 31, 0x37E9E8u);
    ctx->pc = 0x37E9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37E9E0u;
            // 0x37e9e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37E220u;
    if (runtime->hasFunction(0x37E220u)) {
        auto targetFn = runtime->lookupFunction(0x37E220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E9E8u; }
        if (ctx->pc != 0x37E9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037E220_0x37e220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37E9E8u; }
        if (ctx->pc != 0x37E9E8u) { return; }
    }
    ctx->pc = 0x37E9E8u;
label_37e9e8:
    // 0x37e9e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x37e9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_37e9ec:
    // 0x37e9ec: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x37e9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_37e9f0:
    // 0x37e9f0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x37e9f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37e9f4:
    // 0x37e9f4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x37e9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_37e9f8:
    // 0x37e9f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37e9f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37e9fc:
    // 0x37e9fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37e9fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37ea00:
    // 0x37ea00: 0x3e00008  jr          $ra
label_37ea04:
    if (ctx->pc == 0x37EA04u) {
        ctx->pc = 0x37EA04u;
            // 0x37ea04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x37EA08u;
        goto label_37ea08;
    }
    ctx->pc = 0x37EA00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37EA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37EA00u;
            // 0x37ea04: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37EA08u;
label_37ea08:
    // 0x37ea08: 0x0  nop
    ctx->pc = 0x37ea08u;
    // NOP
label_37ea0c:
    // 0x37ea0c: 0x0  nop
    ctx->pc = 0x37ea0cu;
    // NOP
}
