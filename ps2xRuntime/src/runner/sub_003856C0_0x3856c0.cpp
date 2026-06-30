#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003856C0
// Address: 0x3856c0 - 0x385b90
void sub_003856C0_0x3856c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003856C0_0x3856c0");
#endif

    switch (ctx->pc) {
        case 0x3856c0u: goto label_3856c0;
        case 0x3856c4u: goto label_3856c4;
        case 0x3856c8u: goto label_3856c8;
        case 0x3856ccu: goto label_3856cc;
        case 0x3856d0u: goto label_3856d0;
        case 0x3856d4u: goto label_3856d4;
        case 0x3856d8u: goto label_3856d8;
        case 0x3856dcu: goto label_3856dc;
        case 0x3856e0u: goto label_3856e0;
        case 0x3856e4u: goto label_3856e4;
        case 0x3856e8u: goto label_3856e8;
        case 0x3856ecu: goto label_3856ec;
        case 0x3856f0u: goto label_3856f0;
        case 0x3856f4u: goto label_3856f4;
        case 0x3856f8u: goto label_3856f8;
        case 0x3856fcu: goto label_3856fc;
        case 0x385700u: goto label_385700;
        case 0x385704u: goto label_385704;
        case 0x385708u: goto label_385708;
        case 0x38570cu: goto label_38570c;
        case 0x385710u: goto label_385710;
        case 0x385714u: goto label_385714;
        case 0x385718u: goto label_385718;
        case 0x38571cu: goto label_38571c;
        case 0x385720u: goto label_385720;
        case 0x385724u: goto label_385724;
        case 0x385728u: goto label_385728;
        case 0x38572cu: goto label_38572c;
        case 0x385730u: goto label_385730;
        case 0x385734u: goto label_385734;
        case 0x385738u: goto label_385738;
        case 0x38573cu: goto label_38573c;
        case 0x385740u: goto label_385740;
        case 0x385744u: goto label_385744;
        case 0x385748u: goto label_385748;
        case 0x38574cu: goto label_38574c;
        case 0x385750u: goto label_385750;
        case 0x385754u: goto label_385754;
        case 0x385758u: goto label_385758;
        case 0x38575cu: goto label_38575c;
        case 0x385760u: goto label_385760;
        case 0x385764u: goto label_385764;
        case 0x385768u: goto label_385768;
        case 0x38576cu: goto label_38576c;
        case 0x385770u: goto label_385770;
        case 0x385774u: goto label_385774;
        case 0x385778u: goto label_385778;
        case 0x38577cu: goto label_38577c;
        case 0x385780u: goto label_385780;
        case 0x385784u: goto label_385784;
        case 0x385788u: goto label_385788;
        case 0x38578cu: goto label_38578c;
        case 0x385790u: goto label_385790;
        case 0x385794u: goto label_385794;
        case 0x385798u: goto label_385798;
        case 0x38579cu: goto label_38579c;
        case 0x3857a0u: goto label_3857a0;
        case 0x3857a4u: goto label_3857a4;
        case 0x3857a8u: goto label_3857a8;
        case 0x3857acu: goto label_3857ac;
        case 0x3857b0u: goto label_3857b0;
        case 0x3857b4u: goto label_3857b4;
        case 0x3857b8u: goto label_3857b8;
        case 0x3857bcu: goto label_3857bc;
        case 0x3857c0u: goto label_3857c0;
        case 0x3857c4u: goto label_3857c4;
        case 0x3857c8u: goto label_3857c8;
        case 0x3857ccu: goto label_3857cc;
        case 0x3857d0u: goto label_3857d0;
        case 0x3857d4u: goto label_3857d4;
        case 0x3857d8u: goto label_3857d8;
        case 0x3857dcu: goto label_3857dc;
        case 0x3857e0u: goto label_3857e0;
        case 0x3857e4u: goto label_3857e4;
        case 0x3857e8u: goto label_3857e8;
        case 0x3857ecu: goto label_3857ec;
        case 0x3857f0u: goto label_3857f0;
        case 0x3857f4u: goto label_3857f4;
        case 0x3857f8u: goto label_3857f8;
        case 0x3857fcu: goto label_3857fc;
        case 0x385800u: goto label_385800;
        case 0x385804u: goto label_385804;
        case 0x385808u: goto label_385808;
        case 0x38580cu: goto label_38580c;
        case 0x385810u: goto label_385810;
        case 0x385814u: goto label_385814;
        case 0x385818u: goto label_385818;
        case 0x38581cu: goto label_38581c;
        case 0x385820u: goto label_385820;
        case 0x385824u: goto label_385824;
        case 0x385828u: goto label_385828;
        case 0x38582cu: goto label_38582c;
        case 0x385830u: goto label_385830;
        case 0x385834u: goto label_385834;
        case 0x385838u: goto label_385838;
        case 0x38583cu: goto label_38583c;
        case 0x385840u: goto label_385840;
        case 0x385844u: goto label_385844;
        case 0x385848u: goto label_385848;
        case 0x38584cu: goto label_38584c;
        case 0x385850u: goto label_385850;
        case 0x385854u: goto label_385854;
        case 0x385858u: goto label_385858;
        case 0x38585cu: goto label_38585c;
        case 0x385860u: goto label_385860;
        case 0x385864u: goto label_385864;
        case 0x385868u: goto label_385868;
        case 0x38586cu: goto label_38586c;
        case 0x385870u: goto label_385870;
        case 0x385874u: goto label_385874;
        case 0x385878u: goto label_385878;
        case 0x38587cu: goto label_38587c;
        case 0x385880u: goto label_385880;
        case 0x385884u: goto label_385884;
        case 0x385888u: goto label_385888;
        case 0x38588cu: goto label_38588c;
        case 0x385890u: goto label_385890;
        case 0x385894u: goto label_385894;
        case 0x385898u: goto label_385898;
        case 0x38589cu: goto label_38589c;
        case 0x3858a0u: goto label_3858a0;
        case 0x3858a4u: goto label_3858a4;
        case 0x3858a8u: goto label_3858a8;
        case 0x3858acu: goto label_3858ac;
        case 0x3858b0u: goto label_3858b0;
        case 0x3858b4u: goto label_3858b4;
        case 0x3858b8u: goto label_3858b8;
        case 0x3858bcu: goto label_3858bc;
        case 0x3858c0u: goto label_3858c0;
        case 0x3858c4u: goto label_3858c4;
        case 0x3858c8u: goto label_3858c8;
        case 0x3858ccu: goto label_3858cc;
        case 0x3858d0u: goto label_3858d0;
        case 0x3858d4u: goto label_3858d4;
        case 0x3858d8u: goto label_3858d8;
        case 0x3858dcu: goto label_3858dc;
        case 0x3858e0u: goto label_3858e0;
        case 0x3858e4u: goto label_3858e4;
        case 0x3858e8u: goto label_3858e8;
        case 0x3858ecu: goto label_3858ec;
        case 0x3858f0u: goto label_3858f0;
        case 0x3858f4u: goto label_3858f4;
        case 0x3858f8u: goto label_3858f8;
        case 0x3858fcu: goto label_3858fc;
        case 0x385900u: goto label_385900;
        case 0x385904u: goto label_385904;
        case 0x385908u: goto label_385908;
        case 0x38590cu: goto label_38590c;
        case 0x385910u: goto label_385910;
        case 0x385914u: goto label_385914;
        case 0x385918u: goto label_385918;
        case 0x38591cu: goto label_38591c;
        case 0x385920u: goto label_385920;
        case 0x385924u: goto label_385924;
        case 0x385928u: goto label_385928;
        case 0x38592cu: goto label_38592c;
        case 0x385930u: goto label_385930;
        case 0x385934u: goto label_385934;
        case 0x385938u: goto label_385938;
        case 0x38593cu: goto label_38593c;
        case 0x385940u: goto label_385940;
        case 0x385944u: goto label_385944;
        case 0x385948u: goto label_385948;
        case 0x38594cu: goto label_38594c;
        case 0x385950u: goto label_385950;
        case 0x385954u: goto label_385954;
        case 0x385958u: goto label_385958;
        case 0x38595cu: goto label_38595c;
        case 0x385960u: goto label_385960;
        case 0x385964u: goto label_385964;
        case 0x385968u: goto label_385968;
        case 0x38596cu: goto label_38596c;
        case 0x385970u: goto label_385970;
        case 0x385974u: goto label_385974;
        case 0x385978u: goto label_385978;
        case 0x38597cu: goto label_38597c;
        case 0x385980u: goto label_385980;
        case 0x385984u: goto label_385984;
        case 0x385988u: goto label_385988;
        case 0x38598cu: goto label_38598c;
        case 0x385990u: goto label_385990;
        case 0x385994u: goto label_385994;
        case 0x385998u: goto label_385998;
        case 0x38599cu: goto label_38599c;
        case 0x3859a0u: goto label_3859a0;
        case 0x3859a4u: goto label_3859a4;
        case 0x3859a8u: goto label_3859a8;
        case 0x3859acu: goto label_3859ac;
        case 0x3859b0u: goto label_3859b0;
        case 0x3859b4u: goto label_3859b4;
        case 0x3859b8u: goto label_3859b8;
        case 0x3859bcu: goto label_3859bc;
        case 0x3859c0u: goto label_3859c0;
        case 0x3859c4u: goto label_3859c4;
        case 0x3859c8u: goto label_3859c8;
        case 0x3859ccu: goto label_3859cc;
        case 0x3859d0u: goto label_3859d0;
        case 0x3859d4u: goto label_3859d4;
        case 0x3859d8u: goto label_3859d8;
        case 0x3859dcu: goto label_3859dc;
        case 0x3859e0u: goto label_3859e0;
        case 0x3859e4u: goto label_3859e4;
        case 0x3859e8u: goto label_3859e8;
        case 0x3859ecu: goto label_3859ec;
        case 0x3859f0u: goto label_3859f0;
        case 0x3859f4u: goto label_3859f4;
        case 0x3859f8u: goto label_3859f8;
        case 0x3859fcu: goto label_3859fc;
        case 0x385a00u: goto label_385a00;
        case 0x385a04u: goto label_385a04;
        case 0x385a08u: goto label_385a08;
        case 0x385a0cu: goto label_385a0c;
        case 0x385a10u: goto label_385a10;
        case 0x385a14u: goto label_385a14;
        case 0x385a18u: goto label_385a18;
        case 0x385a1cu: goto label_385a1c;
        case 0x385a20u: goto label_385a20;
        case 0x385a24u: goto label_385a24;
        case 0x385a28u: goto label_385a28;
        case 0x385a2cu: goto label_385a2c;
        case 0x385a30u: goto label_385a30;
        case 0x385a34u: goto label_385a34;
        case 0x385a38u: goto label_385a38;
        case 0x385a3cu: goto label_385a3c;
        case 0x385a40u: goto label_385a40;
        case 0x385a44u: goto label_385a44;
        case 0x385a48u: goto label_385a48;
        case 0x385a4cu: goto label_385a4c;
        case 0x385a50u: goto label_385a50;
        case 0x385a54u: goto label_385a54;
        case 0x385a58u: goto label_385a58;
        case 0x385a5cu: goto label_385a5c;
        case 0x385a60u: goto label_385a60;
        case 0x385a64u: goto label_385a64;
        case 0x385a68u: goto label_385a68;
        case 0x385a6cu: goto label_385a6c;
        case 0x385a70u: goto label_385a70;
        case 0x385a74u: goto label_385a74;
        case 0x385a78u: goto label_385a78;
        case 0x385a7cu: goto label_385a7c;
        case 0x385a80u: goto label_385a80;
        case 0x385a84u: goto label_385a84;
        case 0x385a88u: goto label_385a88;
        case 0x385a8cu: goto label_385a8c;
        case 0x385a90u: goto label_385a90;
        case 0x385a94u: goto label_385a94;
        case 0x385a98u: goto label_385a98;
        case 0x385a9cu: goto label_385a9c;
        case 0x385aa0u: goto label_385aa0;
        case 0x385aa4u: goto label_385aa4;
        case 0x385aa8u: goto label_385aa8;
        case 0x385aacu: goto label_385aac;
        case 0x385ab0u: goto label_385ab0;
        case 0x385ab4u: goto label_385ab4;
        case 0x385ab8u: goto label_385ab8;
        case 0x385abcu: goto label_385abc;
        case 0x385ac0u: goto label_385ac0;
        case 0x385ac4u: goto label_385ac4;
        case 0x385ac8u: goto label_385ac8;
        case 0x385accu: goto label_385acc;
        case 0x385ad0u: goto label_385ad0;
        case 0x385ad4u: goto label_385ad4;
        case 0x385ad8u: goto label_385ad8;
        case 0x385adcu: goto label_385adc;
        case 0x385ae0u: goto label_385ae0;
        case 0x385ae4u: goto label_385ae4;
        case 0x385ae8u: goto label_385ae8;
        case 0x385aecu: goto label_385aec;
        case 0x385af0u: goto label_385af0;
        case 0x385af4u: goto label_385af4;
        case 0x385af8u: goto label_385af8;
        case 0x385afcu: goto label_385afc;
        case 0x385b00u: goto label_385b00;
        case 0x385b04u: goto label_385b04;
        case 0x385b08u: goto label_385b08;
        case 0x385b0cu: goto label_385b0c;
        case 0x385b10u: goto label_385b10;
        case 0x385b14u: goto label_385b14;
        case 0x385b18u: goto label_385b18;
        case 0x385b1cu: goto label_385b1c;
        case 0x385b20u: goto label_385b20;
        case 0x385b24u: goto label_385b24;
        case 0x385b28u: goto label_385b28;
        case 0x385b2cu: goto label_385b2c;
        case 0x385b30u: goto label_385b30;
        case 0x385b34u: goto label_385b34;
        case 0x385b38u: goto label_385b38;
        case 0x385b3cu: goto label_385b3c;
        case 0x385b40u: goto label_385b40;
        case 0x385b44u: goto label_385b44;
        case 0x385b48u: goto label_385b48;
        case 0x385b4cu: goto label_385b4c;
        case 0x385b50u: goto label_385b50;
        case 0x385b54u: goto label_385b54;
        case 0x385b58u: goto label_385b58;
        case 0x385b5cu: goto label_385b5c;
        case 0x385b60u: goto label_385b60;
        case 0x385b64u: goto label_385b64;
        case 0x385b68u: goto label_385b68;
        case 0x385b6cu: goto label_385b6c;
        case 0x385b70u: goto label_385b70;
        case 0x385b74u: goto label_385b74;
        case 0x385b78u: goto label_385b78;
        case 0x385b7cu: goto label_385b7c;
        case 0x385b80u: goto label_385b80;
        case 0x385b84u: goto label_385b84;
        case 0x385b88u: goto label_385b88;
        case 0x385b8cu: goto label_385b8c;
        default: break;
    }

    ctx->pc = 0x3856c0u;

