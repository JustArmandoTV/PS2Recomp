#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E7200
// Address: 0x3e7200 - 0x3e73a0
void sub_003E7200_0x3e7200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7200_0x3e7200");
#endif

    switch (ctx->pc) {
        case 0x3e721cu: goto label_3e721c;
        case 0x3e723cu: goto label_3e723c;
        case 0x3e7294u: goto label_3e7294;
        case 0x3e72b0u: goto label_3e72b0;
        case 0x3e72d0u: goto label_3e72d0;
        case 0x3e7330u: goto label_3e7330;
        case 0x3e733cu: goto label_3e733c;
        case 0x3e7348u: goto label_3e7348;
        case 0x3e7354u: goto label_3e7354;
        case 0x3e7360u: goto label_3e7360;
        case 0x3e736cu: goto label_3e736c;
        case 0x3e7384u: goto label_3e7384;
        default: break;
    }

    ctx->pc = 0x3e7200u;

    // 0x3e7200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e7200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3e7204: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3e7204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3e7208: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e7208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e720c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x3e720cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x3e7210: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e7210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e7214: 0xc0f9d20  jal         func_3E7480
    ctx->pc = 0x3E7214u;
    SET_GPR_U32(ctx, 31, 0x3E721Cu);
    ctx->pc = 0x3E7218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7214u;
            // 0x3e7218: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E7480u;
    if (runtime->hasFunction(0x3E7480u)) {
        auto targetFn = runtime->lookupFunction(0x3E7480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E721Cu; }
        if (ctx->pc != 0x3E721Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E7480_0x3e7480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E721Cu; }
        if (ctx->pc != 0x3E721Cu) { return; }
    }
    ctx->pc = 0x3E721Cu;
label_3e721c:
    // 0x3e721c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3e721cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3e7220: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3e7220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3e7224: 0x24639d90  addiu       $v1, $v1, -0x6270
    ctx->pc = 0x3e7224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942096));
    // 0x3e7228: 0x24429dc8  addiu       $v0, $v0, -0x6238
    ctx->pc = 0x3e7228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942152));
    // 0x3e722c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3e722cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3e7230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e7230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7234: 0xc0f9d1c  jal         func_3E7470
    ctx->pc = 0x3E7234u;
    SET_GPR_U32(ctx, 31, 0x3E723Cu);
    ctx->pc = 0x3E7238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7234u;
            // 0x3e7238: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E7470u;
    if (runtime->hasFunction(0x3E7470u)) {
        auto targetFn = runtime->lookupFunction(0x3E7470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E723Cu; }
        if (ctx->pc != 0x3E723Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E7470_0x3e7470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E723Cu; }
        if (ctx->pc != 0x3E723Cu) { return; }
    }
    ctx->pc = 0x3E723Cu;
label_3e723c:
    // 0x3e723c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3e723cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3e7240: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3e7240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3e7244: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3e7244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3e7248: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3e7248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3e724c: 0x24429c30  addiu       $v0, $v0, -0x63D0
    ctx->pc = 0x3e724cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941744));
    // 0x3e7250: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x3e7250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x3e7254: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3e7254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3e7258: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3e7258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3e725c: 0x24429c68  addiu       $v0, $v0, -0x6398
    ctx->pc = 0x3e725cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941800));
    // 0x3e7260: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x3e7260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x3e7264: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e7264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3e7268: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x3e7268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x3e726c: 0xc440a0f0  lwc1        $f0, -0x5F10($v0)
    ctx->pc = 0x3e726cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294942960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e7270: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e7270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3e7274: 0xc441a0f4  lwc1        $f1, -0x5F0C($v0)
    ctx->pc = 0x3e7274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294942964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e7278: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3e7278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3e727c: 0xc460a0f8  lwc1        $f0, -0x5F08($v1)
    ctx->pc = 0x3e727cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294942968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e7280: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e7280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3e7284: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3e7284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x3e7288: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x3e7288u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3e728c: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x3E728Cu;
    SET_GPR_U32(ctx, 31, 0x3E7294u);
    ctx->pc = 0x3E7290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E728Cu;
            // 0x3e7290: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7294u; }
        if (ctx->pc != 0x3E7294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7294u; }
        if (ctx->pc != 0x3E7294u) { return; }
    }
    ctx->pc = 0x3E7294u;
