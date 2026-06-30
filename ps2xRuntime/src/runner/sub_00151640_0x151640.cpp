#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00151640
// Address: 0x151640 - 0x151900
void sub_00151640_0x151640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151640_0x151640");
#endif

    switch (ctx->pc) {
        case 0x151774u: goto label_151774;
        case 0x151790u: goto label_151790;
        case 0x151824u: goto label_151824;
        case 0x15183cu: goto label_15183c;
        case 0x15187cu: goto label_15187c;
        case 0x1518b4u: goto label_1518b4;
        case 0x1518ccu: goto label_1518cc;
        default: break;
    }

    ctx->pc = 0x151640u;

    // 0x151640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x151640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x151644: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x151644u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151648: 0x108000a7  beqz        $a0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x151648u;
    {
        const bool branch_taken_0x151648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15164Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151648u;
            // 0x15164c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151648) {
            ctx->pc = 0x1518E8u;
            goto label_1518e8;
        }
    }
    ctx->pc = 0x151650u;
    // 0x151650: 0x530000a6  beql        $t8, $zero, . + 4 + (0xA6 << 2)
    ctx->pc = 0x151650u;
    {
        const bool branch_taken_0x151650 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        if (branch_taken_0x151650) {
            ctx->pc = 0x151654u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151650u;
            // 0x151654: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1518ECu;
            goto label_1518ec;
        }
    }
    ctx->pc = 0x151658u;
    // 0x151658: 0xc7020000  lwc1        $f2, 0x0($t8)
    ctx->pc = 0x151658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15165c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15165cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x151660: 0xc7010004  lwc1        $f1, 0x4($t8)
    ctx->pc = 0x151660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151664: 0xc7000008  lwc1        $f0, 0x8($t8)
    ctx->pc = 0x151664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151668: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x151668u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x15166c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x15166cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x151670: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x151670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x151674: 0xc700000c  lwc1        $f0, 0xC($t8)
    ctx->pc = 0x151674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151678: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x151678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x15167c: 0x8f050010  lw          $a1, 0x10($t8)
    ctx->pc = 0x15167cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16)));
    // 0x151680: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x151680u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x151684: 0x8f050014  lw          $a1, 0x14($t8)
    ctx->pc = 0x151684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x151688: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x151688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x15168c: 0x8f050018  lw          $a1, 0x18($t8)
    ctx->pc = 0x15168cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 24)));
    // 0x151690: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x151690u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x151694: 0x8f05001c  lw          $a1, 0x1C($t8)
    ctx->pc = 0x151694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 28)));
    // 0x151698: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x151698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x15169c: 0x8f050020  lw          $a1, 0x20($t8)
    ctx->pc = 0x15169cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 32)));
    // 0x1516a0: 0xac850020  sw          $a1, 0x20($a0)
    ctx->pc = 0x1516a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
    // 0x1516a4: 0x8f050024  lw          $a1, 0x24($t8)
    ctx->pc = 0x1516a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 36)));
    // 0x1516a8: 0xac850024  sw          $a1, 0x24($a0)
    ctx->pc = 0x1516a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 5));
    // 0x1516ac: 0x8f050028  lw          $a1, 0x28($t8)
    ctx->pc = 0x1516acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 40)));
    // 0x1516b0: 0xac850028  sw          $a1, 0x28($a0)
    ctx->pc = 0x1516b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
    // 0x1516b4: 0x8f05002c  lw          $a1, 0x2C($t8)
    ctx->pc = 0x1516b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 44)));
    // 0x1516b8: 0xac85002c  sw          $a1, 0x2C($a0)
    ctx->pc = 0x1516b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
    // 0x1516bc: 0x8f050030  lw          $a1, 0x30($t8)
    ctx->pc = 0x1516bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 48)));
    // 0x1516c0: 0xac850030  sw          $a1, 0x30($a0)
    ctx->pc = 0x1516c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
    // 0x1516c4: 0x8f050034  lw          $a1, 0x34($t8)
    ctx->pc = 0x1516c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 52)));
    // 0x1516c8: 0xac850034  sw          $a1, 0x34($a0)
    ctx->pc = 0x1516c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
    // 0x1516cc: 0x8f050038  lw          $a1, 0x38($t8)
    ctx->pc = 0x1516ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 56)));
    // 0x1516d0: 0xac850038  sw          $a1, 0x38($a0)
    ctx->pc = 0x1516d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
    // 0x1516d4: 0x8f05003c  lw          $a1, 0x3C($t8)
    ctx->pc = 0x1516d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 60)));
    // 0x1516d8: 0xac85003c  sw          $a1, 0x3C($a0)
    ctx->pc = 0x1516d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 5));
    // 0x1516dc: 0x8f050040  lw          $a1, 0x40($t8)
    ctx->pc = 0x1516dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 64)));
    // 0x1516e0: 0xac850040  sw          $a1, 0x40($a0)
    ctx->pc = 0x1516e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 5));
    // 0x1516e4: 0x8f050044  lw          $a1, 0x44($t8)
    ctx->pc = 0x1516e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 68)));
    // 0x1516e8: 0xac850044  sw          $a1, 0x44($a0)
    ctx->pc = 0x1516e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 5));
    // 0x1516ec: 0x8f050048  lw          $a1, 0x48($t8)
    ctx->pc = 0x1516ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 72)));
    // 0x1516f0: 0xac850048  sw          $a1, 0x48($a0)
    ctx->pc = 0x1516f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 5));
    // 0x1516f4: 0xc700004c  lwc1        $f0, 0x4C($t8)
    ctx->pc = 0x1516f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1516f8: 0xe480004c  swc1        $f0, 0x4C($a0)
    ctx->pc = 0x1516f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x1516fc: 0xc7000050  lwc1        $f0, 0x50($t8)
    ctx->pc = 0x1516fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151700: 0xe4800050  swc1        $f0, 0x50($a0)
    ctx->pc = 0x151700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x151704: 0xc7000054  lwc1        $f0, 0x54($t8)
    ctx->pc = 0x151704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151708: 0xe4800054  swc1        $f0, 0x54($a0)
    ctx->pc = 0x151708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x15170c: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x15170cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x151710: 0x50a30009  beql        $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x151710u;
    {
        const bool branch_taken_0x151710 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x151710) {
            ctx->pc = 0x151714u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151710u;
            // 0x151714: 0x8c830044  lw          $v1, 0x44($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151738u;
            goto label_151738;
        }
    }
    ctx->pc = 0x151718u;
    // 0x151718: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x151718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15171c: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15171Cu;
    {
        const bool branch_taken_0x15171c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x15171c) {
            ctx->pc = 0x151734u;
            goto label_151734;
        }
    }
    ctx->pc = 0x151724u;
    // 0x151724: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x151724u;
    {
        const bool branch_taken_0x151724 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x151724) {
            ctx->pc = 0x151728u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151724u;
            // 0x151728: 0x24830058  addiu       $v1, $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151744u;
            goto label_151744;
        }
    }
    ctx->pc = 0x15172Cu;
    // 0x15172c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15172Cu;
    {
        const bool branch_taken_0x15172c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15172Cu;
            // 0x151730: 0xac800048  sw          $zero, 0x48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15172c) {
            ctx->pc = 0x151740u;
            goto label_151740;
        }
    }
    ctx->pc = 0x151734u;
