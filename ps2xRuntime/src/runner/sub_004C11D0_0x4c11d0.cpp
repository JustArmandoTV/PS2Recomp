#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C11D0
// Address: 0x4c11d0 - 0x4c1370
void sub_004C11D0_0x4c11d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C11D0_0x4c11d0");
#endif

    switch (ctx->pc) {
        case 0x4c11ecu: goto label_4c11ec;
        case 0x4c120cu: goto label_4c120c;
        case 0x4c1264u: goto label_4c1264;
        case 0x4c1280u: goto label_4c1280;
        case 0x4c12a0u: goto label_4c12a0;
        case 0x4c1300u: goto label_4c1300;
        case 0x4c130cu: goto label_4c130c;
        case 0x4c1318u: goto label_4c1318;
        case 0x4c1324u: goto label_4c1324;
        case 0x4c1330u: goto label_4c1330;
        case 0x4c133cu: goto label_4c133c;
        case 0x4c1354u: goto label_4c1354;
        default: break;
    }

    ctx->pc = 0x4c11d0u;

    // 0x4c11d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c11d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4c11d4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4c11d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4c11d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c11d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4c11dc: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x4c11dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x4c11e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c11e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4c11e4: 0xc130514  jal         func_4C1450
    ctx->pc = 0x4C11E4u;
    SET_GPR_U32(ctx, 31, 0x4C11ECu);
    ctx->pc = 0x4C11E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C11E4u;
            // 0x4c11e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C1450u;
    if (runtime->hasFunction(0x4C1450u)) {
        auto targetFn = runtime->lookupFunction(0x4C1450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C11ECu; }
        if (ctx->pc != 0x4C11ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C1450_0x4c1450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C11ECu; }
        if (ctx->pc != 0x4C11ECu) { return; }
    }
    ctx->pc = 0x4C11ECu;
label_4c11ec:
    // 0x4c11ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c11ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4c11f0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c11f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4c11f4: 0x246313f0  addiu       $v1, $v1, 0x13F0
    ctx->pc = 0x4c11f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5104));
    // 0x4c11f8: 0x24421428  addiu       $v0, $v0, 0x1428
    ctx->pc = 0x4c11f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5160));
    // 0x4c11fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c11fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c1200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c1200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c1204: 0xc130510  jal         func_4C1440
    ctx->pc = 0x4C1204u;
    SET_GPR_U32(ctx, 31, 0x4C120Cu);
    ctx->pc = 0x4C1208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1204u;
            // 0x4c1208: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C1440u;
    if (runtime->hasFunction(0x4C1440u)) {
        auto targetFn = runtime->lookupFunction(0x4C1440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C120Cu; }
        if (ctx->pc != 0x4C120Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C1440_0x4c1440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C120Cu; }
        if (ctx->pc != 0x4C120Cu) { return; }
    }
    ctx->pc = 0x4C120Cu;
label_4c120c:
    // 0x4c120c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4c120cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4c1210: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4c1210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x4c1214: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c1214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4c1218: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4c1218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4c121c: 0x24421290  addiu       $v0, $v0, 0x1290
    ctx->pc = 0x4c121cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4752));
    // 0x4c1220: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4c1220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4c1224: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4c1224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4c1228: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c1228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4c122c: 0x244212c8  addiu       $v0, $v0, 0x12C8
    ctx->pc = 0x4c122cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4808));
    // 0x4c1230: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4c1230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4c1234: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4c1234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4c1238: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x4c1238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x4c123c: 0xc4407050  lwc1        $f0, 0x7050($v0)
    ctx->pc = 0x4c123cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4c1240: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4c1240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x4c1244: 0xc4417054  lwc1        $f1, 0x7054($v0)
    ctx->pc = 0x4c1244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4c1248: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4c1248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x4c124c: 0xc4607058  lwc1        $f0, 0x7058($v1)
    ctx->pc = 0x4c124cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4c1250: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c1250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4c1254: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4c1254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x4c1258: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x4c1258u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x4c125c: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x4C125Cu;
    SET_GPR_U32(ctx, 31, 0x4C1264u);
    ctx->pc = 0x4C1260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C125Cu;
            // 0x4c1260: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1264u; }
        if (ctx->pc != 0x4C1264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1264u; }
        if (ctx->pc != 0x4C1264u) { return; }
    }
    ctx->pc = 0x4C1264u;