label_3856c0:
    // 0x3856c0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3856c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_3856c4:
    // 0x3856c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3856c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3856c8:
    // 0x3856c8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3856c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_3856cc:
    // 0x3856cc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3856ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_3856d0:
    // 0x3856d0: 0x3e00008  jr          $ra
label_3856d4:
    if (ctx->pc == 0x3856D4u) {
        ctx->pc = 0x3856D4u;
            // 0x3856d4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3856D8u;
        goto label_3856d8;
    }
    ctx->pc = 0x3856D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3856D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3856D0u;
            // 0x3856d4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3856D8u;
label_3856d8:
    // 0x3856d8: 0x0  nop
    ctx->pc = 0x3856d8u;
    // NOP
label_3856dc:
    // 0x3856dc: 0x0  nop
    ctx->pc = 0x3856dcu;
    // NOP
label_3856e0:
    // 0x3856e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3856e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3856e4:
    // 0x3856e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3856e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3856e8:
    // 0x3856e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3856e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3856ec:
    // 0x3856ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3856ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3856f0:
    // 0x3856f0: 0xc0d37dc  jal         func_34DF70
label_3856f4:
    if (ctx->pc == 0x3856F4u) {
        ctx->pc = 0x3856F4u;
            // 0x3856f4: 0x26040074  addiu       $a0, $s0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
        ctx->pc = 0x3856F8u;
        goto label_3856f8;
    }
    ctx->pc = 0x3856F0u;
    SET_GPR_U32(ctx, 31, 0x3856F8u);
    ctx->pc = 0x3856F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3856F0u;
            // 0x3856f4: 0x26040074  addiu       $a0, $s0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3856F8u; }
        if (ctx->pc != 0x3856F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3856F8u; }
        if (ctx->pc != 0x3856F8u) { return; }
    }
    ctx->pc = 0x3856F8u;