label_151734:
    // 0x151734: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x151734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_151738:
    // 0x151738: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x151738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x15173c: 0xac830044  sw          $v1, 0x44($a0)
    ctx->pc = 0x15173cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
label_151740:
    // 0x151740: 0x24830058  addiu       $v1, $a0, 0x58
    ctx->pc = 0x151740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
label_151744:
    // 0x151744: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x151744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x151748: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x151748u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x15174c: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x15174cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x151750: 0x8f070014  lw          $a3, 0x14($t8)
    ctx->pc = 0x151750u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 20)));
    // 0x151754: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x151754u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x151758: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x151758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15175c: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x15175cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x151760: 0x10c00043  beqz        $a2, . + 4 + (0x43 << 2)
    ctx->pc = 0x151760u;
    {
        const bool branch_taken_0x151760 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x151764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151760u;
            // 0x151764: 0x852024  and         $a0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151760) {
            ctx->pc = 0x151870u;
            goto label_151870;
        }
    }
    ctx->pc = 0x151768u;
    // 0x151768: 0x8f050010  lw          $a1, 0x10($t8)
    ctx->pc = 0x151768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16)));
    // 0x15176c: 0x18a0005e  blez        $a1, . + 4 + (0x5E << 2)
    ctx->pc = 0x15176Cu;
    {
        const bool branch_taken_0x15176c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x151770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15176Cu;
            // 0x151770: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15176c) {
            ctx->pc = 0x1518E8u;
            goto label_1518e8;
        }
    }
    ctx->pc = 0x151774u;
