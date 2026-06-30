#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00190890
// Address: 0x190890 - 0x190a58
void sub_00190890_0x190890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190890_0x190890");
#endif

    switch (ctx->pc) {
        case 0x190890u: goto label_190890;
        case 0x190894u: goto label_190894;
        case 0x190898u: goto label_190898;
        case 0x19089cu: goto label_19089c;
        case 0x1908a0u: goto label_1908a0;
        case 0x1908a4u: goto label_1908a4;
        case 0x1908a8u: goto label_1908a8;
        case 0x1908acu: goto label_1908ac;
        case 0x1908b0u: goto label_1908b0;
        case 0x1908b4u: goto label_1908b4;
        case 0x1908b8u: goto label_1908b8;
        case 0x1908bcu: goto label_1908bc;
        case 0x1908c0u: goto label_1908c0;
        case 0x1908c4u: goto label_1908c4;
        case 0x1908c8u: goto label_1908c8;
        case 0x1908ccu: goto label_1908cc;
        case 0x1908d0u: goto label_1908d0;
        case 0x1908d4u: goto label_1908d4;
        case 0x1908d8u: goto label_1908d8;
        case 0x1908dcu: goto label_1908dc;
        case 0x1908e0u: goto label_1908e0;
        case 0x1908e4u: goto label_1908e4;
        case 0x1908e8u: goto label_1908e8;
        case 0x1908ecu: goto label_1908ec;
        case 0x1908f0u: goto label_1908f0;
        case 0x1908f4u: goto label_1908f4;
        case 0x1908f8u: goto label_1908f8;
        case 0x1908fcu: goto label_1908fc;
        case 0x190900u: goto label_190900;
        case 0x190904u: goto label_190904;
        case 0x190908u: goto label_190908;
        case 0x19090cu: goto label_19090c;
        case 0x190910u: goto label_190910;
        case 0x190914u: goto label_190914;
        case 0x190918u: goto label_190918;
        case 0x19091cu: goto label_19091c;
        case 0x190920u: goto label_190920;
        case 0x190924u: goto label_190924;
        case 0x190928u: goto label_190928;
        case 0x19092cu: goto label_19092c;
        case 0x190930u: goto label_190930;
        case 0x190934u: goto label_190934;
        case 0x190938u: goto label_190938;
        case 0x19093cu: goto label_19093c;
        case 0x190940u: goto label_190940;
        case 0x190944u: goto label_190944;
        case 0x190948u: goto label_190948;
        case 0x19094cu: goto label_19094c;
        case 0x190950u: goto label_190950;
        case 0x190954u: goto label_190954;
        case 0x190958u: goto label_190958;
        case 0x19095cu: goto label_19095c;
        case 0x190960u: goto label_190960;
        case 0x190964u: goto label_190964;
        case 0x190968u: goto label_190968;
        case 0x19096cu: goto label_19096c;
        case 0x190970u: goto label_190970;
        case 0x190974u: goto label_190974;
        case 0x190978u: goto label_190978;
        case 0x19097cu: goto label_19097c;
        case 0x190980u: goto label_190980;
        case 0x190984u: goto label_190984;
        case 0x190988u: goto label_190988;
        case 0x19098cu: goto label_19098c;
        case 0x190990u: goto label_190990;
        case 0x190994u: goto label_190994;
        case 0x190998u: goto label_190998;
        case 0x19099cu: goto label_19099c;
        case 0x1909a0u: goto label_1909a0;
        case 0x1909a4u: goto label_1909a4;
        case 0x1909a8u: goto label_1909a8;
        case 0x1909acu: goto label_1909ac;
        case 0x1909b0u: goto label_1909b0;
        case 0x1909b4u: goto label_1909b4;
        case 0x1909b8u: goto label_1909b8;
        case 0x1909bcu: goto label_1909bc;
        case 0x1909c0u: goto label_1909c0;
        case 0x1909c4u: goto label_1909c4;
        case 0x1909c8u: goto label_1909c8;
        case 0x1909ccu: goto label_1909cc;
        case 0x1909d0u: goto label_1909d0;
        case 0x1909d4u: goto label_1909d4;
        case 0x1909d8u: goto label_1909d8;
        case 0x1909dcu: goto label_1909dc;
        case 0x1909e0u: goto label_1909e0;
        case 0x1909e4u: goto label_1909e4;
        case 0x1909e8u: goto label_1909e8;
        case 0x1909ecu: goto label_1909ec;
        case 0x1909f0u: goto label_1909f0;
        case 0x1909f4u: goto label_1909f4;
        case 0x1909f8u: goto label_1909f8;
        case 0x1909fcu: goto label_1909fc;
        case 0x190a00u: goto label_190a00;
        case 0x190a04u: goto label_190a04;
        case 0x190a08u: goto label_190a08;
        case 0x190a0cu: goto label_190a0c;
        case 0x190a10u: goto label_190a10;
        case 0x190a14u: goto label_190a14;
        case 0x190a18u: goto label_190a18;
        case 0x190a1cu: goto label_190a1c;
        case 0x190a20u: goto label_190a20;
        case 0x190a24u: goto label_190a24;
        case 0x190a28u: goto label_190a28;
        case 0x190a2cu: goto label_190a2c;
        case 0x190a30u: goto label_190a30;
        case 0x190a34u: goto label_190a34;
        case 0x190a38u: goto label_190a38;
        case 0x190a3cu: goto label_190a3c;
        case 0x190a40u: goto label_190a40;
        case 0x190a44u: goto label_190a44;
        case 0x190a48u: goto label_190a48;
        case 0x190a4cu: goto label_190a4c;
        case 0x190a50u: goto label_190a50;
        case 0x190a54u: goto label_190a54;
        default: break;
    }

    ctx->pc = 0x190890u;