label_3e7294:
    // 0x3e7294: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3e7294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3e7298: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e7298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e729c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E729Cu;
    {
        const bool branch_taken_0x3e729c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E72A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E729Cu;
            // 0x3e72a0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e729c) {
            ctx->pc = 0x3E72B4u;
            goto label_3e72b4;
        }
    }
    ctx->pc = 0x3E72A4u;
    // 0x3e72a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3e72a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3e72a8: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x3E72A8u;
    SET_GPR_U32(ctx, 31, 0x3E72B0u);
    ctx->pc = 0x3E72ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E72A8u;
            // 0x3e72ac: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E72B0u; }
        if (ctx->pc != 0x3E72B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E72B0u; }
        if (ctx->pc != 0x3E72B0u) { return; }
    }
    ctx->pc = 0x3E72B0u;
label_3e72b0:
    // 0x3e72b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e72b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e72b4:
    // 0x3e72b4: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x3e72b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x3e72b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3e72b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e72bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e72bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e72c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e72c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e72c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E72C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E72C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E72C4u;
            // 0x3e72c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E72CCu;
    // 0x3e72cc: 0x0  nop
    ctx->pc = 0x3e72ccu;
    // NOP
label_3e72d0:
    // 0x3e72d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e72d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3e72d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e72d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3e72d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e72d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3e72dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e72dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e72e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e72e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e72e4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3E72E4u;
    {
        const bool branch_taken_0x3e72e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E72E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E72E4u;
            // 0x3e72e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e72e4) {
            ctx->pc = 0x3E7384u;
            goto label_3e7384;
        }
    }
    ctx->pc = 0x3E72ECu;
    // 0x3e72ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3e72ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3e72f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3e72f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3e72f4: 0x24639d90  addiu       $v1, $v1, -0x6270
    ctx->pc = 0x3e72f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942096));
    // 0x3e72f8: 0x24429dc8  addiu       $v0, $v0, -0x6238
    ctx->pc = 0x3e72f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942152));
    // 0x3e72fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3e72fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3e7300: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3E7300u;
    {
        const bool branch_taken_0x3e7300 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7300u;
            // 0x3e7304: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7300) {
            ctx->pc = 0x3E736Cu;
            goto label_3e736c;
        }
    }
    ctx->pc = 0x3E7308u;
    // 0x3e7308: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3e7308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3e730c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3e730cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3e7310: 0x24639d40  addiu       $v1, $v1, -0x62C0
    ctx->pc = 0x3e7310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942016));
    // 0x3e7314: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x3e7314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x3e7318: 0x24429d78  addiu       $v0, $v0, -0x6288
    ctx->pc = 0x3e7318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942072));
    // 0x3e731c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3e731cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3e7320: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x3e7320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x3e7324: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x3e7324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x3e7328: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x3E7328u;
    SET_GPR_U32(ctx, 31, 0x3E7330u);
    ctx->pc = 0x3E732Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7328u;
            // 0x3e732c: 0x24a56ed0  addiu       $a1, $a1, 0x6ED0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7330u; }
        if (ctx->pc != 0x3E7330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7330u; }
        if (ctx->pc != 0x3E7330u) { return; }
    }
    ctx->pc = 0x3E7330u;
label_3e7330:
    // 0x3e7330: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x3e7330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x3e7334: 0xc0a8c98  jal         func_2A3260
    ctx->pc = 0x3E7334u;
    SET_GPR_U32(ctx, 31, 0x3E733Cu);
    ctx->pc = 0x3E7338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7334u;
            // 0x3e7338: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E733Cu; }
        if (ctx->pc != 0x3E733Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E733Cu; }
        if (ctx->pc != 0x3E733Cu) { return; }
    }
    ctx->pc = 0x3E733Cu;