label_151774:
    // 0x151774: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x151774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x151778: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x151778u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x15177c: 0x8cc9000c  lw          $t1, 0xC($a2)
    ctx->pc = 0x15177cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x151780: 0x8cca0010  lw          $t2, 0x10($a2)
    ctx->pc = 0x151780u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x151784: 0x19200016  blez        $t1, . + 4 + (0x16 << 2)
    ctx->pc = 0x151784u;
    {
        const bool branch_taken_0x151784 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x151788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151784u;
            // 0x151788: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151784) {
            ctx->pc = 0x1517E0u;
            goto label_1517e0;
        }
    }
    ctx->pc = 0x15178Cu;
    // 0x15178c: 0x3c0801e0  lui         $t0, 0x1E0
    ctx->pc = 0x15178cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)480 << 16));
label_151790:
    // 0x151790: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x151790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x151794: 0xa82824  and         $a1, $a1, $t0
    ctx->pc = 0x151794u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x151798: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x151798u;
    {
        const bool branch_taken_0x151798 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x151798) {
            ctx->pc = 0x1517B8u;
            goto label_1517b8;
        }
    }
    ctx->pc = 0x1517A0u;
    // 0x1517a0: 0x85450008  lh          $a1, 0x8($t2)
    ctx->pc = 0x1517a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x1517a4: 0x15e5000a  bne         $t7, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1517A4u;
    {
        const bool branch_taken_0x1517a4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 5));
        if (branch_taken_0x1517a4) {
            ctx->pc = 0x1517D0u;
            goto label_1517d0;
        }
    }
    ctx->pc = 0x1517ACu;
    // 0x1517ac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1517ACu;
    {
        const bool branch_taken_0x1517ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1517B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1517ACu;
            // 0x1517b0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1517ac) {
            ctx->pc = 0x1517E8u;
            goto label_1517e8;
        }
    }
    ctx->pc = 0x1517B4u;
    // 0x1517b4: 0x0  nop
    ctx->pc = 0x1517b4u;
    // NOP
label_1517b8:
    // 0x1517b8: 0x8d450008  lw          $a1, 0x8($t2)
    ctx->pc = 0x1517b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x1517bc: 0x15e50004  bne         $t7, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1517BCu;
    {
        const bool branch_taken_0x1517bc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 5));
        if (branch_taken_0x1517bc) {
            ctx->pc = 0x1517D0u;
            goto label_1517d0;
        }
    }
    ctx->pc = 0x1517C4u;
    // 0x1517c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1517C4u;
    {
        const bool branch_taken_0x1517c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1517C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1517C4u;
            // 0x1517c8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1517c4) {
            ctx->pc = 0x1517E8u;
            goto label_1517e8;
        }
    }
    ctx->pc = 0x1517CCu;
    // 0x1517cc: 0x0  nop
    ctx->pc = 0x1517ccu;
    // NOP
label_1517d0:
    // 0x1517d0: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1517d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1517d4: 0x169282a  slt         $a1, $t3, $t1
    ctx->pc = 0x1517d4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1517d8: 0x14a0ffed  bnez        $a1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1517D8u;
    {
        const bool branch_taken_0x1517d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1517DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1517D8u;
            // 0x1517dc: 0x254a0028  addiu       $t2, $t2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1517d8) {
            ctx->pc = 0x151790u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_151790;
        }
    }
    ctx->pc = 0x1517E0u;
label_1517e0:
    // 0x1517e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1517e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1517e4: 0x0  nop
    ctx->pc = 0x1517e4u;
    // NOP