label_3856f8:
    // 0x3856f8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x3856f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3856fc:
    // 0x3856fc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_385700:
    if (ctx->pc == 0x385700u) {
        ctx->pc = 0x385700u;
            // 0x385700: 0xae000084  sw          $zero, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
        ctx->pc = 0x385704u;
        goto label_385704;
    }
    ctx->pc = 0x3856FCu;
    {
        const bool branch_taken_0x3856fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3856fc) {
            ctx->pc = 0x385700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3856FCu;
            // 0x385700: 0xae000084  sw          $zero, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x385718u;
            goto label_385718;
        }
    }
    ctx->pc = 0x385704u;
label_385704:
    // 0x385704: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x385704u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_385708:
    // 0x385708: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x385708u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_38570c:
    // 0x38570c: 0x320f809  jalr        $t9
label_385710:
    if (ctx->pc == 0x385710u) {
        ctx->pc = 0x385710u;
            // 0x385710: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x385714u;
        goto label_385714;
    }
    ctx->pc = 0x38570Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x385714u);
        ctx->pc = 0x385710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38570Cu;
            // 0x385710: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x385714u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x385714u; }
            if (ctx->pc != 0x385714u) { return; }
        }
        }
    }
    ctx->pc = 0x385714u;
label_385714:
    // 0x385714: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x385714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
label_385718:
    // 0x385718: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x385718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_38571c:
    // 0x38571c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_385720:
    if (ctx->pc == 0x385720u) {
        ctx->pc = 0x385720u;
            // 0x385720: 0x8e040058  lw          $a0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->pc = 0x385724u;
        goto label_385724;
    }
    ctx->pc = 0x38571Cu;
    {
        const bool branch_taken_0x38571c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38571c) {
            ctx->pc = 0x385720u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38571Cu;
            // 0x385720: 0x8e040058  lw          $a0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x385738u;
            goto label_385738;
        }
    }
    ctx->pc = 0x385724u;
label_385724:
    // 0x385724: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x385724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
label_385728:
    // 0x385728: 0xc0407c0  jal         func_101F00
label_38572c:
    if (ctx->pc == 0x38572Cu) {
        ctx->pc = 0x38572Cu;
            // 0x38572c: 0x24a533c0  addiu       $a1, $a1, 0x33C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13248));
        ctx->pc = 0x385730u;
        goto label_385730;
    }
    ctx->pc = 0x385728u;
    SET_GPR_U32(ctx, 31, 0x385730u);
    ctx->pc = 0x38572Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385728u;
            // 0x38572c: 0x24a533c0  addiu       $a1, $a1, 0x33C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385730u; }
        if (ctx->pc != 0x385730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385730u; }
        if (ctx->pc != 0x385730u) { return; }
    }
    ctx->pc = 0x385730u;
label_385730:
    // 0x385730: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x385730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_385734:
    // 0x385734: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x385734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_385738:
    // 0x385738: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_38573c:
    if (ctx->pc == 0x38573Cu) {
        ctx->pc = 0x38573Cu;
            // 0x38573c: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->pc = 0x385740u;
        goto label_385740;
    }
    ctx->pc = 0x385738u;
    {
        const bool branch_taken_0x385738 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x385738) {
            ctx->pc = 0x38573Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x385738u;
            // 0x38573c: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x385750u;
            goto label_385750;
        }
    }
    ctx->pc = 0x385740u;
label_385740:
    // 0x385740: 0xc04008c  jal         func_100230
label_385744:
    if (ctx->pc == 0x385744u) {
        ctx->pc = 0x385748u;
        goto label_385748;
    }
    ctx->pc = 0x385740u;
    SET_GPR_U32(ctx, 31, 0x385748u);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385748u; }
        if (ctx->pc != 0x385748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385748u; }
        if (ctx->pc != 0x385748u) { return; }
    }
    ctx->pc = 0x385748u;
label_385748:
    // 0x385748: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x385748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_38574c:
    // 0x38574c: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x38574cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_385750:
    // 0x385750: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_385754:
    if (ctx->pc == 0x385754u) {
        ctx->pc = 0x385754u;
            // 0x385754: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x385758u;
        goto label_385758;
    }
    ctx->pc = 0x385750u;
    {
        const bool branch_taken_0x385750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x385750) {
            ctx->pc = 0x385754u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x385750u;
            // 0x385754: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x385768u;
            goto label_385768;
        }
    }
    ctx->pc = 0x385758u;
label_385758:
    // 0x385758: 0xc04008c  jal         func_100230
label_38575c:
    if (ctx->pc == 0x38575Cu) {
        ctx->pc = 0x385760u;
        goto label_385760;
    }
    ctx->pc = 0x385758u;
    SET_GPR_U32(ctx, 31, 0x385760u);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385760u; }
        if (ctx->pc != 0x385760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385760u; }
        if (ctx->pc != 0x385760u) { return; }
    }
    ctx->pc = 0x385760u;
label_385760:
    // 0x385760: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x385760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_385764:
    // 0x385764: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x385764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_385768:
    // 0x385768: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x385768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38576c:
    // 0x38576c: 0x3e00008  jr          $ra
label_385770:
    if (ctx->pc == 0x385770u) {
        ctx->pc = 0x385770u;
            // 0x385770: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x385774u;
        goto label_385774;
    }
    ctx->pc = 0x38576Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38576Cu;
            // 0x385770: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x385774u;
label_385774:
    // 0x385774: 0x0  nop
    ctx->pc = 0x385774u;
    // NOP
label_385778:
    // 0x385778: 0x0  nop
    ctx->pc = 0x385778u;
    // NOP
label_38577c:
    // 0x38577c: 0x0  nop
    ctx->pc = 0x38577cu;
    // NOP
label_385780:
    // 0x385780: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x385780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_385784:
    // 0x385784: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x385784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_385788:
    // 0x385788: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x385788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_38578c:
    // 0x38578c: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x38578cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
