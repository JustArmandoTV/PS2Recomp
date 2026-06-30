#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00568220
// Address: 0x568220 - 0x5683b0
void sub_00568220_0x568220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00568220_0x568220");
#endif

    switch (ctx->pc) {
        case 0x568220u: goto label_568220;
        case 0x568224u: goto label_568224;
        case 0x568228u: goto label_568228;
        case 0x56822cu: goto label_56822c;
        case 0x568230u: goto label_568230;
        case 0x568234u: goto label_568234;
        case 0x568238u: goto label_568238;
        case 0x56823cu: goto label_56823c;
        case 0x568240u: goto label_568240;
        case 0x568244u: goto label_568244;
        case 0x568248u: goto label_568248;
        case 0x56824cu: goto label_56824c;
        case 0x568250u: goto label_568250;
        case 0x568254u: goto label_568254;
        case 0x568258u: goto label_568258;
        case 0x56825cu: goto label_56825c;
        case 0x568260u: goto label_568260;
        case 0x568264u: goto label_568264;
        case 0x568268u: goto label_568268;
        case 0x56826cu: goto label_56826c;
        case 0x568270u: goto label_568270;
        case 0x568274u: goto label_568274;
        case 0x568278u: goto label_568278;
        case 0x56827cu: goto label_56827c;
        case 0x568280u: goto label_568280;
        case 0x568284u: goto label_568284;
        case 0x568288u: goto label_568288;
        case 0x56828cu: goto label_56828c;
        case 0x568290u: goto label_568290;
        case 0x568294u: goto label_568294;
        case 0x568298u: goto label_568298;
        case 0x56829cu: goto label_56829c;
        case 0x5682a0u: goto label_5682a0;
        case 0x5682a4u: goto label_5682a4;
        case 0x5682a8u: goto label_5682a8;
        case 0x5682acu: goto label_5682ac;
        case 0x5682b0u: goto label_5682b0;
        case 0x5682b4u: goto label_5682b4;
        case 0x5682b8u: goto label_5682b8;
        case 0x5682bcu: goto label_5682bc;
        case 0x5682c0u: goto label_5682c0;
        case 0x5682c4u: goto label_5682c4;
        case 0x5682c8u: goto label_5682c8;
        case 0x5682ccu: goto label_5682cc;
        case 0x5682d0u: goto label_5682d0;
        case 0x5682d4u: goto label_5682d4;
        case 0x5682d8u: goto label_5682d8;
        case 0x5682dcu: goto label_5682dc;
        case 0x5682e0u: goto label_5682e0;
        case 0x5682e4u: goto label_5682e4;
        case 0x5682e8u: goto label_5682e8;
        case 0x5682ecu: goto label_5682ec;
        case 0x5682f0u: goto label_5682f0;
        case 0x5682f4u: goto label_5682f4;
        case 0x5682f8u: goto label_5682f8;
        case 0x5682fcu: goto label_5682fc;
        case 0x568300u: goto label_568300;
        case 0x568304u: goto label_568304;
        case 0x568308u: goto label_568308;
        case 0x56830cu: goto label_56830c;
        case 0x568310u: goto label_568310;
        case 0x568314u: goto label_568314;
        case 0x568318u: goto label_568318;
        case 0x56831cu: goto label_56831c;
        case 0x568320u: goto label_568320;
        case 0x568324u: goto label_568324;
        case 0x568328u: goto label_568328;
        case 0x56832cu: goto label_56832c;
        case 0x568330u: goto label_568330;
        case 0x568334u: goto label_568334;
        case 0x568338u: goto label_568338;
        case 0x56833cu: goto label_56833c;
        case 0x568340u: goto label_568340;
        case 0x568344u: goto label_568344;
        case 0x568348u: goto label_568348;
        case 0x56834cu: goto label_56834c;
        case 0x568350u: goto label_568350;
        case 0x568354u: goto label_568354;
        case 0x568358u: goto label_568358;
        case 0x56835cu: goto label_56835c;
        case 0x568360u: goto label_568360;
        case 0x568364u: goto label_568364;
        case 0x568368u: goto label_568368;
        case 0x56836cu: goto label_56836c;
        case 0x568370u: goto label_568370;
        case 0x568374u: goto label_568374;
        case 0x568378u: goto label_568378;
        case 0x56837cu: goto label_56837c;
        case 0x568380u: goto label_568380;
        case 0x568384u: goto label_568384;
        case 0x568388u: goto label_568388;
        case 0x56838cu: goto label_56838c;
        case 0x568390u: goto label_568390;
        case 0x568394u: goto label_568394;
        case 0x568398u: goto label_568398;
        case 0x56839cu: goto label_56839c;
        case 0x5683a0u: goto label_5683a0;
        case 0x5683a4u: goto label_5683a4;
        case 0x5683a8u: goto label_5683a8;
        case 0x5683acu: goto label_5683ac;
        default: break;
    }

    ctx->pc = 0x568220u;