label_4c1264:
    // 0x4c1264: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4c1264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4c1268: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c1268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c126c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C126Cu;
    {
        const bool branch_taken_0x4c126c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C1270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C126Cu;
            // 0x4c1270: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c126c) {
            ctx->pc = 0x4C1284u;
            goto label_4c1284;
        }
    }
    ctx->pc = 0x4C1274u;
    // 0x4c1274: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4c1274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4c1278: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x4C1278u;
    SET_GPR_U32(ctx, 31, 0x4C1280u);
    ctx->pc = 0x4C127Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1278u;
            // 0x4c127c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1280u; }
        if (ctx->pc != 0x4C1280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1280u; }
        if (ctx->pc != 0x4C1280u) { return; }
    }
    ctx->pc = 0x4C1280u;
label_4c1280:
    // 0x4c1280: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c1280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c1284:
    // 0x4c1284: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x4c1284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x4c1288: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4c1288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c128c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c128cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c1290: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c1290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c1294: 0x3e00008  jr          $ra
    ctx->pc = 0x4C1294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C1298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1294u;
            // 0x4c1298: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C129Cu;
    // 0x4c129c: 0x0  nop
    ctx->pc = 0x4c129cu;
    // NOP
label_4c12a0:
    // 0x4c12a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c12a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4c12a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c12a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4c12a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c12a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4c12ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c12acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4c12b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4c12b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c12b4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4C12B4u;
    {
        const bool branch_taken_0x4c12b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C12B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C12B4u;
            // 0x4c12b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c12b4) {
            ctx->pc = 0x4C1354u;
            goto label_4c1354;
        }
    }
    ctx->pc = 0x4C12BCu;
    // 0x4c12bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c12bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4c12c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c12c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4c12c4: 0x246313f0  addiu       $v1, $v1, 0x13F0
    ctx->pc = 0x4c12c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5104));
    // 0x4c12c8: 0x24421428  addiu       $v0, $v0, 0x1428
    ctx->pc = 0x4c12c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5160));
    // 0x4c12cc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c12ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c12d0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4C12D0u;
    {
        const bool branch_taken_0x4c12d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C12D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C12D0u;
            // 0x4c12d4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c12d0) {
            ctx->pc = 0x4C133Cu;
            goto label_4c133c;
        }
    }
    ctx->pc = 0x4C12D8u;
    // 0x4c12d8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c12d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4c12dc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c12dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4c12e0: 0x246313a0  addiu       $v1, $v1, 0x13A0
    ctx->pc = 0x4c12e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5024));
    // 0x4c12e4: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x4c12e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x4c12e8: 0x244213d8  addiu       $v0, $v0, 0x13D8
    ctx->pc = 0x4c12e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5080));
    // 0x4c12ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4c12ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4c12f0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4c12f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4c12f4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4c12f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4c12f8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x4C12F8u;
    SET_GPR_U32(ctx, 31, 0x4C1300u);
    ctx->pc = 0x4C12FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C12F8u;
            // 0x4c12fc: 0x24a50e90  addiu       $a1, $a1, 0xE90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1300u; }
        if (ctx->pc != 0x4C1300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1300u; }
        if (ctx->pc != 0x4C1300u) { return; }
    }
    ctx->pc = 0x4C1300u;