label_385790:
    // 0x385790: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x385790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_385794:
    // 0x385794: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x385794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_385798:
    // 0x385798: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x385798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_38579c:
    // 0x38579c: 0x3c05447a  lui         $a1, 0x447A
    ctx->pc = 0x38579cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17530 << 16));
label_3857a0:
    // 0x3857a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3857a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3857a4:
    // 0x3857a4: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x3857a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_3857a8:
    // 0x3857a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3857a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3857ac:
    // 0x3857ac: 0x3443f000  ori         $v1, $v0, 0xF000
    ctx->pc = 0x3857acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_3857b0:
    // 0x3857b0: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x3857b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3857b4:
    // 0x3857b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3857b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3857b8:
    // 0x3857b8: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x3857b8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3857bc:
    // 0x3857bc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3857bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3857c0:
    // 0x3857c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3857c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3857c4:
    // 0x3857c4: 0x0  nop
    ctx->pc = 0x3857c4u;
    // NOP
label_3857c8:
    // 0x3857c8: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x3857c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3857cc:
    // 0x3857cc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3857ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3857d0:
    // 0x3857d0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3857d0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_3857d4:
    // 0x3857d4: 0xe480006c  swc1        $f0, 0x6C($a0)
    ctx->pc = 0x3857d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
label_3857d8:
    // 0x3857d8: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x3857d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3857dc:
    // 0x3857dc: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x3857dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3857e0:
    // 0x3857e0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3857e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3857e4:
    // 0x3857e4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3857e4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_3857e8:
    // 0x3857e8: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x3857e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
label_3857ec:
    // 0x3857ec: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3857ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3857f0:
    // 0x3857f0: 0x8c50077c  lw          $s0, 0x77C($v0)
    ctx->pc = 0x3857f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1916)));
label_3857f4:
    // 0x3857f4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x3857f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_3857f8:
    // 0x3857f8: 0xac900068  sw          $s0, 0x68($a0)
    ctx->pc = 0x3857f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 16));
label_3857fc:
    // 0x3857fc: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3857fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_385800:
    // 0x385800: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x385800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_385804:
    // 0x385804: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x385804u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_385808:
    // 0x385808: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x385808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_38580c:
    // 0x38580c: 0xc040138  jal         func_1004E0
label_385810:
    if (ctx->pc == 0x385810u) {
        ctx->pc = 0x385810u;
            // 0x385810: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x385814u;
        goto label_385814;
    }
    ctx->pc = 0x38580Cu;
    SET_GPR_U32(ctx, 31, 0x385814u);
    ctx->pc = 0x385810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38580Cu;
            // 0x385810: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385814u; }
        if (ctx->pc != 0x385814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385814u; }
        if (ctx->pc != 0x385814u) { return; }
    }
    ctx->pc = 0x385814u;
label_385814:
    // 0x385814: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x385814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
label_385818:
    // 0x385818: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x385818u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
label_38581c:
    // 0x38581c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38581cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_385820:
    // 0x385820: 0x24a55960  addiu       $a1, $a1, 0x5960
    ctx->pc = 0x385820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22880));
label_385824:
    // 0x385824: 0x24c633c0  addiu       $a2, $a2, 0x33C0
    ctx->pc = 0x385824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13248));
label_385828:
    // 0x385828: 0x240703b0  addiu       $a3, $zero, 0x3B0
    ctx->pc = 0x385828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 944));
label_38582c:
    // 0x38582c: 0xc040840  jal         func_102100
label_385830:
    if (ctx->pc == 0x385830u) {
        ctx->pc = 0x385830u;
            // 0x385830: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x385834u;
        goto label_385834;
    }
    ctx->pc = 0x38582Cu;
    SET_GPR_U32(ctx, 31, 0x385834u);
    ctx->pc = 0x385830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38582Cu;
            // 0x385830: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385834u; }
        if (ctx->pc != 0x385834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385834u; }
        if (ctx->pc != 0x385834u) { return; }
    }
    ctx->pc = 0x385834u;
label_385834:
    // 0x385834: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x385834u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_385838:
    // 0x385838: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x385838u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_38583c:
    // 0x38583c: 0xc040138  jal         func_1004E0
label_385840:
    if (ctx->pc == 0x385840u) {
        ctx->pc = 0x385840u;
            // 0x385840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x385844u;
        goto label_385844;
    }
    ctx->pc = 0x38583Cu;
    SET_GPR_U32(ctx, 31, 0x385844u);
    ctx->pc = 0x385840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38583Cu;
            // 0x385840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385844u; }
        if (ctx->pc != 0x385844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385844u; }
        if (ctx->pc != 0x385844u) { return; }
    }
    ctx->pc = 0x385844u;
label_385844:
    // 0x385844: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x385844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_385848:
    // 0x385848: 0xc040138  jal         func_1004E0
label_38584c:
    if (ctx->pc == 0x38584Cu) {
        ctx->pc = 0x38584Cu;
            // 0x38584c: 0xae620058  sw          $v0, 0x58($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 2));
        ctx->pc = 0x385850u;
        goto label_385850;
    }
    ctx->pc = 0x385848u;
    SET_GPR_U32(ctx, 31, 0x385850u);
    ctx->pc = 0x38584Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385848u;
            // 0x38584c: 0xae620058  sw          $v0, 0x58($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385850u; }
        if (ctx->pc != 0x385850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385850u; }
        if (ctx->pc != 0x385850u) { return; }
    }
    ctx->pc = 0x385850u;
label_385850:
    // 0x385850: 0xae620060  sw          $v0, 0x60($s3)
    ctx->pc = 0x385850u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
label_385854:
    // 0x385854: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x385854u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_385858:
    // 0x385858: 0x8e640058  lw          $a0, 0x58($s3)
    ctx->pc = 0x385858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_38585c:
    // 0x38585c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38585cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_385860:
    // 0x385860: 0xc04a576  jal         func_1295D8
label_385864:
    if (ctx->pc == 0x385864u) {
        ctx->pc = 0x385864u;
            // 0x385864: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x385868u;
        goto label_385868;
    }
    ctx->pc = 0x385860u;
    SET_GPR_U32(ctx, 31, 0x385868u);
    ctx->pc = 0x385864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385860u;
            // 0x385864: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385868u; }
        if (ctx->pc != 0x385868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385868u; }
        if (ctx->pc != 0x385868u) { return; }
    }
    ctx->pc = 0x385868u;
label_385868:
    // 0x385868: 0x8e640060  lw          $a0, 0x60($s3)
    ctx->pc = 0x385868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_38586c:
    // 0x38586c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x38586cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_385870:
    // 0x385870: 0xc04a576  jal         func_1295D8
label_385874:
    if (ctx->pc == 0x385874u) {
        ctx->pc = 0x385874u;
            // 0x385874: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x385878u;
        goto label_385878;
    }
    ctx->pc = 0x385870u;
    SET_GPR_U32(ctx, 31, 0x385878u);
    ctx->pc = 0x385874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385870u;
            // 0x385874: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385878u; }
        if (ctx->pc != 0x385878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385878u; }
        if (ctx->pc != 0x385878u) { return; }
    }
    ctx->pc = 0x385878u;
label_385878:
    // 0x385878: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x385878u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_38587c:
    // 0x38587c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x38587cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_385880:
    // 0x385880: 0x8e700068  lw          $s0, 0x68($s3)
    ctx->pc = 0x385880u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
