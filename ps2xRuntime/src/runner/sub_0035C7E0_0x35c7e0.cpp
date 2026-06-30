#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0035C7E0
// Address: 0x35c7e0 - 0x35c8d0
void sub_0035C7E0_0x35c7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C7E0_0x35c7e0");
#endif

    switch (ctx->pc) {
        case 0x35c810u: goto label_35c810;
        case 0x35c858u: goto label_35c858;
        case 0x35c868u: goto label_35c868;
        case 0x35c878u: goto label_35c878;
        case 0x35c884u: goto label_35c884;
        case 0x35c88cu: goto label_35c88c;
        case 0x35c8acu: goto label_35c8ac;
        default: break;
    }

    ctx->pc = 0x35c7e0u;

    // 0x35c7e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x35c7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x35c7e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x35c7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x35c7e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35c7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35c7ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35c7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35c7f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35c7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35c7f4: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x35c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x35c7f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35c7f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c7fc: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x35c7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x35c800: 0xc44d0010  lwc1        $f13, 0x10($v0)
    ctx->pc = 0x35c800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x35c804: 0xc44e0014  lwc1        $f14, 0x14($v0)
    ctx->pc = 0x35c804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x35c808: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x35C808u;
    SET_GPR_U32(ctx, 31, 0x35C810u);
    ctx->pc = 0x35C80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C808u;
            // 0x35c80c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C810u; }
        if (ctx->pc != 0x35C810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C810u; }
        if (ctx->pc != 0x35C810u) { return; }
    }
    ctx->pc = 0x35C810u;
label_35c810:
    // 0x35c810: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x35c810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x35c814: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x35c814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
    // 0x35c818: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x35c818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
    // 0x35c81c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x35c81cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x35c820: 0xc4620020  lwc1        $f2, 0x20($v1)
    ctx->pc = 0x35c820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35c824: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x35c824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35c828: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x35c828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c82c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x35c82cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x35c830: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x35c830u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x35c834: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x35c834u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x35c838: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35c838u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x35c83c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35c83cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x35c840: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35c840u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x35c844: 0x44111000  mfc1        $s1, $f2
    ctx->pc = 0x35c844u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x35c848: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x35c848u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x35c84c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x35c84cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x35c850: 0xc04f29c  jal         func_13CA70
    ctx->pc = 0x35C850u;
    SET_GPR_U32(ctx, 31, 0x35C858u);
    ctx->pc = 0x35C854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C850u;
            // 0x35c854: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CA70u;
    if (runtime->hasFunction(0x13CA70u)) {
        auto targetFn = runtime->lookupFunction(0x13CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C858u; }
        if (ctx->pc != 0x35C858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CA70_0x13ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C858u; }
        if (ctx->pc != 0x35C858u) { return; }
    }
    ctx->pc = 0x35C858u;
label_35c858:
    // 0x35c858: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35c858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c85c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x35c85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35c860: 0xc04cdf0  jal         func_1337C0
    ctx->pc = 0x35C860u;
    SET_GPR_U32(ctx, 31, 0x35C868u);
    ctx->pc = 0x35C864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C860u;
            // 0x35c864: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C868u; }
        if (ctx->pc != 0x35C868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C868u; }
        if (ctx->pc != 0x35C868u) { return; }
    }
    ctx->pc = 0x35C868u;
label_35c868:
    // 0x35c868: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x35c868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c86c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x35c86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x35c870: 0xc04cdd0  jal         func_133740
    ctx->pc = 0x35C870u;
    SET_GPR_U32(ctx, 31, 0x35C878u);
    ctx->pc = 0x35C874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C870u;
            // 0x35c874: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (runtime->hasFunction(0x133740u)) {
        auto targetFn = runtime->lookupFunction(0x133740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C878u; }
        if (ctx->pc != 0x35C878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133740_0x133740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C878u; }
        if (ctx->pc != 0x35C878u) { return; }
    }
    ctx->pc = 0x35C878u;
label_35c878:
    // 0x35c878: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x35c878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x35c87c: 0xc04c994  jal         func_132650
    ctx->pc = 0x35C87Cu;
    SET_GPR_U32(ctx, 31, 0x35C884u);
    ctx->pc = 0x35C880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C87Cu;
            // 0x35c880: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C884u; }
        if (ctx->pc != 0x35C884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C884u; }
        if (ctx->pc != 0x35C884u) { return; }
    }
    ctx->pc = 0x35C884u;
label_35c884:
    // 0x35c884: 0xc0d7184  jal         func_35C610
    ctx->pc = 0x35C884u;
    SET_GPR_U32(ctx, 31, 0x35C88Cu);
    ctx->pc = 0x35C888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C884u;
            // 0x35c888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35C610u;
    if (runtime->hasFunction(0x35C610u)) {
        auto targetFn = runtime->lookupFunction(0x35C610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C88Cu; }
        if (ctx->pc != 0x35C88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035C610_0x35c610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C88Cu; }
        if (ctx->pc != 0x35C88Cu) { return; }
    }
    ctx->pc = 0x35C88Cu;
label_35c88c:
    // 0x35c88c: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x35c88cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x35c890: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x35c890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x35c894: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35c894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x35c898: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x35c898u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x35c89c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x35c89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x35c8a0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x35c8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x35c8a4: 0xc08bf20  jal         func_22FC80
    ctx->pc = 0x35C8A4u;
    SET_GPR_U32(ctx, 31, 0x35C8ACu);
    ctx->pc = 0x35C8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35C8A4u;
            // 0x35c8a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C8ACu; }
        if (ctx->pc != 0x35C8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35C8ACu; }
        if (ctx->pc != 0x35C8ACu) { return; }
    }
    ctx->pc = 0x35C8ACu;
label_35c8ac:
    // 0x35c8ac: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x35c8acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x35c8b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35c8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c8b4: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x35c8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x35c8b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x35c8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35c8bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35c8bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35c8c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35c8c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c8c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35c8c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x35C8C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C8C8u;
            // 0x35c8cc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35C8D0u;
}
