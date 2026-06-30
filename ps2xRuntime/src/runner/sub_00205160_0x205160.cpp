#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00205160
// Address: 0x205160 - 0x205470
void sub_00205160_0x205160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205160_0x205160");
#endif

    switch (ctx->pc) {
        case 0x205248u: goto label_205248;
        case 0x205260u: goto label_205260;
        case 0x2052d0u: goto label_2052d0;
        case 0x205400u: goto label_205400;
        case 0x20544cu: goto label_20544c;
        default: break;
    }

    ctx->pc = 0x205160u;

    // 0x205160: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x205160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x205164: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x205164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x205168: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x205168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20516c: 0x3c0b006a  lui         $t3, 0x6A
    ctx->pc = 0x20516cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)106 << 16));
    // 0x205170: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x205170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x205174: 0x3c0a006a  lui         $t2, 0x6A
    ctx->pc = 0x205174u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)106 << 16));
    // 0x205178: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x205178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20517c: 0x3c08006a  lui         $t0, 0x6A
    ctx->pc = 0x20517cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)106 << 16));
    // 0x205180: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x205180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x205184: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x205184u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x205188: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x205188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20518c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x20518cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x205190: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x205190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x205194: 0x256bd430  addiu       $t3, $t3, -0x2BD0
    ctx->pc = 0x205194u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956080));
    // 0x205198: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x205198u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x20519c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20519cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2051a0: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2051a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2051a4: 0x254ae370  addiu       $t2, $t2, -0x1C90
    ctx->pc = 0x2051a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294959984));
    // 0x2051a8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2051a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2051ac: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x2051acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2051b0: 0xac8b0000  sw          $t3, 0x0($a0)
    ctx->pc = 0x2051b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 11));
    // 0x2051b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2051b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2051b8: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x2051b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x2051bc: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2051bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2051c0: 0xac8a0000  sw          $t2, 0x0($a0)
    ctx->pc = 0x2051c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
    // 0x2051c4: 0x2508db60  addiu       $t0, $t0, -0x24A0
    ctx->pc = 0x2051c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957920));
    // 0x2051c8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2051c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2051cc: 0x24e7e1e0  addiu       $a3, $a3, -0x1E20
    ctx->pc = 0x2051ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959584));
    // 0x2051d0: 0xac89000c  sw          $t1, 0xC($a0)
    ctx->pc = 0x2051d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 9));
    // 0x2051d4: 0x518bc  dsll32      $v1, $a1, 2
    ctx->pc = 0x2051d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 2));
    // 0x2051d8: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x2051d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x2051dc: 0x2442e2b0  addiu       $v0, $v0, -0x1D50
    ctx->pc = 0x2051dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959792));
    // 0x2051e0: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x2051e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x2051e4: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x2051e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x2051e8: 0xe48c0010  swc1        $f12, 0x10($a0)
    ctx->pc = 0x2051e8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2051ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2051ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2051f0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2051f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2051f4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2051f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2051f8: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x2051f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x2051fc: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x2051fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x205200: 0xac850048  sw          $a1, 0x48($a0)
    ctx->pc = 0x205200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 5));
    // 0x205204: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x205204u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x205208: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x205208u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x20520c: 0xac850058  sw          $a1, 0x58($a0)
    ctx->pc = 0x20520cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 5));
    // 0x205210: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x205210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x205214: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x205214u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x205218: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x205218u;
    {
        const bool branch_taken_0x205218 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20521Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205218u;
            // 0x20521c: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x205218) {
            ctx->pc = 0x20527Cu;
            goto label_20527c;
        }
    }
    ctx->pc = 0x205220u;
    // 0x205220: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x205220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x205224: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x205224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x205228: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x205228u;
    {
        const bool branch_taken_0x205228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205228) {
            ctx->pc = 0x20522Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x205228u;
            // 0x20522c: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20524Cu;
            goto label_20524c;
        }
    }
    ctx->pc = 0x205230u;
    // 0x205230: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x205230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x205234: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x205234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x205238: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x205238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x20523c: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x20523cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x205240: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x205240u;
    SET_GPR_U32(ctx, 31, 0x205248u);
    ctx->pc = 0x205244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205240u;
            // 0x205244: 0x24070015  addiu       $a3, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205248u; }
        if (ctx->pc != 0x205248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205248u; }
        if (ctx->pc != 0x205248u) { return; }
    }
    ctx->pc = 0x205248u;
