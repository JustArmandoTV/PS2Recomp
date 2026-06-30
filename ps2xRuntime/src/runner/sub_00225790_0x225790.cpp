#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00225790
// Address: 0x225790 - 0x2258e0
void sub_00225790_0x225790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225790_0x225790");
#endif

    switch (ctx->pc) {
        case 0x225790u: goto label_225790;
        case 0x225794u: goto label_225794;
        case 0x225798u: goto label_225798;
        case 0x22579cu: goto label_22579c;
        case 0x2257a0u: goto label_2257a0;
        case 0x2257a4u: goto label_2257a4;
        case 0x2257a8u: goto label_2257a8;
        case 0x2257acu: goto label_2257ac;
        case 0x2257b0u: goto label_2257b0;
        case 0x2257b4u: goto label_2257b4;
        case 0x2257b8u: goto label_2257b8;
        case 0x2257bcu: goto label_2257bc;
        case 0x2257c0u: goto label_2257c0;
        case 0x2257c4u: goto label_2257c4;
        case 0x2257c8u: goto label_2257c8;
        case 0x2257ccu: goto label_2257cc;
        case 0x2257d0u: goto label_2257d0;
        case 0x2257d4u: goto label_2257d4;
        case 0x2257d8u: goto label_2257d8;
        case 0x2257dcu: goto label_2257dc;
        case 0x2257e0u: goto label_2257e0;
        case 0x2257e4u: goto label_2257e4;
        case 0x2257e8u: goto label_2257e8;
        case 0x2257ecu: goto label_2257ec;
        case 0x2257f0u: goto label_2257f0;
        case 0x2257f4u: goto label_2257f4;
        case 0x2257f8u: goto label_2257f8;
        case 0x2257fcu: goto label_2257fc;
        case 0x225800u: goto label_225800;
        case 0x225804u: goto label_225804;
        case 0x225808u: goto label_225808;
        case 0x22580cu: goto label_22580c;
        case 0x225810u: goto label_225810;
        case 0x225814u: goto label_225814;
        case 0x225818u: goto label_225818;
        case 0x22581cu: goto label_22581c;
        case 0x225820u: goto label_225820;
        case 0x225824u: goto label_225824;
        case 0x225828u: goto label_225828;
        case 0x22582cu: goto label_22582c;
        case 0x225830u: goto label_225830;
        case 0x225834u: goto label_225834;
        case 0x225838u: goto label_225838;
        case 0x22583cu: goto label_22583c;
        case 0x225840u: goto label_225840;
        case 0x225844u: goto label_225844;
        case 0x225848u: goto label_225848;
        case 0x22584cu: goto label_22584c;
        case 0x225850u: goto label_225850;
        case 0x225854u: goto label_225854;
        case 0x225858u: goto label_225858;
        case 0x22585cu: goto label_22585c;
        case 0x225860u: goto label_225860;
        case 0x225864u: goto label_225864;
        case 0x225868u: goto label_225868;
        case 0x22586cu: goto label_22586c;
        case 0x225870u: goto label_225870;
        case 0x225874u: goto label_225874;
        case 0x225878u: goto label_225878;
        case 0x22587cu: goto label_22587c;
        case 0x225880u: goto label_225880;
        case 0x225884u: goto label_225884;
        case 0x225888u: goto label_225888;
        case 0x22588cu: goto label_22588c;
        case 0x225890u: goto label_225890;
        case 0x225894u: goto label_225894;
        case 0x225898u: goto label_225898;
        case 0x22589cu: goto label_22589c;
        case 0x2258a0u: goto label_2258a0;
        case 0x2258a4u: goto label_2258a4;
        case 0x2258a8u: goto label_2258a8;
        case 0x2258acu: goto label_2258ac;
        case 0x2258b0u: goto label_2258b0;
        case 0x2258b4u: goto label_2258b4;
        case 0x2258b8u: goto label_2258b8;
        case 0x2258bcu: goto label_2258bc;
        case 0x2258c0u: goto label_2258c0;
        case 0x2258c4u: goto label_2258c4;
        case 0x2258c8u: goto label_2258c8;
        case 0x2258ccu: goto label_2258cc;
        case 0x2258d0u: goto label_2258d0;
        case 0x2258d4u: goto label_2258d4;
        case 0x2258d8u: goto label_2258d8;
        case 0x2258dcu: goto label_2258dc;
        default: break;
    }

    ctx->pc = 0x225790u;

label_225790:
    // 0x225790: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x225790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_225794:
    // 0x225794: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x225794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_225798:
    // 0x225798: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x225798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_22579c:
    // 0x22579c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x22579cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2257a0:
    // 0x2257a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2257a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2257a4:
    // 0x2257a4: 0x2463d420  addiu       $v1, $v1, -0x2BE0
    ctx->pc = 0x2257a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956064));