label_385884:
    // 0x385884: 0x8e710054  lw          $s1, 0x54($s3)
    ctx->pc = 0x385884u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_385888:
    // 0x385888: 0xae600064  sw          $zero, 0x64($s3)
    ctx->pc = 0x385888u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 0));
label_38588c:
    // 0x38588c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x38588cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_385890:
    // 0x385890: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x385890u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_385894:
    // 0x385894: 0x320f809  jalr        $t9
label_385898:
    if (ctx->pc == 0x385898u) {
        ctx->pc = 0x385898u;
            // 0x385898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38589Cu;
        goto label_38589c;
    }
    ctx->pc = 0x385894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38589Cu);
        ctx->pc = 0x385898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x385894u;
            // 0x385898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38589Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38589Cu; }
            if (ctx->pc != 0x38589Cu) { return; }
        }
        }
    }
    ctx->pc = 0x38589Cu;
label_38589c:
    // 0x38589c: 0x8e640064  lw          $a0, 0x64($s3)
    ctx->pc = 0x38589cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
label_3858a0:
    // 0x3858a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3858a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3858a4:
    // 0x3858a4: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x3858a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3858a8:
    // 0x3858a8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3858a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3858ac:
    // 0x3858ac: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x3858acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_3858b0:
    // 0x3858b0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3858b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3858b4:
    // 0x3858b4: 0x8e630060  lw          $v1, 0x60($s3)
    ctx->pc = 0x3858b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_3858b8:
    // 0x3858b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3858b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3858bc:
    // 0x3858bc: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x3858bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_3858c0:
    // 0x3858c0: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_3858c4:
    if (ctx->pc == 0x3858C4u) {
        ctx->pc = 0x3858C4u;
            // 0x3858c4: 0x263103b0  addiu       $s1, $s1, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 944));
        ctx->pc = 0x3858C8u;
        goto label_3858c8;
    }
    ctx->pc = 0x3858C0u;
    {
        const bool branch_taken_0x3858c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3858C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3858C0u;
            // 0x3858c4: 0x263103b0  addiu       $s1, $s1, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3858c0) {
            ctx->pc = 0x38588Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_38588c;
        }
    }
    ctx->pc = 0x3858C8u;
label_3858c8:
    // 0x3858c8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3858c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_3858cc:
    // 0x3858cc: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x3858ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3858d0:
    // 0x3858d0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x3858d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_3858d4:
    // 0x3858d4: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x3858d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_3858d8:
    // 0x3858d8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x3858d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_3858dc:
    // 0x3858dc: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x3858dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_3858e0:
    // 0x3858e0: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x3858e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_3858e4:
    // 0x3858e4: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x3858e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_3858e8:
    // 0x3858e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3858e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3858ec:
    // 0x3858ec: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3858ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3858f0:
    // 0x3858f0: 0xc0a7a88  jal         func_29EA20
label_3858f4:
    if (ctx->pc == 0x3858F4u) {
        ctx->pc = 0x3858F4u;
            // 0x3858f4: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->pc = 0x3858F8u;
        goto label_3858f8;
    }
    ctx->pc = 0x3858F0u;
    SET_GPR_U32(ctx, 31, 0x3858F8u);
    ctx->pc = 0x3858F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3858F0u;
            // 0x3858f4: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3858F8u; }
        if (ctx->pc != 0x3858F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3858F8u; }
        if (ctx->pc != 0x3858F8u) { return; }
    }
    ctx->pc = 0x3858F8u;
label_3858f8:
    // 0x3858f8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3858f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3858fc:
    // 0x3858fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3858fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_385900:
    // 0x385900: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_385904:
    if (ctx->pc == 0x385904u) {
        ctx->pc = 0x385904u;
            // 0x385904: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x385908u;
        goto label_385908;
    }
    ctx->pc = 0x385900u;
    {
        const bool branch_taken_0x385900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x385904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x385900u;
            // 0x385904: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385900) {
            ctx->pc = 0x38591Cu;
            goto label_38591c;
        }
    }
    ctx->pc = 0x385908u;
label_385908:
    // 0x385908: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x385908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_38590c:
    // 0x38590c: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x38590cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_385910:
    // 0x385910: 0xc0804bc  jal         func_2012F0
label_385914:
    if (ctx->pc == 0x385914u) {
        ctx->pc = 0x385914u;
            // 0x385914: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x385918u;
        goto label_385918;
    }
    ctx->pc = 0x385910u;
    SET_GPR_U32(ctx, 31, 0x385918u);
    ctx->pc = 0x385914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385910u;
            // 0x385914: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385918u; }
        if (ctx->pc != 0x385918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385918u; }
        if (ctx->pc != 0x385918u) { return; }
    }
    ctx->pc = 0x385918u;
label_385918:
    // 0x385918: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x385918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38591c:
    // 0x38591c: 0xae640084  sw          $a0, 0x84($s3)
    ctx->pc = 0x38591cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 4));
label_385920:
    // 0x385920: 0xc04c968  jal         func_1325A0
label_385924:
    if (ctx->pc == 0x385924u) {
        ctx->pc = 0x385924u;
            // 0x385924: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x385928u;
        goto label_385928;
    }
    ctx->pc = 0x385920u;
    SET_GPR_U32(ctx, 31, 0x385928u);
    ctx->pc = 0x385924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385920u;
            // 0x385924: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385928u; }
        if (ctx->pc != 0x385928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385928u; }
        if (ctx->pc != 0x385928u) { return; }
    }
    ctx->pc = 0x385928u;
label_385928:
    // 0x385928: 0x8e670084  lw          $a3, 0x84($s3)
    ctx->pc = 0x385928u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_38592c:
    // 0x38592c: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x38592cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_385930:
    // 0x385930: 0x26640074  addiu       $a0, $s3, 0x74
    ctx->pc = 0x385930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 116));
label_385934:
    // 0x385934: 0x24a55c18  addiu       $a1, $a1, 0x5C18
    ctx->pc = 0x385934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23576));
label_385938:
    // 0x385938: 0xc0d37ec  jal         func_34DFB0
label_38593c:
    if (ctx->pc == 0x38593Cu) {
        ctx->pc = 0x38593Cu;
            // 0x38593c: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x385940u;
        goto label_385940;
    }
    ctx->pc = 0x385938u;
    SET_GPR_U32(ctx, 31, 0x385940u);
    ctx->pc = 0x38593Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385938u;
            // 0x38593c: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385940u; }
        if (ctx->pc != 0x385940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385940u; }
        if (ctx->pc != 0x385940u) { return; }
    }
    ctx->pc = 0x385940u;
label_385940:
    // 0x385940: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x385940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_385944:
    // 0x385944: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x385944u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_385948:
    // 0x385948: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x385948u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38594c:
    // 0x38594c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38594cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_385950:
    // 0x385950: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x385950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_385954:
    // 0x385954: 0x3e00008  jr          $ra
label_385958:
    if (ctx->pc == 0x385958u) {
        ctx->pc = 0x385958u;
            // 0x385958: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x38595Cu;
        goto label_38595c;
    }
    ctx->pc = 0x385954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x385954u;
            // 0x385958: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38595Cu;
label_38595c:
    // 0x38595c: 0x0  nop
    ctx->pc = 0x38595cu;
    // NOP
label_385960:
    // 0x385960: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x385960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_385964:
    // 0x385964: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x385964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_385968:
    // 0x385968: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x385968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_38596c:
    // 0x38596c: 0x24425b08  addiu       $v0, $v0, 0x5B08
    ctx->pc = 0x38596cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23304));