label_205248:
    // 0x205248: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x205248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_20524c:
    // 0x20524c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x20524cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x205250: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x205250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x205254: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x205254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x205258: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x205258u;
    SET_GPR_U32(ctx, 31, 0x205260u);
    ctx->pc = 0x20525Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205258u;
            // 0x20525c: 0x32900  sll         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205260u; }
        if (ctx->pc != 0x205260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x205260u; }
        if (ctx->pc != 0x205260u) { return; }
    }
    ctx->pc = 0x205260u;
label_205260:
    // 0x205260: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x205260u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    // 0x205264: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x205264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x205268: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x205268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x20526c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20526cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x205270: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x205270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x205274: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x205274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x205278: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x205278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
label_20527c:
    // 0x20527c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x20527cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x205280: 0xae240054  sw          $a0, 0x54($s1)
    ctx->pc = 0x205280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 4));
    // 0x205284: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x205284u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x205288: 0x8e290050  lw          $t1, 0x50($s1)
    ctx->pc = 0x205288u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x20528c: 0x1880006a  blez        $a0, . + 4 + (0x6A << 2)
    ctx->pc = 0x20528Cu;
    {
        const bool branch_taken_0x20528c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x205290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20528Cu;
            // 0x205290: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20528c) {
            ctx->pc = 0x205438u;
            goto label_205438;
        }
    }
    ctx->pc = 0x205294u;
    // 0x205294: 0x28810009  slti        $at, $a0, 0x9
    ctx->pc = 0x205294u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x205298: 0x14200053  bnez        $at, . + 4 + (0x53 << 2)
    ctx->pc = 0x205298u;
    {
        const bool branch_taken_0x205298 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x20529Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x205298u;
            // 0x20529c: 0x2483fff8  addiu       $v1, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205298) {
            ctx->pc = 0x2053E8u;
            goto label_2053e8;
        }
    }
    ctx->pc = 0x2052A0u;
    // 0x2052a0: 0x4800007  bltz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2052A0u;
    {
        const bool branch_taken_0x2052a0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2052A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2052A0u;
            // 0x2052a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2052a0) {
            ctx->pc = 0x2052C0u;
            goto label_2052c0;
        }
    }
    ctx->pc = 0x2052A8u;
    // 0x2052a8: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x2052a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x2052ac: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x2052acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x2052b0: 0x81082a  slt         $at, $a0, $at
    ctx->pc = 0x2052b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x2052b4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2052B4u;
    {
        const bool branch_taken_0x2052b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2052b4) {
            ctx->pc = 0x2052C0u;
            goto label_2052c0;
        }
    }
    ctx->pc = 0x2052BCu;
    // 0x2052bc: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x2052bcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2052c0:
    // 0x2052c0: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2052C0u;
    {
        const bool branch_taken_0x2052c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2052c0) {
            ctx->pc = 0x2053E8u;
            goto label_2053e8;
        }
    }
    ctx->pc = 0x2052C8u;
    // 0x2052c8: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x2052c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2052cc: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x2052ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2052d0:
    // 0x2052d0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2052d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2052d4: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x2052d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2052d8: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x2052d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2052dc: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2052dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2052e0: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2052e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2052e4: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x2052e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2052e8: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2052e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2052ec: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2052ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2052f0: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x2052f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2052f4: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x2052f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x2052f8: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x2052f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2052fc: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x2052fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x205300: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x205300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x205304: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x205304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x205308: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x205308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20530c: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x20530cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x205310: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x205310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x205314: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x205314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x205318: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x205318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20531c: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x20531cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x205320: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x205320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x205324: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x205324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x205328: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x205328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20532c: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x20532cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x205330: 0xc4c0002c  lwc1        $f0, 0x2C($a2)
    ctx->pc = 0x205330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x205334: 0xe4a0002c  swc1        $f0, 0x2C($a1)
    ctx->pc = 0x205334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
    // 0x205338: 0xc4c00030  lwc1        $f0, 0x30($a2)
    ctx->pc = 0x205338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20533c: 0xe4a00030  swc1        $f0, 0x30($a1)
    ctx->pc = 0x20533cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x205340: 0xc4c00034  lwc1        $f0, 0x34($a2)
    ctx->pc = 0x205340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x205344: 0xe4a00034  swc1        $f0, 0x34($a1)
    ctx->pc = 0x205344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x205348: 0xc4c00038  lwc1        $f0, 0x38($a2)
    ctx->pc = 0x205348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20534c: 0xe4a00038  swc1        $f0, 0x38($a1)
    ctx->pc = 0x20534cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
    // 0x205350: 0xc4c0003c  lwc1        $f0, 0x3C($a2)
    ctx->pc = 0x205350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x205354: 0xe4a0003c  swc1        $f0, 0x3C($a1)
    ctx->pc = 0x205354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x205358: 0xc4c00040  lwc1        $f0, 0x40($a2)
    ctx->pc = 0x205358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20535c: 0xe4a00040  swc1        $f0, 0x40($a1)
    ctx->pc = 0x20535cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x205360: 0xc4c00044  lwc1        $f0, 0x44($a2)
    ctx->pc = 0x205360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x205364: 0xe4a00044  swc1        $f0, 0x44($a1)
    ctx->pc = 0x205364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x205368: 0xc4c00048  lwc1        $f0, 0x48($a2)
    ctx->pc = 0x205368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20536c: 0xe4a00048  swc1        $f0, 0x48($a1)
    ctx->pc = 0x20536cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
    // 0x205370: 0xc4c0004c  lwc1        $f0, 0x4C($a2)
    ctx->pc = 0x205370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x205374: 0xe4a0004c  swc1        $f0, 0x4C($a1)
    ctx->pc = 0x205374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
    // 0x205378: 0xc4c00050  lwc1        $f0, 0x50($a2)
    ctx->pc = 0x205378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20537c: 0xe4a00050  swc1        $f0, 0x50($a1)
    ctx->pc = 0x20537cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
    // 0x205380: 0xc4c00054  lwc1        $f0, 0x54($a2)
    ctx->pc = 0x205380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x205384: 0xe4a00054  swc1        $f0, 0x54($a1)
    ctx->pc = 0x205384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 84), bits); }
    // 0x205388: 0xc4c00058  lwc1        $f0, 0x58($a2)
    ctx->pc = 0x205388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20538c: 0xe4a00058  swc1        $f0, 0x58($a1)
    ctx->pc = 0x20538cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
    // 0x205390: 0xc4c0005c  lwc1        $f0, 0x5C($a2)
    ctx->pc = 0x205390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x205394: 0xe4a0005c  swc1        $f0, 0x5C($a1)
    ctx->pc = 0x205394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 92), bits); }
    // 0x205398: 0xc4c00060  lwc1        $f0, 0x60($a2)
    ctx->pc = 0x205398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20539c: 0xe4a00060  swc1        $f0, 0x60($a1)
    ctx->pc = 0x20539cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 96), bits); }
    // 0x2053a0: 0xc4c00064  lwc1        $f0, 0x64($a2)
    ctx->pc = 0x2053a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2053a4: 0xe4a00064  swc1        $f0, 0x64($a1)
    ctx->pc = 0x2053a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 100), bits); }
    // 0x2053a8: 0xc4c00068  lwc1        $f0, 0x68($a2)
    ctx->pc = 0x2053a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2053ac: 0xe4a00068  swc1        $f0, 0x68($a1)
    ctx->pc = 0x2053acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 104), bits); }
    // 0x2053b0: 0xc4c0006c  lwc1        $f0, 0x6C($a2)
    ctx->pc = 0x2053b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2053b4: 0xe4a0006c  swc1        $f0, 0x6C($a1)
    ctx->pc = 0x2053b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 108), bits); }
    // 0x2053b8: 0xc4c00070  lwc1        $f0, 0x70($a2)
    ctx->pc = 0x2053b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2053bc: 0xe4a00070  swc1        $f0, 0x70($a1)
    ctx->pc = 0x2053bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 112), bits); }
    // 0x2053c0: 0xc4c00074  lwc1        $f0, 0x74($a2)
    ctx->pc = 0x2053c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2053c4: 0xe4a00074  swc1        $f0, 0x74($a1)
    ctx->pc = 0x2053c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 116), bits); }
    // 0x2053c8: 0xc4c00078  lwc1        $f0, 0x78($a2)
    ctx->pc = 0x2053c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2053cc: 0xe4a00078  swc1        $f0, 0x78($a1)
    ctx->pc = 0x2053ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 120), bits); }
    // 0x2053d0: 0xc4c0007c  lwc1        $f0, 0x7C($a2)
    ctx->pc = 0x2053d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2053d4: 0xe4a0007c  swc1        $f0, 0x7C($a1)
    ctx->pc = 0x2053d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 124), bits); }
    // 0x2053d8: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x2053d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x2053dc: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x2053DCu;
    {
        const bool branch_taken_0x2053dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2053E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2053DCu;
            // 0x2053e0: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2053dc) {
            ctx->pc = 0x2052D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2052d0;
        }
    }
    ctx->pc = 0x2053E4u;
    // 0x2053e4: 0x0  nop
    ctx->pc = 0x2053e4u;
    // NOP