label_190890:
    // 0x190890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x190890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_190894:
    // 0x190894: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x190894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_190898:
    // 0x190898: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x190898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19089c:
    // 0x19089c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19089cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1908a0:
    // 0x1908a0: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1908a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1908a4:
    // 0x1908a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1908a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1908a8:
    // 0x1908a8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1908a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1908ac:
    // 0x1908ac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1908acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1908b0:
    // 0x1908b0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1908b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1908b4:
    // 0x1908b4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1908b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1908b8:
    // 0x1908b8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1908b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1908bc:
    // 0x1908bc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1908bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1908c0:
    // 0x1908c0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1908c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1908c4:
    // 0x1908c4: 0xc064adc  jal         func_192B70
label_1908c8:
    if (ctx->pc == 0x1908C8u) {
        ctx->pc = 0x1908C8u;
            // 0x1908c8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x1908CCu;
        goto label_1908cc;
    }
    ctx->pc = 0x1908C4u;
    SET_GPR_U32(ctx, 31, 0x1908CCu);
    ctx->pc = 0x1908C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1908C4u;
            // 0x1908c8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192B70u;
    if (runtime->hasFunction(0x192B70u)) {
        auto targetFn = runtime->lookupFunction(0x192B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1908CCu; }
        if (ctx->pc != 0x1908CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192B70_0x192b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1908CCu; }
        if (ctx->pc != 0x1908CCu) { return; }
    }
    ctx->pc = 0x1908CCu;
label_1908cc:
    // 0x1908cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1908ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1908d0:
    // 0x1908d0: 0x3c05ff02  lui         $a1, 0xFF02
    ctx->pc = 0x1908d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65282 << 16));
label_1908d4:
    // 0x1908d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1908d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1908d8:
    // 0x1908d8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1908d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1908dc:
    // 0x1908dc: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1908dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1908e0:
    // 0x1908e0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1908e4:
    if (ctx->pc == 0x1908E4u) {
        ctx->pc = 0x1908E4u;
            // 0x1908e4: 0x34a50301  ori         $a1, $a1, 0x301 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)769);
        ctx->pc = 0x1908E8u;
        goto label_1908e8;
    }
    ctx->pc = 0x1908E0u;
    {
        const bool branch_taken_0x1908e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1908E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1908E0u;
            // 0x1908e4: 0x34a50301  ori         $a1, $a1, 0x301 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1908e0) {
            ctx->pc = 0x190908u;
            goto label_190908;
        }
    }
    ctx->pc = 0x1908E8u;
label_1908e8:
    // 0x1908e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1908e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1908ec:
    // 0x1908ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1908ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1908f0:
    // 0x1908f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1908f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1908f4:
    // 0x1908f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1908f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1908f8:
    // 0x1908f8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1908f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1908fc:
    // 0x1908fc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1908fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_190900:
    // 0x190900: 0x8064a68  j           func_1929A0
label_190904:
    if (ctx->pc == 0x190904u) {
        ctx->pc = 0x190904u;
            // 0x190904: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x190908u;
        goto label_190908;
    }
    ctx->pc = 0x190900u;
    ctx->pc = 0x190904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190900u;
            // 0x190904: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1929A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1929A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x190908u;