label_385970:
    // 0x385970: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x385970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_385974:
    // 0x385974: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x385974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_385978:
    // 0x385978: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x385978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38597c:
    // 0x38597c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x38597cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_385980:
    // 0x385980: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x385980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_385984:
    // 0x385984: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x385984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_385988:
    // 0x385988: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x385988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_38598c:
    // 0x38598c: 0xc04a576  jal         func_1295D8
label_385990:
    if (ctx->pc == 0x385990u) {
        ctx->pc = 0x385990u;
            // 0x385990: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x385994u;
        goto label_385994;
    }
    ctx->pc = 0x38598Cu;
    SET_GPR_U32(ctx, 31, 0x385994u);
    ctx->pc = 0x385990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38598Cu;
            // 0x385990: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385994u; }
        if (ctx->pc != 0x385994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385994u; }
        if (ctx->pc != 0x385994u) { return; }
    }
    ctx->pc = 0x385994u;
label_385994:
    // 0x385994: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x385994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_385998:
    // 0x385998: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x385998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_38599c:
    // 0x38599c: 0x24422e00  addiu       $v0, $v0, 0x2E00
    ctx->pc = 0x38599cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11776));
label_3859a0:
    // 0x3859a0: 0x24710030  addiu       $s1, $v1, 0x30
    ctx->pc = 0x3859a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_3859a4:
    // 0x3859a4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x3859a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_3859a8:
    // 0x3859a8: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x3859a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3859ac:
    // 0x3859ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3859acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3859b0:
    // 0x3859b0: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x3859b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_3859b4:
    // 0x3859b4: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x3859b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
label_3859b8:
    // 0x3859b8: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x3859b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_3859bc:
    // 0x3859bc: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x3859bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_3859c0:
    // 0x3859c0: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x3859c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
label_3859c4:
    // 0x3859c4: 0xc04c968  jal         func_1325A0
label_3859c8:
    if (ctx->pc == 0x3859C8u) {
        ctx->pc = 0x3859C8u;
            // 0x3859c8: 0xa20000e8  sb          $zero, 0xE8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 232), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3859CCu;
        goto label_3859cc;
    }
    ctx->pc = 0x3859C4u;
    SET_GPR_U32(ctx, 31, 0x3859CCu);
    ctx->pc = 0x3859C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3859C4u;
            // 0x3859c8: 0xa20000e8  sb          $zero, 0xE8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 232), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3859CCu; }
        if (ctx->pc != 0x3859CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3859CCu; }
        if (ctx->pc != 0x3859CCu) { return; }
    }
    ctx->pc = 0x3859CCu;
label_3859cc:
    // 0x3859cc: 0xc04c968  jal         func_1325A0
label_3859d0:
    if (ctx->pc == 0x3859D0u) {
        ctx->pc = 0x3859D0u;
            // 0x3859d0: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->pc = 0x3859D4u;
        goto label_3859d4;
    }
    ctx->pc = 0x3859CCu;
    SET_GPR_U32(ctx, 31, 0x3859D4u);
    ctx->pc = 0x3859D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3859CCu;
            // 0x3859d0: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3859D4u; }
        if (ctx->pc != 0x3859D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3859D4u; }
        if (ctx->pc != 0x3859D4u) { return; }
    }
    ctx->pc = 0x3859D4u;
label_3859d4:
    // 0x3859d4: 0xc04c968  jal         func_1325A0
label_3859d8:
    if (ctx->pc == 0x3859D8u) {
        ctx->pc = 0x3859D8u;
            // 0x3859d8: 0x26440080  addiu       $a0, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->pc = 0x3859DCu;
        goto label_3859dc;
    }
    ctx->pc = 0x3859D4u;
    SET_GPR_U32(ctx, 31, 0x3859DCu);
    ctx->pc = 0x3859D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3859D4u;
            // 0x3859d8: 0x26440080  addiu       $a0, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3859DCu; }
        if (ctx->pc != 0x3859DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3859DCu; }
        if (ctx->pc != 0x3859DCu) { return; }
    }
    ctx->pc = 0x3859DCu;
label_3859dc:
    // 0x3859dc: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x3859dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
label_3859e0:
    // 0x3859e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3859e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3859e4:
    // 0x3859e4: 0xae4000a0  sw          $zero, 0xA0($s2)
    ctx->pc = 0x3859e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 0));
label_3859e8:
    // 0x3859e8: 0xae4000a4  sw          $zero, 0xA4($s2)
    ctx->pc = 0x3859e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 0));
label_3859ec:
    // 0x3859ec: 0xc04f26c  jal         func_13C9B0
label_3859f0:
    if (ctx->pc == 0x3859F0u) {
        ctx->pc = 0x3859F0u;
            // 0x3859f0: 0xae4000a8  sw          $zero, 0xA8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 0));
        ctx->pc = 0x3859F4u;
        goto label_3859f4;
    }
    ctx->pc = 0x3859ECu;
    SET_GPR_U32(ctx, 31, 0x3859F4u);
    ctx->pc = 0x3859F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3859ECu;
            // 0x3859f0: 0xae4000a8  sw          $zero, 0xA8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3859F4u; }
        if (ctx->pc != 0x3859F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3859F4u; }
        if (ctx->pc != 0x3859F4u) { return; }
    }
    ctx->pc = 0x3859F4u;
label_3859f4:
    // 0x3859f4: 0xc04c968  jal         func_1325A0
label_3859f8:
    if (ctx->pc == 0x3859F8u) {
        ctx->pc = 0x3859F8u;
            // 0x3859f8: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x3859FCu;
        goto label_3859fc;
    }
    ctx->pc = 0x3859F4u;
    SET_GPR_U32(ctx, 31, 0x3859FCu);
    ctx->pc = 0x3859F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3859F4u;
            // 0x3859f8: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3859FCu; }
        if (ctx->pc != 0x3859FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3859FCu; }
        if (ctx->pc != 0x3859FCu) { return; }
    }
    ctx->pc = 0x3859FCu;
label_3859fc:
    // 0x3859fc: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3859fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_385a00:
    // 0x385a00: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x385a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_385a04:
    // 0x385a04: 0xc04cc04  jal         func_133010
label_385a08:
    if (ctx->pc == 0x385A08u) {
        ctx->pc = 0x385A08u;
            // 0x385a08: 0x24a55d40  addiu       $a1, $a1, 0x5D40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23872));
        ctx->pc = 0x385A0Cu;
        goto label_385a0c;
    }
    ctx->pc = 0x385A04u;
    SET_GPR_U32(ctx, 31, 0x385A0Cu);
    ctx->pc = 0x385A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385A04u;
            // 0x385a08: 0x24a55d40  addiu       $a1, $a1, 0x5D40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385A0Cu; }
        if (ctx->pc != 0x385A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385A0Cu; }
        if (ctx->pc != 0x385A0Cu) { return; }
    }
    ctx->pc = 0x385A0Cu;
label_385a0c:
    // 0x385a0c: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x385a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
label_385a10:
    // 0x385a10: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x385a10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_385a14:
    // 0x385a14: 0xae200104  sw          $zero, 0x104($s1)
    ctx->pc = 0x385a14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
label_385a18:
    // 0x385a18: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x385a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_385a1c:
    // 0x385a1c: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x385a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
label_385a20:
    // 0x385a20: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x385a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_385a24:
    // 0x385a24: 0xa6200110  sh          $zero, 0x110($s1)
    ctx->pc = 0x385a24u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 272), (uint16_t)GPR_U32(ctx, 0));
label_385a28:
    // 0x385a28: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x385a28u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_385a2c:
    // 0x385a2c: 0xa6200112  sh          $zero, 0x112($s1)
    ctx->pc = 0x385a2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 274), (uint16_t)GPR_U32(ctx, 0));