label_2053e8:
    // 0x2053e8: 0xe4082a  slt         $at, $a3, $a0
    ctx->pc = 0x2053e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2053ec: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x2053ECu;
    {
        const bool branch_taken_0x2053ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2053ec) {
            ctx->pc = 0x205438u;
            goto label_205438;
        }
    }
    ctx->pc = 0x2053F4u;
    // 0x2053f4: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x2053f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2053f8: 0x1022821  addu        $a1, $t0, $v0
    ctx->pc = 0x2053f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2053fc: 0x1221821  addu        $v1, $t1, $v0
    ctx->pc = 0x2053fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_205400:
    // 0x205400: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x205400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x205404: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x205404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x205408: 0xe4102a  slt         $v0, $a3, $a0
    ctx->pc = 0x205408u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x20540c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x20540cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x205410: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x205410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x205414: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x205414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x205418: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x205418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20541c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x20541cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x205420: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x205420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x205424: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x205424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x205428: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x205428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x20542c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x20542Cu;
    {
        const bool branch_taken_0x20542c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20542Cu;
            // 0x205430: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20542c) {
            ctx->pc = 0x205400u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_205400;
        }
    }
    ctx->pc = 0x205434u;
    // 0x205434: 0x0  nop
    ctx->pc = 0x205434u;
    // NOP