label_2257a8:
    // 0x2257a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2257a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2257ac:
    // 0x2257ac: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x2257acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_2257b0:
    // 0x2257b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2257b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2257b4:
    // 0x2257b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2257b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2257b8:
    // 0x2257b8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2257b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2257bc:
    // 0x2257bc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2257bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2257c0:
    // 0x2257c0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2257c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2257c4:
    // 0x2257c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2257c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2257c8:
    // 0x2257c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2257c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2257cc:
    // 0x2257cc: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x2257ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_2257d0:
    // 0x2257d0: 0x2442ec30  addiu       $v0, $v0, -0x13D0
    ctx->pc = 0x2257d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962224));
label_2257d4:
    // 0x2257d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2257d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2257d8:
    // 0x2257d8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2257d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2257dc:
    // 0x2257dc: 0xac8000ec  sw          $zero, 0xEC($a0)
    ctx->pc = 0x2257dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 236), GPR_U32(ctx, 0));
label_2257e0:
    // 0x2257e0: 0xac8000e8  sw          $zero, 0xE8($a0)
    ctx->pc = 0x2257e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 0));
label_2257e4:
    // 0x2257e4: 0xac8000e4  sw          $zero, 0xE4($a0)
    ctx->pc = 0x2257e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
label_2257e8:
    // 0x2257e8: 0xac8000e0  sw          $zero, 0xE0($a0)
    ctx->pc = 0x2257e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
label_2257ec:
    // 0x2257ec: 0xac8000fc  sw          $zero, 0xFC($a0)
    ctx->pc = 0x2257ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 0));
label_2257f0:
    // 0x2257f0: 0xac8000f8  sw          $zero, 0xF8($a0)
    ctx->pc = 0x2257f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 0));
label_2257f4:
    // 0x2257f4: 0xac8000f4  sw          $zero, 0xF4($a0)
    ctx->pc = 0x2257f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 0));
label_2257f8:
    // 0x2257f8: 0xac8000f0  sw          $zero, 0xF0($a0)
    ctx->pc = 0x2257f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 240), GPR_U32(ctx, 0));
label_2257fc:
    // 0x2257fc: 0xc0a31c8  jal         func_28C720
label_225800:
    if (ctx->pc == 0x225800u) {
        ctx->pc = 0x225800u;
            // 0x225800: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x225804u;
        goto label_225804;
    }
    ctx->pc = 0x2257FCu;
    SET_GPR_U32(ctx, 31, 0x225804u);
    ctx->pc = 0x225800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2257FCu;
            // 0x225800: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C720u;
    if (runtime->hasFunction(0x28C720u)) {
        auto targetFn = runtime->lookupFunction(0x28C720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225804u; }
        if (ctx->pc != 0x225804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C720_0x28c720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225804u; }
        if (ctx->pc != 0x225804u) { return; }
    }
    ctx->pc = 0x225804u;
label_225804:
    // 0x225804: 0xae4000bc  sw          $zero, 0xBC($s2)
    ctx->pc = 0x225804u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
label_225808:
    // 0x225808: 0xae4000c0  sw          $zero, 0xC0($s2)
    ctx->pc = 0x225808u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 0));
label_22580c:
    // 0x22580c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_225810:
    if (ctx->pc == 0x225810u) {
        ctx->pc = 0x225810u;
            // 0x225810: 0xa2400008  sb          $zero, 0x8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x225814u;
        goto label_225814;
    }
    ctx->pc = 0x22580Cu;
    {
        const bool branch_taken_0x22580c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x225810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22580Cu;
            // 0x225810: 0xa2400008  sb          $zero, 0x8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22580c) {
            ctx->pc = 0x225830u;
            goto label_225830;
        }
    }
    ctx->pc = 0x225814u;
label_225814:
    // 0x225814: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x225814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_225818:
    // 0x225818: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x225818u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_22581c:
    // 0x22581c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x22581cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_225820:
    // 0x225820: 0x0  nop
    ctx->pc = 0x225820u;
    // NOP
label_225824:
    // 0x225824: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x225824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_225828:
    // 0x225828: 0x10000003  b           . + 4 + (0x3 << 2)
label_22582c:
    if (ctx->pc == 0x22582Cu) {
        ctx->pc = 0x22582Cu;
            // 0x22582c: 0xa2420009  sb          $v0, 0x9($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x225830u;
        goto label_225830;
    }
    ctx->pc = 0x225828u;
    {
        const bool branch_taken_0x225828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22582Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225828u;
            // 0x22582c: 0xa2420009  sb          $v0, 0x9($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225828) {
            ctx->pc = 0x225838u;
            goto label_225838;
        }
    }
    ctx->pc = 0x225830u;
label_225830:
    // 0x225830: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x225830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_225834:
    // 0x225834: 0xa2420009  sb          $v0, 0x9($s2)
    ctx->pc = 0x225834u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 2));
label_225838:
    // 0x225838: 0xa640000a  sh          $zero, 0xA($s2)
    ctx->pc = 0x225838u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 0));
label_22583c:
    // 0x22583c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x22583cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_225840:
    // 0x225840: 0xa640000c  sh          $zero, 0xC($s2)
    ctx->pc = 0x225840u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 0));
label_225844:
    // 0x225844: 0xae40010c  sw          $zero, 0x10C($s2)
    ctx->pc = 0x225844u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 0));