label_1517e8:
    // 0x1517e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1517e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1517ec: 0x15050016  bne         $t0, $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1517ECu;
    {
        const bool branch_taken_0x1517ec = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        if (branch_taken_0x1517ec) {
            ctx->pc = 0x151848u;
            goto label_151848;
        }
    }
    ctx->pc = 0x1517F4u;
    // 0x1517f4: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x1517f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1517f8: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x1517f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1517fc: 0x1105000c  beq         $t0, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1517FCu;
    {
        const bool branch_taken_0x1517fc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        if (branch_taken_0x1517fc) {
            ctx->pc = 0x151830u;
            goto label_151830;
        }
    }
    ctx->pc = 0x151804u;
    // 0x151804: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x151804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x151808: 0x11050003  beq         $t0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x151808u;
    {
        const bool branch_taken_0x151808 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        if (branch_taken_0x151808) {
            ctx->pc = 0x151818u;
            goto label_151818;
        }
    }
    ctx->pc = 0x151810u;
    // 0x151810: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x151810u;
    {
        const bool branch_taken_0x151810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151810) {
            ctx->pc = 0x151850u;
            goto label_151850;
        }
    }
    ctx->pc = 0x151818u;
label_151818:
    // 0x151818: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x151818u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x15181c: 0xc054580  jal         func_151600
    ctx->pc = 0x15181Cu;
    SET_GPR_U32(ctx, 31, 0x151824u);
    ctx->pc = 0x151820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15181Cu;
            // 0x151820: 0x8ce50004  lw          $a1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151600u;
    if (runtime->hasFunction(0x151600u)) {
        auto targetFn = runtime->lookupFunction(0x151600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151824u; }
        if (ctx->pc != 0x151824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151600_0x151600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151824u; }
        if (ctx->pc != 0x151824u) { return; }
    }
    ctx->pc = 0x151824u;
label_151824:
    // 0x151824: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x151824u;
    {
        const bool branch_taken_0x151824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151824u;
            // 0x151828: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151824) {
            ctx->pc = 0x151850u;
            goto label_151850;
        }
    }
    ctx->pc = 0x15182Cu;
    // 0x15182c: 0x0  nop
    ctx->pc = 0x15182cu;
    // NOP
label_151830:
    // 0x151830: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x151830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x151834: 0xc054560  jal         func_151580
    ctx->pc = 0x151834u;
    SET_GPR_U32(ctx, 31, 0x15183Cu);
    ctx->pc = 0x151838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151834u;
            // 0x151838: 0x8ce50004  lw          $a1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151580u;
    if (runtime->hasFunction(0x151580u)) {
        auto targetFn = runtime->lookupFunction(0x151580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15183Cu; }
        if (ctx->pc != 0x15183Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151580_0x151580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15183Cu; }
        if (ctx->pc != 0x15183Cu) { return; }
    }
    ctx->pc = 0x15183Cu;
label_15183c:
    // 0x15183c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15183Cu;
    {
        const bool branch_taken_0x15183c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15183Cu;
            // 0x151840: 0x248400e0  addiu       $a0, $a0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15183c) {
            ctx->pc = 0x151850u;
            goto label_151850;
        }
    }
    ctx->pc = 0x151844u;
    // 0x151844: 0x0  nop
    ctx->pc = 0x151844u;
    // NOP
label_151848:
    // 0x151848: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x151848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x15184c: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x15184cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_151850:
    // 0x151850: 0x8f050010  lw          $a1, 0x10($t8)
    ctx->pc = 0x151850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16)));
    // 0x151854: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x151854u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x151858: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x151858u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x15185c: 0x1e5282a  slt         $a1, $t7, $a1
    ctx->pc = 0x15185cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x151860: 0x14a0ffc4  bnez        $a1, . + 4 + (-0x3C << 2)
    ctx->pc = 0x151860u;
    {
        const bool branch_taken_0x151860 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x151864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151860u;
            // 0x151864: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151860) {
            ctx->pc = 0x151774u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_151774;
        }
    }
    ctx->pc = 0x151868u;
    // 0x151868: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x151868u;
    {
        const bool branch_taken_0x151868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151868) {
            ctx->pc = 0x1518E8u;
            goto label_1518e8;
        }
    }
    ctx->pc = 0x151870u;