label_568220:
    // 0x568220: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x568220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_568224:
    // 0x568224: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x568224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_568228:
    // 0x568228: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x568228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_56822c:
    // 0x56822c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x56822cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_568230:
    // 0x568230: 0x8c850110  lw          $a1, 0x110($a0)
    ctx->pc = 0x568230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
label_568234:
    // 0x568234: 0x10a30056  beq         $a1, $v1, . + 4 + (0x56 << 2)
label_568238:
    if (ctx->pc == 0x568238u) {
        ctx->pc = 0x568238u;
            // 0x568238: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56823Cu;
        goto label_56823c;
    }
    ctx->pc = 0x568234u;
    {
        const bool branch_taken_0x568234 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x568238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x568234u;
            // 0x568238: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x568234) {
            ctx->pc = 0x568390u;
            goto label_568390;
        }
    }
    ctx->pc = 0x56823Cu;
label_56823c:
    // 0x56823c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x56823cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_568240:
    // 0x568240: 0x50a3004f  beql        $a1, $v1, . + 4 + (0x4F << 2)
label_568244:
    if (ctx->pc == 0x568244u) {
        ctx->pc = 0x568244u;
            // 0x568244: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x568248u;
        goto label_568248;
    }
    ctx->pc = 0x568240u;
    {
        const bool branch_taken_0x568240 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x568240) {
            ctx->pc = 0x568244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x568240u;
            // 0x568244: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x568380u;
            goto label_568380;
        }
    }
    ctx->pc = 0x568248u;
label_568248:
    // 0x568248: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x568248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_56824c:
    // 0x56824c: 0x50a3002b  beql        $a1, $v1, . + 4 + (0x2B << 2)
label_568250:
    if (ctx->pc == 0x568250u) {
        ctx->pc = 0x568250u;
            // 0x568250: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x568254u;
        goto label_568254;
    }
    ctx->pc = 0x56824Cu;
    {
        const bool branch_taken_0x56824c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x56824c) {
            ctx->pc = 0x568250u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56824Cu;
            // 0x568250: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5682FCu;
            goto label_5682fc;
        }
    }
    ctx->pc = 0x568254u;
label_568254:
    // 0x568254: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x568254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_568258:
    // 0x568258: 0x50a30024  beql        $a1, $v1, . + 4 + (0x24 << 2)
label_56825c:
    if (ctx->pc == 0x56825Cu) {
        ctx->pc = 0x56825Cu;
            // 0x56825c: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x568260u;
        goto label_568260;
    }
    ctx->pc = 0x568258u;
    {
        const bool branch_taken_0x568258 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x568258) {
            ctx->pc = 0x56825Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x568258u;
            // 0x56825c: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5682ECu;
            goto label_5682ec;
        }
    }
    ctx->pc = 0x568260u;
label_568260:
    // 0x568260: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_568264:
    if (ctx->pc == 0x568264u) {
        ctx->pc = 0x568264u;
            // 0x568264: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x568268u;
        goto label_568268;
    }
    ctx->pc = 0x568260u;
    {
        const bool branch_taken_0x568260 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x568260) {
            ctx->pc = 0x568264u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x568260u;
            // 0x568264: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x568270u;
            goto label_568270;
        }
    }
    ctx->pc = 0x568268u;
label_568268:
    // 0x568268: 0x1000004c  b           . + 4 + (0x4C << 2)