label_225848:
    // 0x225848: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x225848u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
label_22584c:
    // 0x22584c: 0xae400104  sw          $zero, 0x104($s2)
    ctx->pc = 0x22584cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 0));
label_225850:
    // 0x225850: 0xae400100  sw          $zero, 0x100($s2)
    ctx->pc = 0x225850u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 0));
label_225854:
    // 0x225854: 0xae40011c  sw          $zero, 0x11C($s2)
    ctx->pc = 0x225854u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 284), GPR_U32(ctx, 0));
label_225858:
    // 0x225858: 0xae400118  sw          $zero, 0x118($s2)
    ctx->pc = 0x225858u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 0));
label_22585c:
    // 0x22585c: 0xae400114  sw          $zero, 0x114($s2)
    ctx->pc = 0x22585cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 0));
label_225860:
    // 0x225860: 0xae400110  sw          $zero, 0x110($s2)
    ctx->pc = 0x225860u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 0));
label_225864:
    // 0x225864: 0xae4000c8  sw          $zero, 0xC8($s2)
    ctx->pc = 0x225864u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 0));
label_225868:
    // 0x225868: 0xae4000cc  sw          $zero, 0xCC($s2)
    ctx->pc = 0x225868u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 0));
label_22586c:
    // 0x22586c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22586cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_225870:
    // 0x225870: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x225870u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_225874:
    // 0x225874: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x225874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_225878:
    // 0x225878: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x225878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22587c:
    // 0x22587c: 0x3e00008  jr          $ra
label_225880:
    if (ctx->pc == 0x225880u) {
        ctx->pc = 0x225880u;
            // 0x225880: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x225884u;
        goto label_225884;
    }
    ctx->pc = 0x22587Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22587Cu;
            // 0x225880: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225884u;
label_225884:
    // 0x225884: 0x0  nop
    ctx->pc = 0x225884u;
    // NOP
label_225888:
    // 0x225888: 0x0  nop
    ctx->pc = 0x225888u;
    // NOP
label_22588c:
    // 0x22588c: 0x0  nop
    ctx->pc = 0x22588cu;
    // NOP
label_225890:
    // 0x225890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_225894:
    // 0x225894: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x225894u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_225898:
    // 0x225898: 0x0  nop
    ctx->pc = 0x225898u;
    // NOP
label_22589c:
    // 0x22589c: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x22589cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2258a0:
    // 0x2258a0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2258a4:
    if (ctx->pc == 0x2258A4u) {
        ctx->pc = 0x2258A4u;
            // 0x2258a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x2258A8u;
        goto label_2258a8;
    }
    ctx->pc = 0x2258A0u;
    {
        const bool branch_taken_0x2258a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2258A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2258A0u;
            // 0x2258a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2258a0) {
            ctx->pc = 0x2258B0u;
            goto label_2258b0;
        }
    }
    ctx->pc = 0x2258A8u;
label_2258a8:
    // 0x2258a8: 0x10000006  b           . + 4 + (0x6 << 2)
label_2258ac:
    if (ctx->pc == 0x2258ACu) {
        ctx->pc = 0x2258ACu;
            // 0x2258ac: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x2258B0u;
        goto label_2258b0;
    }
    ctx->pc = 0x2258A8u;
    {
        const bool branch_taken_0x2258a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2258ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2258A8u;
            // 0x2258ac: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2258a8) {
            ctx->pc = 0x2258C4u;
            goto label_2258c4;
        }
    }
    ctx->pc = 0x2258B0u;
label_2258b0:
    // 0x2258b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2258b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2258b4:
    // 0x2258b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2258b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2258b8:
    // 0x2258b8: 0x0  nop
    ctx->pc = 0x2258b8u;
    // NOP
label_2258bc:
    // 0x2258bc: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x2258bcu;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[12];
label_2258c0:
    // 0x2258c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2258c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2258c4:
    // 0x2258c4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2258c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2258c8:
    // 0x2258c8: 0x320f809  jalr        $t9
label_2258cc:
    if (ctx->pc == 0x2258CCu) {
        ctx->pc = 0x2258CCu;
            // 0x2258cc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2258D0u;
        goto label_2258d0;
    }
    ctx->pc = 0x2258C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2258D0u);
        ctx->pc = 0x2258CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2258C8u;
            // 0x2258cc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2258D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2258D0u; }
            if (ctx->pc != 0x2258D0u) { return; }
        }
        }
    }
    ctx->pc = 0x2258D0u;
label_2258d0:
    // 0x2258d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2258d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2258d4:
    // 0x2258d4: 0x3e00008  jr          $ra
label_2258d8:
    if (ctx->pc == 0x2258D8u) {
        ctx->pc = 0x2258D8u;
            // 0x2258d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2258DCu;
        goto label_2258dc;
    }
    ctx->pc = 0x2258D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2258D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2258D4u;
            // 0x2258d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2258DCu;
label_2258dc:
    // 0x2258dc: 0x0  nop
    ctx->pc = 0x2258dcu;
    // NOP
}