label_190908:
    // 0x190908: 0x8e6200d4  lw          $v0, 0xD4($s3)
    ctx->pc = 0x190908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_19090c:
    // 0x19090c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19090cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_190910:
    // 0x190910: 0x40f809  jalr        $v0
label_190914:
    if (ctx->pc == 0x190914u) {
        ctx->pc = 0x190914u;
            // 0x190914: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x190918u;
        goto label_190918;
    }
    ctx->pc = 0x190910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x190918u);
        ctx->pc = 0x190914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190910u;
            // 0x190914: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x190918u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x190918u; }
            if (ctx->pc != 0x190918u) { return; }
        }
        }
    }
    ctx->pc = 0x190918u;
label_190918:
    // 0x190918: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x190918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19091c:
    // 0x19091c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19091cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_190920:
    // 0x190920: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x190920u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_190924:
    // 0x190924: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x190924u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_190928:
    // 0x190928: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x190928u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19092c:
    // 0x19092c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x19092cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_190930:
    // 0x190930: 0x3e00008  jr          $ra
label_190934:
    if (ctx->pc == 0x190934u) {
        ctx->pc = 0x190934u;
            // 0x190934: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x190938u;
        goto label_190938;
    }
    ctx->pc = 0x190930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190930u;
            // 0x190934: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190938u;
label_190938:
    // 0x190938: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x190938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_19093c:
    // 0x19093c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x19093cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_190940:
    // 0x190940: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x190940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_190944:
    // 0x190944: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x190944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_190948:
    // 0x190948: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x190948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_19094c:
    // 0x19094c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19094cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_190950:
    // 0x190950: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x190950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_190954:
    // 0x190954: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x190954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_190958:
    // 0x190958: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x190958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_19095c:
    // 0x19095c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x19095cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_190960:
    // 0x190960: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x190960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_190964:
    // 0x190964: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x190964u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_190968:
    // 0x190968: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x190968u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_19096c:
    // 0x19096c: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_190970:
    if (ctx->pc == 0x190970u) {
        ctx->pc = 0x190970u;
            // 0x190970: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x190974u;
        goto label_190974;
    }
    ctx->pc = 0x19096Cu;
    {
        const bool branch_taken_0x19096c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19096c) {
            ctx->pc = 0x190970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19096Cu;
            // 0x190970: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1909BCu;
            goto label_1909bc;
        }
    }
    ctx->pc = 0x190974u;
label_190974:
    // 0x190974: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x190974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_190978:
    // 0x190978: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x190978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19097c:
    // 0x19097c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19097cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_190980:
    // 0x190980: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x190980u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_190984:
    // 0x190984: 0xc064296  jal         func_190A58
label_190988:
    if (ctx->pc == 0x190988u) {
        ctx->pc = 0x190988u;
            // 0x190988: 0x27a80004  addiu       $t0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->pc = 0x19098Cu;
        goto label_19098c;
    }
    ctx->pc = 0x190984u;
    SET_GPR_U32(ctx, 31, 0x19098Cu);
    ctx->pc = 0x190988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x190984u;
            // 0x190988: 0x27a80004  addiu       $t0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190A58u;
    if (runtime->hasFunction(0x190A58u)) {
        auto targetFn = runtime->lookupFunction(0x190A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19098Cu; }
        if (ctx->pc != 0x19098Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190A58_0x190a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19098Cu; }
        if (ctx->pc != 0x19098Cu) { return; }
    }
    ctx->pc = 0x19098Cu;
label_19098c:
    // 0x19098c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x19098cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_190990:
    // 0x190990: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x190990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_190994:
    // 0x190994: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x190994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_190998:
    // 0x190998: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x190998u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_19099c:
    // 0x19099c: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x19099cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1909a0:
    // 0x1909a0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1909a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1909a4:
    // 0x1909a4: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x1909a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1909a8:
    // 0x1909a8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1909a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_1909ac:
    // 0x1909ac: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x1909acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_1909b0:
    // 0x1909b0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_1909b4:
    if (ctx->pc == 0x1909B4u) {
        ctx->pc = 0x1909B4u;
            // 0x1909b4: 0xae450000  sw          $a1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
        ctx->pc = 0x1909B8u;
        goto label_1909b8;
    }
    ctx->pc = 0x1909B0u;
    {
        const bool branch_taken_0x1909b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1909B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1909B0u;
            // 0x1909b4: 0xae450000  sw          $a1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1909b0) {
            ctx->pc = 0x190968u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_190968;
        }
    }
    ctx->pc = 0x1909B8u;
