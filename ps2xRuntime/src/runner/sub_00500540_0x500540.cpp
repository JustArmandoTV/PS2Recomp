#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00500540
// Address: 0x500540 - 0x500650
void sub_00500540_0x500540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00500540_0x500540");
#endif

    switch (ctx->pc) {
        case 0x500570u: goto label_500570;
        case 0x50057cu: goto label_50057c;
        default: break;
    }

    ctx->pc = 0x500540u;

    // 0x500540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x500540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x500544: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x500544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x500548: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x500548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x50054c: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x50054cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
    // 0x500550: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x500550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x500554: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x500554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x500558: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x500558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50055c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x50055cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x500560: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x500560u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x500564: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x500564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x500568: 0xc1401c8  jal         func_500720
    ctx->pc = 0x500568u;
    SET_GPR_U32(ctx, 31, 0x500570u);
    ctx->pc = 0x50056Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x500568u;
            // 0x50056c: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500720u;
    if (runtime->hasFunction(0x500720u)) {
        auto targetFn = runtime->lookupFunction(0x500720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500570u; }
        if (ctx->pc != 0x500570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500720_0x500720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x500570u; }
        if (ctx->pc != 0x500570u) { return; }
    }
    ctx->pc = 0x500570u;
label_500570:
    // 0x500570: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x500570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x500574: 0xc140194  jal         func_500650
    ctx->pc = 0x500574u;
    SET_GPR_U32(ctx, 31, 0x50057Cu);
    ctx->pc = 0x500578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x500574u;
            // 0x500578: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500650u;
    if (runtime->hasFunction(0x500650u)) {
        auto targetFn = runtime->lookupFunction(0x500650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50057Cu; }
        if (ctx->pc != 0x50057Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500650_0x500650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50057Cu; }
        if (ctx->pc != 0x50057Cu) { return; }
    }
    ctx->pc = 0x50057Cu;