label_385a30:
    // 0x385a30: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x385a30u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_385a34:
    // 0x385a34: 0xa6220114  sh          $v0, 0x114($s1)
    ctx->pc = 0x385a34u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 276), (uint16_t)GPR_U32(ctx, 2));
label_385a38:
    // 0x385a38: 0xc04cbd8  jal         func_132F60
label_385a3c:
    if (ctx->pc == 0x385A3Cu) {
        ctx->pc = 0x385A3Cu;
            // 0x385a3c: 0xa6200116  sh          $zero, 0x116($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 278), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x385A40u;
        goto label_385a40;
    }
    ctx->pc = 0x385A38u;
    SET_GPR_U32(ctx, 31, 0x385A40u);
    ctx->pc = 0x385A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385A38u;
            // 0x385a3c: 0xa6200116  sh          $zero, 0x116($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 278), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385A40u; }
        if (ctx->pc != 0x385A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385A40u; }
        if (ctx->pc != 0x385A40u) { return; }
    }
    ctx->pc = 0x385A40u;
label_385a40:
    // 0x385a40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x385a40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_385a44:
    // 0x385a44: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x385a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_385a48:
    // 0x385a48: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x385a48u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_385a4c:
    // 0x385a4c: 0xc04cbd8  jal         func_132F60
label_385a50:
    if (ctx->pc == 0x385A50u) {
        ctx->pc = 0x385A50u;
            // 0x385a50: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x385A54u;
        goto label_385a54;
    }
    ctx->pc = 0x385A4Cu;
    SET_GPR_U32(ctx, 31, 0x385A54u);
    ctx->pc = 0x385A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385A4Cu;
            // 0x385a50: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385A54u; }
        if (ctx->pc != 0x385A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385A54u; }
        if (ctx->pc != 0x385A54u) { return; }
    }
    ctx->pc = 0x385A54u;
label_385a54:
    // 0x385a54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x385a54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_385a58:
    // 0x385a58: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x385a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_385a5c:
    // 0x385a5c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x385a5cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_385a60:
    // 0x385a60: 0xc04cbd8  jal         func_132F60
label_385a64:
    if (ctx->pc == 0x385A64u) {
        ctx->pc = 0x385A64u;
            // 0x385a64: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x385A68u;
        goto label_385a68;
    }
    ctx->pc = 0x385A60u;
    SET_GPR_U32(ctx, 31, 0x385A68u);
    ctx->pc = 0x385A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385A60u;
            // 0x385a64: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385A68u; }
        if (ctx->pc != 0x385A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385A68u; }
        if (ctx->pc != 0x385A68u) { return; }
    }
    ctx->pc = 0x385A68u;
label_385a68:
    // 0x385a68: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x385a68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_385a6c:
    // 0x385a6c: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x385a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_385a70:
    // 0x385a70: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x385a70u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_385a74:
    // 0x385a74: 0xc04cbd8  jal         func_132F60
label_385a78:
    if (ctx->pc == 0x385A78u) {
        ctx->pc = 0x385A78u;
            // 0x385a78: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x385A7Cu;
        goto label_385a7c;
    }
    ctx->pc = 0x385A74u;
    SET_GPR_U32(ctx, 31, 0x385A7Cu);
    ctx->pc = 0x385A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385A74u;
            // 0x385a78: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385A7Cu; }
        if (ctx->pc != 0x385A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385A7Cu; }
        if (ctx->pc != 0x385A7Cu) { return; }
    }
    ctx->pc = 0x385A7Cu;
label_385a7c:
    // 0x385a7c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x385a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_385a80:
    // 0x385a80: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x385a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_385a84:
    // 0x385a84: 0x246378c0  addiu       $v1, $v1, 0x78C0
    ctx->pc = 0x385a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30912));
label_385a88:
    // 0x385a88: 0x26110210  addiu       $s1, $s0, 0x210
    ctx->pc = 0x385a88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
label_385a8c:
    // 0x385a8c: 0x244278cc  addiu       $v0, $v0, 0x78CC
    ctx->pc = 0x385a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30924));
label_385a90:
    // 0x385a90: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x385a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_385a94:
    // 0x385a94: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x385a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_385a98:
    // 0x385a98: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x385a98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_385a9c:
    // 0x385a9c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x385a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_385aa0:
    // 0x385aa0: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x385aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_385aa4:
    // 0x385aa4: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x385aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
label_385aa8:
    // 0x385aa8: 0xae020210  sw          $v0, 0x210($s0)
    ctx->pc = 0x385aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 2));
label_385aac:
    // 0x385aac: 0xae0002b0  sw          $zero, 0x2B0($s0)
    ctx->pc = 0x385aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 0));
label_385ab0:
    // 0x385ab0: 0xae0002b4  sw          $zero, 0x2B4($s0)
    ctx->pc = 0x385ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 0));
label_385ab4:
    // 0x385ab4: 0xc04c968  jal         func_1325A0
label_385ab8:
    if (ctx->pc == 0x385AB8u) {
        ctx->pc = 0x385AB8u;
            // 0x385ab8: 0xa20002b8  sb          $zero, 0x2B8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 696), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x385ABCu;
        goto label_385abc;
    }
    ctx->pc = 0x385AB4u;
    SET_GPR_U32(ctx, 31, 0x385ABCu);
    ctx->pc = 0x385AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385AB4u;
            // 0x385ab8: 0xa20002b8  sb          $zero, 0x2B8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 696), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385ABCu; }
        if (ctx->pc != 0x385ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385ABCu; }
        if (ctx->pc != 0x385ABCu) { return; }
    }
    ctx->pc = 0x385ABCu;
label_385abc:
    // 0x385abc: 0xc04c968  jal         func_1325A0
label_385ac0:
    if (ctx->pc == 0x385AC0u) {
        ctx->pc = 0x385AC0u;
            // 0x385ac0: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->pc = 0x385AC4u;
        goto label_385ac4;
    }
    ctx->pc = 0x385ABCu;
    SET_GPR_U32(ctx, 31, 0x385AC4u);
    ctx->pc = 0x385AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385ABCu;
            // 0x385ac0: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385AC4u; }
        if (ctx->pc != 0x385AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385AC4u; }
        if (ctx->pc != 0x385AC4u) { return; }
    }
    ctx->pc = 0x385AC4u;
label_385ac4:
    // 0x385ac4: 0xc04c968  jal         func_1325A0
label_385ac8:
    if (ctx->pc == 0x385AC8u) {
        ctx->pc = 0x385AC8u;
            // 0x385ac8: 0x26440080  addiu       $a0, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->pc = 0x385ACCu;
        goto label_385acc;
    }
    ctx->pc = 0x385AC4u;
    SET_GPR_U32(ctx, 31, 0x385ACCu);
    ctx->pc = 0x385AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385AC4u;
            // 0x385ac8: 0x26440080  addiu       $a0, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385ACCu; }
        if (ctx->pc != 0x385ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385ACCu; }
        if (ctx->pc != 0x385ACCu) { return; }
    }
    ctx->pc = 0x385ACCu;
label_385acc:
    // 0x385acc: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x385accu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
label_385ad0:
    // 0x385ad0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x385ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_385ad4:
    // 0x385ad4: 0xae4000a0  sw          $zero, 0xA0($s2)
    ctx->pc = 0x385ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 0));
label_385ad8:
    // 0x385ad8: 0xae4000a4  sw          $zero, 0xA4($s2)
    ctx->pc = 0x385ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 0));
label_385adc:
    // 0x385adc: 0xc04f26c  jal         func_13C9B0