label_56826c:
    if (ctx->pc == 0x56826Cu) {
        ctx->pc = 0x56826Cu;
            // 0x56826c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x568270u;
        goto label_568270;
    }
    ctx->pc = 0x568268u;
    {
        const bool branch_taken_0x568268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x56826Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x568268u;
            // 0x56826c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x568268) {
            ctx->pc = 0x56839Cu;
            goto label_56839c;
        }
    }
    ctx->pc = 0x568270u;
label_568270:
    // 0x568270: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x568270u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_568274:
    // 0x568274: 0x320f809  jalr        $t9
label_568278:
    if (ctx->pc == 0x568278u) {
        ctx->pc = 0x56827Cu;
        goto label_56827c;
    }
    ctx->pc = 0x568274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x56827Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x56827Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x56827Cu; }
            if (ctx->pc != 0x56827Cu) { return; }
        }
        }
    }
    ctx->pc = 0x56827Cu;
label_56827c:
    // 0x56827c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x56827cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_568280:
    // 0x568280: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x568280u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_568284:
    // 0x568284: 0x320f809  jalr        $t9
label_568288:
    if (ctx->pc == 0x568288u) {
        ctx->pc = 0x568288u;
            // 0x568288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56828Cu;
        goto label_56828c;
    }
    ctx->pc = 0x568284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x56828Cu);
        ctx->pc = 0x568288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x568284u;
            // 0x568288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x56828Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x56828Cu; }
            if (ctx->pc != 0x56828Cu) { return; }
        }
        }
    }
    ctx->pc = 0x56828Cu;
label_56828c:
    // 0x56828c: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x56828cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_568290:
    // 0x568290: 0xc6020048  lwc1        $f2, 0x48($s0)
    ctx->pc = 0x568290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_568294:
    // 0x568294: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x568294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_568298:
    // 0x568298: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x568298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_56829c:
    // 0x56829c: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x56829cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5682a0:
    // 0x5682a0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x5682a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_5682a4:
    // 0x5682a4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x5682a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_5682a8:
    // 0x5682a8: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x5682a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_5682ac:
    // 0x5682ac: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x5682acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_5682b0:
    // 0x5682b0: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x5682b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_5682b4:
    // 0x5682b4: 0xc603005c  lwc1        $f3, 0x5C($s0)
    ctx->pc = 0x5682b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_5682b8:
    // 0x5682b8: 0xc6020058  lwc1        $f2, 0x58($s0)
    ctx->pc = 0x5682b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5682bc:
    // 0x5682bc: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x5682bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5682c0:
    // 0x5682c0: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x5682c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5682c4:
    // 0x5682c4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x5682c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_5682c8:
    // 0x5682c8: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x5682c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_5682cc:
    // 0x5682cc: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x5682ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_5682d0:
    // 0x5682d0: 0xc0892b0  jal         func_224AC0
label_5682d4:
    if (ctx->pc == 0x5682D4u) {
        ctx->pc = 0x5682D4u;
            // 0x5682d4: 0xe7a3006c  swc1        $f3, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->pc = 0x5682D8u;
        goto label_5682d8;
    }
    ctx->pc = 0x5682D0u;
    SET_GPR_U32(ctx, 31, 0x5682D8u);
    ctx->pc = 0x5682D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5682D0u;
            // 0x5682d4: 0xe7a3006c  swc1        $f3, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5682D8u; }
        if (ctx->pc != 0x5682D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5682D8u; }
        if (ctx->pc != 0x5682D8u) { return; }
    }
    ctx->pc = 0x5682D8u;
label_5682d8:
    // 0x5682d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x5682d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5682dc:
    // 0x5682dc: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x5682dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_5682e0:
    // 0x5682e0: 0xc0f4cb0  jal         func_3D32C0