label_205438:
    // 0x205438: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x205438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20543c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x20543cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x205440: 0x8fa70034  lw          $a3, 0x34($sp)
    ctx->pc = 0x205440u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x205444: 0xc08151c  jal         func_205470
    ctx->pc = 0x205444u;
    SET_GPR_U32(ctx, 31, 0x20544Cu);
    ctx->pc = 0x205448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x205444u;
            // 0x205448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x205470u;
    if (runtime->hasFunction(0x205470u)) {
        auto targetFn = runtime->lookupFunction(0x205470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20544Cu; }
        if (ctx->pc != 0x20544Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00205470_0x205470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20544Cu; }
        if (ctx->pc != 0x20544Cu) { return; }
    }
    ctx->pc = 0x20544Cu;
label_20544c:
    // 0x20544c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x20544cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205450: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x205450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x205454: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x205454u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205458: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x205458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20545c: 0x3e00008  jr          $ra
    ctx->pc = 0x20545Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20545Cu;
            // 0x205460: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x205464u;
    // 0x205464: 0x0  nop
    ctx->pc = 0x205464u;
    // NOP
    // 0x205468: 0x0  nop
    ctx->pc = 0x205468u;
    // NOP
    // 0x20546c: 0x0  nop
    ctx->pc = 0x20546cu;
    // NOP
}