label_151870:
    // 0x151870: 0x8f050010  lw          $a1, 0x10($t8)
    ctx->pc = 0x151870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16)));
    // 0x151874: 0x18a0001c  blez        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x151874u;
    {
        const bool branch_taken_0x151874 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x151878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151874u;
            // 0x151878: 0x782d  daddu       $t7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151874) {
            ctx->pc = 0x1518E8u;
            goto label_1518e8;
        }
    }
    ctx->pc = 0x15187Cu;
label_15187c:
    // 0x15187c: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x15187cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x151880: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x151880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x151884: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x151884u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x151888: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x151888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15188c: 0x10c5000c  beq         $a2, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x15188Cu;
    {
        const bool branch_taken_0x15188c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x15188c) {
            ctx->pc = 0x1518C0u;
            goto label_1518c0;
        }
    }
    ctx->pc = 0x151894u;
    // 0x151894: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x151894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x151898: 0x10c50003  beq         $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x151898u;
    {
        const bool branch_taken_0x151898 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x151898) {
            ctx->pc = 0x1518A8u;
            goto label_1518a8;
        }
    }
    ctx->pc = 0x1518A0u;
    // 0x1518a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1518A0u;
    {
        const bool branch_taken_0x1518a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1518a0) {
            ctx->pc = 0x1518D0u;
            goto label_1518d0;
        }
    }
    ctx->pc = 0x1518A8u;
label_1518a8:
    // 0x1518a8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1518a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1518ac: 0xc054580  jal         func_151600
    ctx->pc = 0x1518ACu;
    SET_GPR_U32(ctx, 31, 0x1518B4u);
    ctx->pc = 0x1518B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1518ACu;
            // 0x1518b0: 0x8ce50004  lw          $a1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151600u;
    if (runtime->hasFunction(0x151600u)) {
        auto targetFn = runtime->lookupFunction(0x151600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1518B4u; }
        if (ctx->pc != 0x1518B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151600_0x151600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1518B4u; }
        if (ctx->pc != 0x1518B4u) { return; }
    }
    ctx->pc = 0x1518B4u;
label_1518b4:
    // 0x1518b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1518B4u;
    {
        const bool branch_taken_0x1518b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1518B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1518B4u;
            // 0x1518b8: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1518b4) {
            ctx->pc = 0x1518D0u;
            goto label_1518d0;
        }
    }
    ctx->pc = 0x1518BCu;
    // 0x1518bc: 0x0  nop
    ctx->pc = 0x1518bcu;
    // NOP
label_1518c0:
    // 0x1518c0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1518c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1518c4: 0xc054560  jal         func_151580
    ctx->pc = 0x1518C4u;
    SET_GPR_U32(ctx, 31, 0x1518CCu);
    ctx->pc = 0x1518C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1518C4u;
            // 0x1518c8: 0x8ce50004  lw          $a1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151580u;
    if (runtime->hasFunction(0x151580u)) {
        auto targetFn = runtime->lookupFunction(0x151580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1518CCu; }
        if (ctx->pc != 0x1518CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151580_0x151580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1518CCu; }
        if (ctx->pc != 0x1518CCu) { return; }
    }
    ctx->pc = 0x1518CCu;
label_1518cc:
    // 0x1518cc: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x1518ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
label_1518d0:
    // 0x1518d0: 0x8f050010  lw          $a1, 0x10($t8)
    ctx->pc = 0x1518d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 16)));
    // 0x1518d4: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1518d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1518d8: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1518d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1518dc: 0x1e5282a  slt         $a1, $t7, $a1
    ctx->pc = 0x1518dcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1518e0: 0x14a0ffe6  bnez        $a1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1518E0u;
    {
        const bool branch_taken_0x1518e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1518E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1518E0u;
            // 0x1518e4: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1518e0) {
            ctx->pc = 0x15187Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15187c;
        }
    }
    ctx->pc = 0x1518E8u;
label_1518e8:
    // 0x1518e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1518e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1518ec:
    // 0x1518ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1518ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1518F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1518ECu;
            // 0x1518f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1518F4u;
    // 0x1518f4: 0x0  nop
    ctx->pc = 0x1518f4u;
    // NOP
    // 0x1518f8: 0x0  nop
    ctx->pc = 0x1518f8u;
    // NOP
    // 0x1518fc: 0x0  nop
    ctx->pc = 0x1518fcu;
    // NOP
}