label_5682e4:
    if (ctx->pc == 0x5682E4u) {
        ctx->pc = 0x5682E4u;
            // 0x5682e4: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x5682E8u;
        goto label_5682e8;
    }
    ctx->pc = 0x5682E0u;
    SET_GPR_U32(ctx, 31, 0x5682E8u);
    ctx->pc = 0x5682E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5682E0u;
            // 0x5682e4: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D32C0u;
    if (runtime->hasFunction(0x3D32C0u)) {
        auto targetFn = runtime->lookupFunction(0x3D32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5682E8u; }
        if (ctx->pc != 0x5682E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D32C0_0x3d32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5682E8u; }
        if (ctx->pc != 0x5682E8u) { return; }
    }
    ctx->pc = 0x5682E8u;
label_5682e8:
    // 0x5682e8: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x5682e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_5682ec:
    // 0x5682ec: 0xc0f4ca4  jal         func_3D3290
label_5682f0:
    if (ctx->pc == 0x5682F0u) {
        ctx->pc = 0x5682F4u;
        goto label_5682f4;
    }
    ctx->pc = 0x5682ECu;
    SET_GPR_U32(ctx, 31, 0x5682F4u);
    ctx->pc = 0x3D3290u;
    if (runtime->hasFunction(0x3D3290u)) {
        auto targetFn = runtime->lookupFunction(0x3D3290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5682F4u; }
        if (ctx->pc != 0x5682F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D3290_0x3d3290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5682F4u; }
        if (ctx->pc != 0x5682F4u) { return; }
    }
    ctx->pc = 0x5682F4u;
label_5682f4:
    // 0x5682f4: 0x10000028  b           . + 4 + (0x28 << 2)
label_5682f8:
    if (ctx->pc == 0x5682F8u) {
        ctx->pc = 0x5682FCu;
        goto label_5682fc;
    }
    ctx->pc = 0x5682F4u;
    {
        const bool branch_taken_0x5682f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5682f4) {
            ctx->pc = 0x568398u;
            goto label_568398;
        }
    }
    ctx->pc = 0x5682FCu;
label_5682fc:
    // 0x5682fc: 0xc04f278  jal         func_13C9E0
label_568300:
    if (ctx->pc == 0x568300u) {
        ctx->pc = 0x568300u;
            // 0x568300: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x568304u;
        goto label_568304;
    }
    ctx->pc = 0x5682FCu;
    SET_GPR_U32(ctx, 31, 0x568304u);
    ctx->pc = 0x568300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5682FCu;
            // 0x568300: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568304u; }
        if (ctx->pc != 0x568304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568304u; }
        if (ctx->pc != 0x568304u) { return; }
    }
    ctx->pc = 0x568304u;
label_568304:
    // 0x568304: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x568304u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_568308:
    // 0x568308: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x568308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_56830c:
    // 0x56830c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x56830cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_568310:
    // 0x568310: 0xc04cca0  jal         func_133280
label_568314:
    if (ctx->pc == 0x568314u) {
        ctx->pc = 0x568314u;
            // 0x568314: 0x24c6fd90  addiu       $a2, $a2, -0x270 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966672));
        ctx->pc = 0x568318u;
        goto label_568318;
    }
    ctx->pc = 0x568310u;
    SET_GPR_U32(ctx, 31, 0x568318u);
    ctx->pc = 0x568314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568310u;
            // 0x568314: 0x24c6fd90  addiu       $a2, $a2, -0x270 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568318u; }
        if (ctx->pc != 0x568318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568318u; }
        if (ctx->pc != 0x568318u) { return; }
    }
    ctx->pc = 0x568318u;
label_568318:
    // 0x568318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x568318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_56831c:
    // 0x56831c: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x56831cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_568320:
    // 0x568320: 0xc0db640  jal         func_36D900
label_568324:
    if (ctx->pc == 0x568324u) {
        ctx->pc = 0x568324u;
            // 0x568324: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x568328u;
        goto label_568328;
    }
    ctx->pc = 0x568320u;
    SET_GPR_U32(ctx, 31, 0x568328u);
    ctx->pc = 0x568324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568320u;
            // 0x568324: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D900u;
    if (runtime->hasFunction(0x36D900u)) {
        auto targetFn = runtime->lookupFunction(0x36D900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568328u; }
        if (ctx->pc != 0x568328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D900_0x36d900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568328u; }
        if (ctx->pc != 0x568328u) { return; }
    }
    ctx->pc = 0x568328u;