label_4c1300:
    // 0x4c1300: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4c1300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x4c1304: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x4C1304u;
    SET_GPR_U32(ctx, 31, 0x4C130Cu);
    ctx->pc = 0x4C1308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1304u;
            // 0x4c1308: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C130Cu; }
        if (ctx->pc != 0x4C130Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C130Cu; }
        if (ctx->pc != 0x4C130Cu) { return; }
    }
    ctx->pc = 0x4C130Cu;
label_4c130c:
    // 0x4c130c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4c130cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4c1310: 0xc1304f4  jal         func_4C13D0
    ctx->pc = 0x4C1310u;
    SET_GPR_U32(ctx, 31, 0x4C1318u);
    ctx->pc = 0x4C1314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1310u;
            // 0x4c1314: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C13D0u;
    if (runtime->hasFunction(0x4C13D0u)) {
        auto targetFn = runtime->lookupFunction(0x4C13D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1318u; }
        if (ctx->pc != 0x4C1318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C13D0_0x4c13d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1318u; }
        if (ctx->pc != 0x4C1318u) { return; }
    }
    ctx->pc = 0x4C1318u;
label_4c1318:
    // 0x4c1318: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4c1318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4c131c: 0xc1304f4  jal         func_4C13D0
    ctx->pc = 0x4C131Cu;
    SET_GPR_U32(ctx, 31, 0x4C1324u);
    ctx->pc = 0x4C1320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C131Cu;
            // 0x4c1320: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C13D0u;
    if (runtime->hasFunction(0x4C13D0u)) {
        auto targetFn = runtime->lookupFunction(0x4C13D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1324u; }
        if (ctx->pc != 0x4C1324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C13D0_0x4c13d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1324u; }
        if (ctx->pc != 0x4C1324u) { return; }
    }
    ctx->pc = 0x4C1324u;
label_4c1324:
    // 0x4c1324: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4c1324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4c1328: 0xc1304dc  jal         func_4C1370
    ctx->pc = 0x4C1328u;
    SET_GPR_U32(ctx, 31, 0x4C1330u);
    ctx->pc = 0x4C132Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1328u;
            // 0x4c132c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C1370u;
    if (runtime->hasFunction(0x4C1370u)) {
        auto targetFn = runtime->lookupFunction(0x4C1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1330u; }
        if (ctx->pc != 0x4C1330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C1370_0x4c1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1330u; }
        if (ctx->pc != 0x4C1330u) { return; }
    }
    ctx->pc = 0x4C1330u;
label_4c1330:
    // 0x4c1330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c1330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c1334: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x4C1334u;
    SET_GPR_U32(ctx, 31, 0x4C133Cu);
    ctx->pc = 0x4C1338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1334u;
            // 0x4c1338: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C133Cu; }
        if (ctx->pc != 0x4C133Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C133Cu; }
        if (ctx->pc != 0x4C133Cu) { return; }
    }
    ctx->pc = 0x4C133Cu;
label_4c133c:
    // 0x4c133c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4c133cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4c1340: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4c1340u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4c1344: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C1344u;
    {
        const bool branch_taken_0x4c1344 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4c1344) {
            ctx->pc = 0x4C1348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1344u;
            // 0x4c1348: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C1358u;
            goto label_4c1358;
        }
    }
    ctx->pc = 0x4C134Cu;
    // 0x4c134c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4C134Cu;
    SET_GPR_U32(ctx, 31, 0x4C1354u);
    ctx->pc = 0x4C1350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C134Cu;
            // 0x4c1350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1354u; }
        if (ctx->pc != 0x4C1354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C1354u; }
        if (ctx->pc != 0x4C1354u) { return; }
    }
    ctx->pc = 0x4C1354u;
label_4c1354:
    // 0x4c1354: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4c1354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c1358:
    // 0x4c1358: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c1358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c135c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c135cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c1360: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c1360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c1364: 0x3e00008  jr          $ra
    ctx->pc = 0x4C1364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C1368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C1364u;
            // 0x4c1368: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C136Cu;
    // 0x4c136c: 0x0  nop
    ctx->pc = 0x4c136cu;
    // NOP
}