label_3e733c:
    // 0x3e733c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x3e733cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x3e7340: 0xc0f9d00  jal         func_3E7400
    ctx->pc = 0x3E7340u;
    SET_GPR_U32(ctx, 31, 0x3E7348u);
    ctx->pc = 0x3E7344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7340u;
            // 0x3e7344: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E7400u;
    if (runtime->hasFunction(0x3E7400u)) {
        auto targetFn = runtime->lookupFunction(0x3E7400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7348u; }
        if (ctx->pc != 0x3E7348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E7400_0x3e7400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7348u; }
        if (ctx->pc != 0x3E7348u) { return; }
    }
    ctx->pc = 0x3E7348u;
label_3e7348:
    // 0x3e7348: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x3e7348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x3e734c: 0xc0f9d00  jal         func_3E7400
    ctx->pc = 0x3E734Cu;
    SET_GPR_U32(ctx, 31, 0x3E7354u);
    ctx->pc = 0x3E7350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E734Cu;
            // 0x3e7350: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E7400u;
    if (runtime->hasFunction(0x3E7400u)) {
        auto targetFn = runtime->lookupFunction(0x3E7400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7354u; }
        if (ctx->pc != 0x3E7354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E7400_0x3e7400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7354u; }
        if (ctx->pc != 0x3E7354u) { return; }
    }
    ctx->pc = 0x3E7354u;
label_3e7354:
    // 0x3e7354: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x3e7354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x3e7358: 0xc0f9ce8  jal         func_3E73A0
    ctx->pc = 0x3E7358u;
    SET_GPR_U32(ctx, 31, 0x3E7360u);
    ctx->pc = 0x3E735Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7358u;
            // 0x3e735c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E73A0u;
    if (runtime->hasFunction(0x3E73A0u)) {
        auto targetFn = runtime->lookupFunction(0x3E73A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7360u; }
        if (ctx->pc != 0x3E7360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E73A0_0x3e73a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7360u; }
        if (ctx->pc != 0x3E7360u) { return; }
    }
    ctx->pc = 0x3E7360u;
label_3e7360:
    // 0x3e7360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e7360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7364: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x3E7364u;
    SET_GPR_U32(ctx, 31, 0x3E736Cu);
    ctx->pc = 0x3E7368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7364u;
            // 0x3e7368: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E736Cu; }
        if (ctx->pc != 0x3E736Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E736Cu; }
        if (ctx->pc != 0x3E736Cu) { return; }
    }
    ctx->pc = 0x3E736Cu;
label_3e736c:
    // 0x3e736c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3e736cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x3e7370: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3e7370u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3e7374: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E7374u;
    {
        const bool branch_taken_0x3e7374 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3e7374) {
            ctx->pc = 0x3E7378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7374u;
            // 0x3e7378: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E7388u;
            goto label_3e7388;
        }
    }
    ctx->pc = 0x3E737Cu;
    // 0x3e737c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3E737Cu;
    SET_GPR_U32(ctx, 31, 0x3E7384u);
    ctx->pc = 0x3E7380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E737Cu;
            // 0x3e7380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7384u; }
        if (ctx->pc != 0x3E7384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E7384u; }
        if (ctx->pc != 0x3E7384u) { return; }
    }
    ctx->pc = 0x3E7384u;
label_3e7384:
    // 0x3e7384: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3e7384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e7388:
    // 0x3e7388: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e7388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e738c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e738cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e7390: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e7390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e7394: 0x3e00008  jr          $ra
    ctx->pc = 0x3E7394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E7398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E7394u;
            // 0x3e7398: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E739Cu;
    // 0x3e739c: 0x0  nop
    ctx->pc = 0x3e739cu;
    // NOP
}