label_50057c:
    // 0x50057c: 0xc6000150  lwc1        $f0, 0x150($s0)
    ctx->pc = 0x50057cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x500580: 0xe6200120  swc1        $f0, 0x120($s1)
    ctx->pc = 0x500580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
    // 0x500584: 0xc6000154  lwc1        $f0, 0x154($s0)
    ctx->pc = 0x500584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x500588: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x500588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x50058c: 0xc6000158  lwc1        $f0, 0x158($s0)
    ctx->pc = 0x50058cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x500590: 0xe6200128  swc1        $f0, 0x128($s1)
    ctx->pc = 0x500590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 296), bits); }
    // 0x500594: 0xc600015c  lwc1        $f0, 0x15C($s0)
    ctx->pc = 0x500594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x500598: 0xe620012c  swc1        $f0, 0x12C($s1)
    ctx->pc = 0x500598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 300), bits); }
    // 0x50059c: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x50059cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x5005a0: 0xae230130  sw          $v1, 0x130($s1)
    ctx->pc = 0x5005a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 3));
    // 0x5005a4: 0xc6030164  lwc1        $f3, 0x164($s0)
    ctx->pc = 0x5005a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x5005a8: 0xc6020168  lwc1        $f2, 0x168($s0)
    ctx->pc = 0x5005a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x5005ac: 0xc601016c  lwc1        $f1, 0x16C($s0)
    ctx->pc = 0x5005acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x5005b0: 0xc6000170  lwc1        $f0, 0x170($s0)
    ctx->pc = 0x5005b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x5005b4: 0xe6230134  swc1        $f3, 0x134($s1)
    ctx->pc = 0x5005b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 308), bits); }
    // 0x5005b8: 0xe6220138  swc1        $f2, 0x138($s1)
    ctx->pc = 0x5005b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 312), bits); }
    // 0x5005bc: 0xe621013c  swc1        $f1, 0x13C($s1)
    ctx->pc = 0x5005bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 316), bits); }
    // 0x5005c0: 0xe6200140  swc1        $f0, 0x140($s1)
    ctx->pc = 0x5005c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 320), bits); }
    // 0x5005c4: 0xc6030180  lwc1        $f3, 0x180($s0)
    ctx->pc = 0x5005c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x5005c8: 0xc6020184  lwc1        $f2, 0x184($s0)
    ctx->pc = 0x5005c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x5005cc: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x5005ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x5005d0: 0xc600018c  lwc1        $f0, 0x18C($s0)
    ctx->pc = 0x5005d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x5005d4: 0xe6230150  swc1        $f3, 0x150($s1)
    ctx->pc = 0x5005d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 336), bits); }
    // 0x5005d8: 0xe6220154  swc1        $f2, 0x154($s1)
    ctx->pc = 0x5005d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 340), bits); }
    // 0x5005dc: 0xe6210158  swc1        $f1, 0x158($s1)
    ctx->pc = 0x5005dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 344), bits); }
    // 0x5005e0: 0xe620015c  swc1        $f0, 0x15C($s1)
    ctx->pc = 0x5005e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 348), bits); }
    // 0x5005e4: 0x8e030190  lw          $v1, 0x190($s0)
    ctx->pc = 0x5005e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x5005e8: 0xae230160  sw          $v1, 0x160($s1)
    ctx->pc = 0x5005e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 3));
    // 0x5005ec: 0x92030194  lbu         $v1, 0x194($s0)
    ctx->pc = 0x5005ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x5005f0: 0xa2230164  sb          $v1, 0x164($s1)
    ctx->pc = 0x5005f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 356), (uint8_t)GPR_U32(ctx, 3));
    // 0x5005f4: 0x92030195  lbu         $v1, 0x195($s0)
    ctx->pc = 0x5005f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 405)));
    // 0x5005f8: 0xa2230165  sb          $v1, 0x165($s1)
    ctx->pc = 0x5005f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 357), (uint8_t)GPR_U32(ctx, 3));
    // 0x5005fc: 0xc60301a0  lwc1        $f3, 0x1A0($s0)
    ctx->pc = 0x5005fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x500600: 0xc60201a4  lwc1        $f2, 0x1A4($s0)
    ctx->pc = 0x500600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x500604: 0xc60101a8  lwc1        $f1, 0x1A8($s0)
    ctx->pc = 0x500604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x500608: 0xc60001ac  lwc1        $f0, 0x1AC($s0)
    ctx->pc = 0x500608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x50060c: 0xe6230170  swc1        $f3, 0x170($s1)
    ctx->pc = 0x50060cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 368), bits); }
    // 0x500610: 0xe6220174  swc1        $f2, 0x174($s1)
    ctx->pc = 0x500610u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 372), bits); }
    // 0x500614: 0xe6210178  swc1        $f1, 0x178($s1)
    ctx->pc = 0x500614u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 376), bits); }
    // 0x500618: 0xe620017c  swc1        $f0, 0x17C($s1)
    ctx->pc = 0x500618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 380), bits); }
    // 0x50061c: 0xc60001b0  lwc1        $f0, 0x1B0($s0)
    ctx->pc = 0x50061cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x500620: 0xe6200180  swc1        $f0, 0x180($s1)
    ctx->pc = 0x500620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 384), bits); }
    // 0x500624: 0xc60201b4  lwc1        $f2, 0x1B4($s0)
    ctx->pc = 0x500624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x500628: 0xc60101b8  lwc1        $f1, 0x1B8($s0)
    ctx->pc = 0x500628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x50062c: 0xc60001bc  lwc1        $f0, 0x1BC($s0)
    ctx->pc = 0x50062cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x500630: 0xe6220184  swc1        $f2, 0x184($s1)
    ctx->pc = 0x500630u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 388), bits); }
    // 0x500634: 0xe6210188  swc1        $f1, 0x188($s1)
    ctx->pc = 0x500634u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 392), bits); }
    // 0x500638: 0xe620018c  swc1        $f0, 0x18C($s1)
    ctx->pc = 0x500638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 396), bits); }
    // 0x50063c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x50063cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x500640: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x500640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x500644: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x500644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x500648: 0x3e00008  jr          $ra
    ctx->pc = 0x500648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50064Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x500648u;
            // 0x50064c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x500650u;
}