label_1909b8:
    // 0x1909b8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1909b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1909bc:
    // 0x1909bc: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1909bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_1909c0:
    // 0x1909c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1909c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1909c4:
    // 0x1909c4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1909c8:
    if (ctx->pc == 0x1909C8u) {
        ctx->pc = 0x1909C8u;
            // 0x1909c8: 0x26840028  addiu       $a0, $s4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
        ctx->pc = 0x1909CCu;
        goto label_1909cc;
    }
    ctx->pc = 0x1909C4u;
    {
        const bool branch_taken_0x1909c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1909C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1909C4u;
            // 0x1909c8: 0x26840028  addiu       $a0, $s4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1909c4) {
            ctx->pc = 0x190A30u;
            goto label_190a30;
        }
    }
    ctx->pc = 0x1909CCu;
label_1909cc:
    // 0x1909cc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1909ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1909d0:
    // 0x1909d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1909d4:
    if (ctx->pc == 0x1909D4u) {
        ctx->pc = 0x1909D4u;
            // 0x1909d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1909D8u;
        goto label_1909d8;
    }
    ctx->pc = 0x1909D0u;
    {
        const bool branch_taken_0x1909d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1909D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1909D0u;
            // 0x1909d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1909d0) {
            ctx->pc = 0x1909E8u;
            goto label_1909e8;
        }
    }
    ctx->pc = 0x1909D8u;
label_1909d8:
    // 0x1909d8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1909d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1909dc:
    // 0x1909dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1909dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1909e0:
    // 0x1909e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1909e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1909e4:
    // 0x1909e4: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x1909e4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_1909e8:
    // 0x1909e8: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x1909e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1909ec:
    // 0x1909ec: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1909ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1909f0:
    // 0x1909f0: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x1909f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1909f4:
    // 0x1909f4: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x1909f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1909f8:
    // 0x1909f8: 0x6885000f  ldl         $a1, 0xF($a0)
    ctx->pc = 0x1909f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1909fc:
    // 0x1909fc: 0x6c850008  ldr         $a1, 0x8($a0)
    ctx->pc = 0x1909fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_190a00:
    // 0x190a00: 0x68860017  ldl         $a2, 0x17($a0)
    ctx->pc = 0x190a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_190a04:
    // 0x190a04: 0x6c860010  ldr         $a2, 0x10($a0)
    ctx->pc = 0x190a04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_190a08:
    // 0x190a08: 0x6887001f  ldl         $a3, 0x1F($a0)
    ctx->pc = 0x190a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_190a0c:
    // 0x190a0c: 0x6c870018  ldr         $a3, 0x18($a0)
    ctx->pc = 0x190a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_190a10:
    // 0x190a10: 0xb043004f  sdl         $v1, 0x4F($v0)
    ctx->pc = 0x190a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_190a14:
    // 0x190a14: 0xb4430048  sdr         $v1, 0x48($v0)
    ctx->pc = 0x190a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_190a18:
    // 0x190a18: 0xb0450057  sdl         $a1, 0x57($v0)
    ctx->pc = 0x190a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_190a1c:
    // 0x190a1c: 0xb4450050  sdr         $a1, 0x50($v0)
    ctx->pc = 0x190a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_190a20:
    // 0x190a20: 0xb046005f  sdl         $a2, 0x5F($v0)
    ctx->pc = 0x190a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_190a24:
    // 0x190a24: 0xb4460058  sdr         $a2, 0x58($v0)
    ctx->pc = 0x190a24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_190a28:
    // 0x190a28: 0xb0470067  sdl         $a3, 0x67($v0)
    ctx->pc = 0x190a28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_190a2c:
    // 0x190a2c: 0xb4470060  sdr         $a3, 0x60($v0)
    ctx->pc = 0x190a2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_190a30:
    // 0x190a30: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x190a30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_190a34:
    // 0x190a34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x190a34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_190a38:
    // 0x190a38: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x190a38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_190a3c:
    // 0x190a3c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x190a3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_190a40:
    // 0x190a40: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x190a40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_190a44:
    // 0x190a44: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x190a44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_190a48:
    // 0x190a48: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x190a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_190a4c:
    // 0x190a4c: 0x3e00008  jr          $ra
label_190a50:
    if (ctx->pc == 0x190A50u) {
        ctx->pc = 0x190A50u;
            // 0x190a50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x190A54u;
        goto label_190a54;
    }
    ctx->pc = 0x190A4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190A4Cu;
            // 0x190a50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190A54u;
label_190a54:
    // 0x190a54: 0x0  nop
    ctx->pc = 0x190a54u;
    // NOP
}