label_568328:
    // 0x568328: 0xc0f4b0c  jal         func_3D2C30
label_56832c:
    if (ctx->pc == 0x56832Cu) {
        ctx->pc = 0x56832Cu;
            // 0x56832c: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x568330u;
        goto label_568330;
    }
    ctx->pc = 0x568328u;
    SET_GPR_U32(ctx, 31, 0x568330u);
    ctx->pc = 0x56832Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568328u;
            // 0x56832c: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D2C30u;
    if (runtime->hasFunction(0x3D2C30u)) {
        auto targetFn = runtime->lookupFunction(0x3D2C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568330u; }
        if (ctx->pc != 0x568330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D2C30_0x3d2c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568330u; }
        if (ctx->pc != 0x568330u) { return; }
    }
    ctx->pc = 0x568330u;
label_568330:
    // 0x568330: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x568330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_568334:
    // 0x568334: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x568334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_568338:
    // 0x568338: 0x14830017  bne         $a0, $v1, . + 4 + (0x17 << 2)
label_56833c:
    if (ctx->pc == 0x56833Cu) {
        ctx->pc = 0x568340u;
        goto label_568340;
    }
    ctx->pc = 0x568338u;
    {
        const bool branch_taken_0x568338 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x568338) {
            ctx->pc = 0x568398u;
            goto label_568398;
        }
    }
    ctx->pc = 0x568340u;
label_568340:
    // 0x568340: 0xc15a0ec  jal         func_5683B0
label_568344:
    if (ctx->pc == 0x568344u) {
        ctx->pc = 0x568344u;
            // 0x568344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x568348u;
        goto label_568348;
    }
    ctx->pc = 0x568340u;
    SET_GPR_U32(ctx, 31, 0x568348u);
    ctx->pc = 0x568344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568340u;
            // 0x568344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5683B0u;
    if (runtime->hasFunction(0x5683B0u)) {
        auto targetFn = runtime->lookupFunction(0x5683B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568348u; }
        if (ctx->pc != 0x568348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005683B0_0x5683b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568348u; }
        if (ctx->pc != 0x568348u) { return; }
    }
    ctx->pc = 0x568348u;
label_568348:
    // 0x568348: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_56834c:
    if (ctx->pc == 0x56834Cu) {
        ctx->pc = 0x56834Cu;
            // 0x56834c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x568350u;
        goto label_568350;
    }
    ctx->pc = 0x568348u;
    {
        const bool branch_taken_0x568348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x568348) {
            ctx->pc = 0x56834Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x568348u;
            // 0x56834c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x568374u;
            goto label_568374;
        }
    }
    ctx->pc = 0x568350u;
label_568350:
    // 0x568350: 0x86030224  lh          $v1, 0x224($s0)
    ctx->pc = 0x568350u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 548)));
label_568354:
    // 0x568354: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_568358:
    if (ctx->pc == 0x568358u) {
        ctx->pc = 0x568358u;
            // 0x568358: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x56835Cu;
        goto label_56835c;
    }
    ctx->pc = 0x568354u;
    {
        const bool branch_taken_0x568354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x568354) {
            ctx->pc = 0x568358u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x568354u;
            // 0x568358: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x568368u;
            goto label_568368;
        }
    }
    ctx->pc = 0x56835Cu;
label_56835c:
    // 0x56835c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x56835cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_568360:
    // 0x568360: 0x1000000d  b           . + 4 + (0xD << 2)
label_568364:
    if (ctx->pc == 0x568364u) {
        ctx->pc = 0x568364u;
            // 0x568364: 0xae030110  sw          $v1, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 3));
        ctx->pc = 0x568368u;
        goto label_568368;
    }
    ctx->pc = 0x568360u;
    {
        const bool branch_taken_0x568360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x568364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x568360u;
            // 0x568364: 0xae030110  sw          $v1, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x568360) {
            ctx->pc = 0x568398u;
            goto label_568398;
        }
    }
    ctx->pc = 0x568368u;
label_568368:
    // 0x568368: 0xae030110  sw          $v1, 0x110($s0)
    ctx->pc = 0x568368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 3));