label_385ae0:
    if (ctx->pc == 0x385AE0u) {
        ctx->pc = 0x385AE0u;
            // 0x385ae0: 0xae4000a8  sw          $zero, 0xA8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 0));
        ctx->pc = 0x385AE4u;
        goto label_385ae4;
    }
    ctx->pc = 0x385ADCu;
    SET_GPR_U32(ctx, 31, 0x385AE4u);
    ctx->pc = 0x385AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385ADCu;
            // 0x385ae0: 0xae4000a8  sw          $zero, 0xA8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385AE4u; }
        if (ctx->pc != 0x385AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385AE4u; }
        if (ctx->pc != 0x385AE4u) { return; }
    }
    ctx->pc = 0x385AE4u;
label_385ae4:
    // 0x385ae4: 0xc04c968  jal         func_1325A0
label_385ae8:
    if (ctx->pc == 0x385AE8u) {
        ctx->pc = 0x385AE8u;
            // 0x385ae8: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->pc = 0x385AECu;
        goto label_385aec;
    }
    ctx->pc = 0x385AE4u;
    SET_GPR_U32(ctx, 31, 0x385AECu);
    ctx->pc = 0x385AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385AE4u;
            // 0x385ae8: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385AECu; }
        if (ctx->pc != 0x385AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385AECu; }
        if (ctx->pc != 0x385AECu) { return; }
    }
    ctx->pc = 0x385AECu;
label_385aec:
    // 0x385aec: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x385aecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_385af0:
    // 0x385af0: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x385af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_385af4:
    // 0x385af4: 0xc04cc04  jal         func_133010
label_385af8:
    if (ctx->pc == 0x385AF8u) {
        ctx->pc = 0x385AF8u;
            // 0x385af8: 0x24a55d40  addiu       $a1, $a1, 0x5D40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23872));
        ctx->pc = 0x385AFCu;
        goto label_385afc;
    }
    ctx->pc = 0x385AF4u;
    SET_GPR_U32(ctx, 31, 0x385AFCu);
    ctx->pc = 0x385AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385AF4u;
            // 0x385af8: 0x24a55d40  addiu       $a1, $a1, 0x5D40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385AFCu; }
        if (ctx->pc != 0x385AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385AFCu; }
        if (ctx->pc != 0x385AFCu) { return; }
    }
    ctx->pc = 0x385AFCu;
label_385afc:
    // 0x385afc: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x385afcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
label_385b00:
    // 0x385b00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x385b00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_385b04:
    // 0x385b04: 0xae200104  sw          $zero, 0x104($s1)
    ctx->pc = 0x385b04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
label_385b08:
    // 0x385b08: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x385b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_385b0c:
    // 0x385b0c: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x385b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
label_385b10:
    // 0x385b10: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x385b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_385b14:
    // 0x385b14: 0xa6200110  sh          $zero, 0x110($s1)
    ctx->pc = 0x385b14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 272), (uint16_t)GPR_U32(ctx, 0));
label_385b18:
    // 0x385b18: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x385b18u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_385b1c:
    // 0x385b1c: 0xa6200112  sh          $zero, 0x112($s1)
    ctx->pc = 0x385b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 274), (uint16_t)GPR_U32(ctx, 0));
label_385b20:
    // 0x385b20: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x385b20u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_385b24:
    // 0x385b24: 0xa6220114  sh          $v0, 0x114($s1)
    ctx->pc = 0x385b24u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 276), (uint16_t)GPR_U32(ctx, 2));
label_385b28:
    // 0x385b28: 0xc04cbd8  jal         func_132F60
label_385b2c:
    if (ctx->pc == 0x385B2Cu) {
        ctx->pc = 0x385B2Cu;
            // 0x385b2c: 0xa6200116  sh          $zero, 0x116($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 278), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x385B30u;
        goto label_385b30;
    }
    ctx->pc = 0x385B28u;
    SET_GPR_U32(ctx, 31, 0x385B30u);
    ctx->pc = 0x385B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385B28u;
            // 0x385b2c: 0xa6200116  sh          $zero, 0x116($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 278), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385B30u; }
        if (ctx->pc != 0x385B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385B30u; }
        if (ctx->pc != 0x385B30u) { return; }
    }
    ctx->pc = 0x385B30u;
label_385b30:
    // 0x385b30: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x385b30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_385b34:
    // 0x385b34: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x385b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_385b38:
    // 0x385b38: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x385b38u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_385b3c:
    // 0x385b3c: 0xc04cbd8  jal         func_132F60
label_385b40:
    if (ctx->pc == 0x385B40u) {
        ctx->pc = 0x385B40u;
            // 0x385b40: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x385B44u;
        goto label_385b44;
    }
    ctx->pc = 0x385B3Cu;
    SET_GPR_U32(ctx, 31, 0x385B44u);
    ctx->pc = 0x385B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385B3Cu;
            // 0x385b40: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385B44u; }
        if (ctx->pc != 0x385B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385B44u; }
        if (ctx->pc != 0x385B44u) { return; }
    }
    ctx->pc = 0x385B44u;
label_385b44:
    // 0x385b44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x385b44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_385b48:
    // 0x385b48: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x385b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_385b4c:
    // 0x385b4c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x385b4cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_385b50:
    // 0x385b50: 0xc04cbd8  jal         func_132F60
label_385b54:
    if (ctx->pc == 0x385B54u) {
        ctx->pc = 0x385B54u;
            // 0x385b54: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x385B58u;
        goto label_385b58;
    }
    ctx->pc = 0x385B50u;
    SET_GPR_U32(ctx, 31, 0x385B58u);
    ctx->pc = 0x385B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385B50u;
            // 0x385b54: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385B58u; }
        if (ctx->pc != 0x385B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385B58u; }
        if (ctx->pc != 0x385B58u) { return; }
    }
    ctx->pc = 0x385B58u;
label_385b58:
    // 0x385b58: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x385b58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_385b5c:
    // 0x385b5c: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x385b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_385b60:
    // 0x385b60: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x385b60u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_385b64:
    // 0x385b64: 0xc04cbd8  jal         func_132F60
label_385b68:
    if (ctx->pc == 0x385B68u) {
        ctx->pc = 0x385B68u;
            // 0x385b68: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x385B6Cu;
        goto label_385b6c;
    }
    ctx->pc = 0x385B64u;
    SET_GPR_U32(ctx, 31, 0x385B6Cu);
    ctx->pc = 0x385B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x385B64u;
            // 0x385b68: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385B6Cu; }
        if (ctx->pc != 0x385B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x385B6Cu; }
        if (ctx->pc != 0x385B6Cu) { return; }
    }
    ctx->pc = 0x385B6Cu;
label_385b6c:
    // 0x385b6c: 0xae0003a4  sw          $zero, 0x3A4($s0)
    ctx->pc = 0x385b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 932), GPR_U32(ctx, 0));
label_385b70:
    // 0x385b70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x385b70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_385b74:
    // 0x385b74: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x385b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_385b78:
    // 0x385b78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x385b78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_385b7c:
    // 0x385b7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x385b7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_385b80:
    // 0x385b80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x385b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_385b84:
    // 0x385b84: 0x3e00008  jr          $ra
label_385b88:
    if (ctx->pc == 0x385B88u) {
        ctx->pc = 0x385B88u;
            // 0x385b88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x385B8Cu;
        goto label_385b8c;
    }
    ctx->pc = 0x385B84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x385B84u;
            // 0x385b88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x385B8Cu;
label_385b8c:
    // 0x385b8c: 0x0  nop
    ctx->pc = 0x385b8cu;
    // NOP
}