label_56836c:
    // 0x56836c: 0x1000000a  b           . + 4 + (0xA << 2)
label_568370:
    if (ctx->pc == 0x568370u) {
        ctx->pc = 0x568370u;
            // 0x568370: 0xa2000024  sb          $zero, 0x24($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x568374u;
        goto label_568374;
    }
    ctx->pc = 0x56836Cu;
    {
        const bool branch_taken_0x56836c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x568370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56836Cu;
            // 0x568370: 0xa2000024  sb          $zero, 0x24($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56836c) {
            ctx->pc = 0x568398u;
            goto label_568398;
        }
    }
    ctx->pc = 0x568374u;
label_568374:
    // 0x568374: 0xae030110  sw          $v1, 0x110($s0)
    ctx->pc = 0x568374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 3));
label_568378:
    // 0x568378: 0x10000007  b           . + 4 + (0x7 << 2)
label_56837c:
    if (ctx->pc == 0x56837Cu) {
        ctx->pc = 0x56837Cu;
            // 0x56837c: 0xa2000024  sb          $zero, 0x24($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x568380u;
        goto label_568380;
    }
    ctx->pc = 0x568378u;
    {
        const bool branch_taken_0x568378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x56837Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x568378u;
            // 0x56837c: 0xa2000024  sb          $zero, 0x24($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x568378) {
            ctx->pc = 0x568398u;
            goto label_568398;
        }
    }
    ctx->pc = 0x568380u;
label_568380:
    // 0x568380: 0xc0f4aa4  jal         func_3D2A90
label_568384:
    if (ctx->pc == 0x568384u) {
        ctx->pc = 0x568388u;
        goto label_568388;
    }
    ctx->pc = 0x568380u;
    SET_GPR_U32(ctx, 31, 0x568388u);
    ctx->pc = 0x3D2A90u;
    if (runtime->hasFunction(0x3D2A90u)) {
        auto targetFn = runtime->lookupFunction(0x3D2A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568388u; }
        if (ctx->pc != 0x568388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D2A90_0x3d2a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568388u; }
        if (ctx->pc != 0x568388u) { return; }
    }
    ctx->pc = 0x568388u;
label_568388:
    // 0x568388: 0x10000003  b           . + 4 + (0x3 << 2)
label_56838c:
    if (ctx->pc == 0x56838Cu) {
        ctx->pc = 0x568390u;
        goto label_568390;
    }
    ctx->pc = 0x568388u;
    {
        const bool branch_taken_0x568388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x568388) {
            ctx->pc = 0x568398u;
            goto label_568398;
        }
    }
    ctx->pc = 0x568390u;
label_568390:
    // 0x568390: 0xc0f4af8  jal         func_3D2BE0
label_568394:
    if (ctx->pc == 0x568394u) {
        ctx->pc = 0x568394u;
            // 0x568394: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x568398u;
        goto label_568398;
    }
    ctx->pc = 0x568390u;
    SET_GPR_U32(ctx, 31, 0x568398u);
    ctx->pc = 0x568394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x568390u;
            // 0x568394: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D2BE0u;
    if (runtime->hasFunction(0x3D2BE0u)) {
        auto targetFn = runtime->lookupFunction(0x3D2BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568398u; }
        if (ctx->pc != 0x568398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D2BE0_0x3d2be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x568398u; }
        if (ctx->pc != 0x568398u) { return; }
    }
    ctx->pc = 0x568398u;
label_568398:
    // 0x568398: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x568398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_56839c:
    // 0x56839c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x56839cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5683a0:
    // 0x5683a0: 0x3e00008  jr          $ra
label_5683a4:
    if (ctx->pc == 0x5683A4u) {
        ctx->pc = 0x5683A4u;
            // 0x5683a4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x5683A8u;
        goto label_5683a8;
    }
    ctx->pc = 0x5683A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5683A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5683A0u;
            // 0x5683a4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5683A8u;
label_5683a8:
    // 0x5683a8: 0x0  nop
    ctx->pc = 0x5683a8u;
    // NOP
label_5683ac:
    // 0x5683ac: 0x0  nop
    ctx->pc = 0x5683acu;
    // NOP
}
