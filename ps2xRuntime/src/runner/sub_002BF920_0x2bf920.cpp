#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BF920
// Address: 0x2bf920 - 0x2bfc50
void sub_002BF920_0x2bf920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF920_0x2bf920");
#endif

    switch (ctx->pc) {
        case 0x2bf920u: goto label_2bf920;
        case 0x2bf924u: goto label_2bf924;
        case 0x2bf928u: goto label_2bf928;
        case 0x2bf92cu: goto label_2bf92c;
        case 0x2bf930u: goto label_2bf930;
        case 0x2bf934u: goto label_2bf934;
        case 0x2bf938u: goto label_2bf938;
        case 0x2bf93cu: goto label_2bf93c;
        case 0x2bf940u: goto label_2bf940;
        case 0x2bf944u: goto label_2bf944;
        case 0x2bf948u: goto label_2bf948;
        case 0x2bf94cu: goto label_2bf94c;
        case 0x2bf950u: goto label_2bf950;
        case 0x2bf954u: goto label_2bf954;
        case 0x2bf958u: goto label_2bf958;
        case 0x2bf95cu: goto label_2bf95c;
        case 0x2bf960u: goto label_2bf960;
        case 0x2bf964u: goto label_2bf964;
        case 0x2bf968u: goto label_2bf968;
        case 0x2bf96cu: goto label_2bf96c;
        case 0x2bf970u: goto label_2bf970;
        case 0x2bf974u: goto label_2bf974;
        case 0x2bf978u: goto label_2bf978;
        case 0x2bf97cu: goto label_2bf97c;
        case 0x2bf980u: goto label_2bf980;
        case 0x2bf984u: goto label_2bf984;
        case 0x2bf988u: goto label_2bf988;
        case 0x2bf98cu: goto label_2bf98c;
        case 0x2bf990u: goto label_2bf990;
        case 0x2bf994u: goto label_2bf994;
        case 0x2bf998u: goto label_2bf998;
        case 0x2bf99cu: goto label_2bf99c;
        case 0x2bf9a0u: goto label_2bf9a0;
        case 0x2bf9a4u: goto label_2bf9a4;
        case 0x2bf9a8u: goto label_2bf9a8;
        case 0x2bf9acu: goto label_2bf9ac;
        case 0x2bf9b0u: goto label_2bf9b0;
        case 0x2bf9b4u: goto label_2bf9b4;
        case 0x2bf9b8u: goto label_2bf9b8;
        case 0x2bf9bcu: goto label_2bf9bc;
        case 0x2bf9c0u: goto label_2bf9c0;
        case 0x2bf9c4u: goto label_2bf9c4;
        case 0x2bf9c8u: goto label_2bf9c8;
        case 0x2bf9ccu: goto label_2bf9cc;
        case 0x2bf9d0u: goto label_2bf9d0;
        case 0x2bf9d4u: goto label_2bf9d4;
        case 0x2bf9d8u: goto label_2bf9d8;
        case 0x2bf9dcu: goto label_2bf9dc;
        case 0x2bf9e0u: goto label_2bf9e0;
        case 0x2bf9e4u: goto label_2bf9e4;
        case 0x2bf9e8u: goto label_2bf9e8;
        case 0x2bf9ecu: goto label_2bf9ec;
        case 0x2bf9f0u: goto label_2bf9f0;
        case 0x2bf9f4u: goto label_2bf9f4;
        case 0x2bf9f8u: goto label_2bf9f8;
        case 0x2bf9fcu: goto label_2bf9fc;
        case 0x2bfa00u: goto label_2bfa00;
        case 0x2bfa04u: goto label_2bfa04;
        case 0x2bfa08u: goto label_2bfa08;
        case 0x2bfa0cu: goto label_2bfa0c;
        case 0x2bfa10u: goto label_2bfa10;
        case 0x2bfa14u: goto label_2bfa14;
        case 0x2bfa18u: goto label_2bfa18;
        case 0x2bfa1cu: goto label_2bfa1c;
        case 0x2bfa20u: goto label_2bfa20;
        case 0x2bfa24u: goto label_2bfa24;
        case 0x2bfa28u: goto label_2bfa28;
        case 0x2bfa2cu: goto label_2bfa2c;
        case 0x2bfa30u: goto label_2bfa30;
        case 0x2bfa34u: goto label_2bfa34;
        case 0x2bfa38u: goto label_2bfa38;
        case 0x2bfa3cu: goto label_2bfa3c;
        case 0x2bfa40u: goto label_2bfa40;
        case 0x2bfa44u: goto label_2bfa44;
        case 0x2bfa48u: goto label_2bfa48;
        case 0x2bfa4cu: goto label_2bfa4c;
        case 0x2bfa50u: goto label_2bfa50;
        case 0x2bfa54u: goto label_2bfa54;
        case 0x2bfa58u: goto label_2bfa58;
        case 0x2bfa5cu: goto label_2bfa5c;
        case 0x2bfa60u: goto label_2bfa60;
        case 0x2bfa64u: goto label_2bfa64;
        case 0x2bfa68u: goto label_2bfa68;
        case 0x2bfa6cu: goto label_2bfa6c;
        case 0x2bfa70u: goto label_2bfa70;
        case 0x2bfa74u: goto label_2bfa74;
        case 0x2bfa78u: goto label_2bfa78;
        case 0x2bfa7cu: goto label_2bfa7c;
        case 0x2bfa80u: goto label_2bfa80;
        case 0x2bfa84u: goto label_2bfa84;
        case 0x2bfa88u: goto label_2bfa88;
        case 0x2bfa8cu: goto label_2bfa8c;
        case 0x2bfa90u: goto label_2bfa90;
        case 0x2bfa94u: goto label_2bfa94;
        case 0x2bfa98u: goto label_2bfa98;
        case 0x2bfa9cu: goto label_2bfa9c;
        case 0x2bfaa0u: goto label_2bfaa0;
        case 0x2bfaa4u: goto label_2bfaa4;
        case 0x2bfaa8u: goto label_2bfaa8;
        case 0x2bfaacu: goto label_2bfaac;
        case 0x2bfab0u: goto label_2bfab0;
        case 0x2bfab4u: goto label_2bfab4;
        case 0x2bfab8u: goto label_2bfab8;
        case 0x2bfabcu: goto label_2bfabc;
        case 0x2bfac0u: goto label_2bfac0;
        case 0x2bfac4u: goto label_2bfac4;
        case 0x2bfac8u: goto label_2bfac8;
        case 0x2bfaccu: goto label_2bfacc;
        case 0x2bfad0u: goto label_2bfad0;
        case 0x2bfad4u: goto label_2bfad4;
        case 0x2bfad8u: goto label_2bfad8;
        case 0x2bfadcu: goto label_2bfadc;
        case 0x2bfae0u: goto label_2bfae0;
        case 0x2bfae4u: goto label_2bfae4;
        case 0x2bfae8u: goto label_2bfae8;
        case 0x2bfaecu: goto label_2bfaec;
        case 0x2bfaf0u: goto label_2bfaf0;
        case 0x2bfaf4u: goto label_2bfaf4;
        case 0x2bfaf8u: goto label_2bfaf8;
        case 0x2bfafcu: goto label_2bfafc;
        case 0x2bfb00u: goto label_2bfb00;
        case 0x2bfb04u: goto label_2bfb04;
        case 0x2bfb08u: goto label_2bfb08;
        case 0x2bfb0cu: goto label_2bfb0c;
        case 0x2bfb10u: goto label_2bfb10;
        case 0x2bfb14u: goto label_2bfb14;
        case 0x2bfb18u: goto label_2bfb18;
        case 0x2bfb1cu: goto label_2bfb1c;
        case 0x2bfb20u: goto label_2bfb20;
        case 0x2bfb24u: goto label_2bfb24;
        case 0x2bfb28u: goto label_2bfb28;
        case 0x2bfb2cu: goto label_2bfb2c;
        case 0x2bfb30u: goto label_2bfb30;
        case 0x2bfb34u: goto label_2bfb34;
        case 0x2bfb38u: goto label_2bfb38;
        case 0x2bfb3cu: goto label_2bfb3c;
        case 0x2bfb40u: goto label_2bfb40;
        case 0x2bfb44u: goto label_2bfb44;
        case 0x2bfb48u: goto label_2bfb48;
        case 0x2bfb4cu: goto label_2bfb4c;
        case 0x2bfb50u: goto label_2bfb50;
        case 0x2bfb54u: goto label_2bfb54;
        case 0x2bfb58u: goto label_2bfb58;
        case 0x2bfb5cu: goto label_2bfb5c;
        case 0x2bfb60u: goto label_2bfb60;
        case 0x2bfb64u: goto label_2bfb64;
        case 0x2bfb68u: goto label_2bfb68;
        case 0x2bfb6cu: goto label_2bfb6c;
        case 0x2bfb70u: goto label_2bfb70;
        case 0x2bfb74u: goto label_2bfb74;
        case 0x2bfb78u: goto label_2bfb78;
        case 0x2bfb7cu: goto label_2bfb7c;
        case 0x2bfb80u: goto label_2bfb80;
        case 0x2bfb84u: goto label_2bfb84;
        case 0x2bfb88u: goto label_2bfb88;
        case 0x2bfb8cu: goto label_2bfb8c;
        case 0x2bfb90u: goto label_2bfb90;
        case 0x2bfb94u: goto label_2bfb94;
        case 0x2bfb98u: goto label_2bfb98;
        case 0x2bfb9cu: goto label_2bfb9c;
        case 0x2bfba0u: goto label_2bfba0;
        case 0x2bfba4u: goto label_2bfba4;
        case 0x2bfba8u: goto label_2bfba8;
        case 0x2bfbacu: goto label_2bfbac;
        case 0x2bfbb0u: goto label_2bfbb0;
        case 0x2bfbb4u: goto label_2bfbb4;
        case 0x2bfbb8u: goto label_2bfbb8;
        case 0x2bfbbcu: goto label_2bfbbc;
        case 0x2bfbc0u: goto label_2bfbc0;
        case 0x2bfbc4u: goto label_2bfbc4;
        case 0x2bfbc8u: goto label_2bfbc8;
        case 0x2bfbccu: goto label_2bfbcc;
        case 0x2bfbd0u: goto label_2bfbd0;
        case 0x2bfbd4u: goto label_2bfbd4;
        case 0x2bfbd8u: goto label_2bfbd8;
        case 0x2bfbdcu: goto label_2bfbdc;
        case 0x2bfbe0u: goto label_2bfbe0;
        case 0x2bfbe4u: goto label_2bfbe4;
        case 0x2bfbe8u: goto label_2bfbe8;
        case 0x2bfbecu: goto label_2bfbec;
        case 0x2bfbf0u: goto label_2bfbf0;
        case 0x2bfbf4u: goto label_2bfbf4;
        case 0x2bfbf8u: goto label_2bfbf8;
        case 0x2bfbfcu: goto label_2bfbfc;
        case 0x2bfc00u: goto label_2bfc00;
        case 0x2bfc04u: goto label_2bfc04;
        case 0x2bfc08u: goto label_2bfc08;
        case 0x2bfc0cu: goto label_2bfc0c;
        case 0x2bfc10u: goto label_2bfc10;
        case 0x2bfc14u: goto label_2bfc14;
        case 0x2bfc18u: goto label_2bfc18;
        case 0x2bfc1cu: goto label_2bfc1c;
        case 0x2bfc20u: goto label_2bfc20;
        case 0x2bfc24u: goto label_2bfc24;
        case 0x2bfc28u: goto label_2bfc28;
        case 0x2bfc2cu: goto label_2bfc2c;
        case 0x2bfc30u: goto label_2bfc30;
        case 0x2bfc34u: goto label_2bfc34;
        case 0x2bfc38u: goto label_2bfc38;
        case 0x2bfc3cu: goto label_2bfc3c;
        case 0x2bfc40u: goto label_2bfc40;
        case 0x2bfc44u: goto label_2bfc44;
        case 0x2bfc48u: goto label_2bfc48;
        case 0x2bfc4cu: goto label_2bfc4c;
        default: break;
    }

    ctx->pc = 0x2bf920u;

label_2bf920:
    // 0x2bf920: 0x80788fc  j           func_1E23F0
label_2bf924:
    if (ctx->pc == 0x2BF924u) {
        ctx->pc = 0x2BF928u;
        goto label_2bf928;
    }
    ctx->pc = 0x2BF920u;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2BF928u;
label_2bf928:
    // 0x2bf928: 0x0  nop
    ctx->pc = 0x2bf928u;
    // NOP
label_2bf92c:
    // 0x2bf92c: 0x0  nop
    ctx->pc = 0x2bf92cu;
    // NOP
label_2bf930:
    // 0x2bf930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bf930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2bf934:
    // 0x2bf934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bf934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2bf938:
    // 0x2bf938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bf938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bf93c:
    // 0x2bf93c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bf93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bf940:
    // 0x2bf940: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bf940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bf944:
    // 0x2bf944: 0x12200049  beqz        $s1, . + 4 + (0x49 << 2)
label_2bf948:
    if (ctx->pc == 0x2BF948u) {
        ctx->pc = 0x2BF948u;
            // 0x2bf948: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BF94Cu;
        goto label_2bf94c;
    }
    ctx->pc = 0x2BF944u;
    {
        const bool branch_taken_0x2bf944 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF944u;
            // 0x2bf948: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf944) {
            ctx->pc = 0x2BFA6Cu;
            goto label_2bfa6c;
        }
    }
    ctx->pc = 0x2BF94Cu;
label_2bf94c:
    // 0x2bf94c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bf94cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2bf950:
    // 0x2bf950: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bf950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bf954:
    // 0x2bf954: 0x24631980  addiu       $v1, $v1, 0x1980
    ctx->pc = 0x2bf954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6528));
label_2bf958:
    // 0x2bf958: 0x244219c0  addiu       $v0, $v0, 0x19C0
    ctx->pc = 0x2bf958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6592));
label_2bf95c:
    // 0x2bf95c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2bf95cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2bf960:
    // 0x2bf960: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2bf960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_2bf964:
    // 0x2bf964: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bf964u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bf968:
    // 0x2bf968: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2bf968u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2bf96c:
    // 0x2bf96c: 0x320f809  jalr        $t9
label_2bf970:
    if (ctx->pc == 0x2BF970u) {
        ctx->pc = 0x2BF974u;
        goto label_2bf974;
    }
    ctx->pc = 0x2BF96Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BF974u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BF974u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BF974u; }
            if (ctx->pc != 0x2BF974u) { return; }
        }
        }
    }
    ctx->pc = 0x2BF974u;
label_2bf974:
    // 0x2bf974: 0x262400d4  addiu       $a0, $s1, 0xD4
    ctx->pc = 0x2bf974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 212));
label_2bf978:
    // 0x2bf978: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
label_2bf97c:
    if (ctx->pc == 0x2BF97Cu) {
        ctx->pc = 0x2BF980u;
        goto label_2bf980;
    }
    ctx->pc = 0x2BF978u;
    {
        const bool branch_taken_0x2bf978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf978) {
            ctx->pc = 0x2BF9D4u;
            goto label_2bf9d4;
        }
    }
    ctx->pc = 0x2BF980u;
label_2bf980:
    // 0x2bf980: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2bf980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2bf984:
    // 0x2bf984: 0x244263a0  addiu       $v0, $v0, 0x63A0
    ctx->pc = 0x2bf984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25504));
label_2bf988:
    // 0x2bf988: 0xc0d37dc  jal         func_34DF70
label_2bf98c:
    if (ctx->pc == 0x2BF98Cu) {
        ctx->pc = 0x2BF98Cu;
            // 0x2bf98c: 0xae2200d4  sw          $v0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
        ctx->pc = 0x2BF990u;
        goto label_2bf990;
    }
    ctx->pc = 0x2BF988u;
    SET_GPR_U32(ctx, 31, 0x2BF990u);
    ctx->pc = 0x2BF98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF988u;
            // 0x2bf98c: 0xae2200d4  sw          $v0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF990u; }
        if (ctx->pc != 0x2BF990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF990u; }
        if (ctx->pc != 0x2BF990u) { return; }
    }
    ctx->pc = 0x2BF990u;
label_2bf990:
    // 0x2bf990: 0x262400d4  addiu       $a0, $s1, 0xD4
    ctx->pc = 0x2bf990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 212));
label_2bf994:
    // 0x2bf994: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_2bf998:
    if (ctx->pc == 0x2BF998u) {
        ctx->pc = 0x2BF99Cu;
        goto label_2bf99c;
    }
    ctx->pc = 0x2BF994u;
    {
        const bool branch_taken_0x2bf994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf994) {
            ctx->pc = 0x2BF9D4u;
            goto label_2bf9d4;
        }
    }
    ctx->pc = 0x2BF99Cu;
label_2bf99c:
    // 0x2bf99c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bf99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bf9a0:
    // 0x2bf9a0: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x2bf9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_2bf9a4:
    // 0x2bf9a4: 0xc0d37dc  jal         func_34DF70
label_2bf9a8:
    if (ctx->pc == 0x2BF9A8u) {
        ctx->pc = 0x2BF9A8u;
            // 0x2bf9a8: 0xae2200d4  sw          $v0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
        ctx->pc = 0x2BF9ACu;
        goto label_2bf9ac;
    }
    ctx->pc = 0x2BF9A4u;
    SET_GPR_U32(ctx, 31, 0x2BF9ACu);
    ctx->pc = 0x2BF9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF9A4u;
            // 0x2bf9a8: 0xae2200d4  sw          $v0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF9ACu; }
        if (ctx->pc != 0x2BF9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BF9ACu; }
        if (ctx->pc != 0x2BF9ACu) { return; }
    }
    ctx->pc = 0x2BF9ACu;
label_2bf9ac:
    // 0x2bf9ac: 0x262300d4  addiu       $v1, $s1, 0xD4
    ctx->pc = 0x2bf9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 212));
label_2bf9b0:
    // 0x2bf9b0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2bf9b4:
    if (ctx->pc == 0x2BF9B4u) {
        ctx->pc = 0x2BF9B8u;
        goto label_2bf9b8;
    }
    ctx->pc = 0x2BF9B0u;
    {
        const bool branch_taken_0x2bf9b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf9b0) {
            ctx->pc = 0x2BF9D4u;
            goto label_2bf9d4;
        }
    }
    ctx->pc = 0x2BF9B8u;
label_2bf9b8:
    // 0x2bf9b8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bf9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bf9bc:
    // 0x2bf9bc: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x2bf9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_2bf9c0:
    // 0x2bf9c0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2bf9c4:
    if (ctx->pc == 0x2BF9C4u) {
        ctx->pc = 0x2BF9C4u;
            // 0x2bf9c4: 0xae2200d4  sw          $v0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
        ctx->pc = 0x2BF9C8u;
        goto label_2bf9c8;
    }
    ctx->pc = 0x2BF9C0u;
    {
        const bool branch_taken_0x2bf9c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BF9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF9C0u;
            // 0x2bf9c4: 0xae2200d4  sw          $v0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf9c0) {
            ctx->pc = 0x2BF9D4u;
            goto label_2bf9d4;
        }
    }
    ctx->pc = 0x2BF9C8u;
label_2bf9c8:
    // 0x2bf9c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bf9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bf9cc:
    // 0x2bf9cc: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2bf9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2bf9d0:
    // 0x2bf9d0: 0xae2200d4  sw          $v0, 0xD4($s1)
    ctx->pc = 0x2bf9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
label_2bf9d4:
    // 0x2bf9d4: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_2bf9d8:
    if (ctx->pc == 0x2BF9D8u) {
        ctx->pc = 0x2BF9D8u;
            // 0x2bf9d8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BF9DCu;
        goto label_2bf9dc;
    }
    ctx->pc = 0x2BF9D4u;
    {
        const bool branch_taken_0x2bf9d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf9d4) {
            ctx->pc = 0x2BF9D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF9D4u;
            // 0x2bf9d8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BFA58u;
            goto label_2bfa58;
        }
    }
    ctx->pc = 0x2BF9DCu;
label_2bf9dc:
    // 0x2bf9dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bf9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2bf9e0:
    // 0x2bf9e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bf9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bf9e4:
    // 0x2bf9e4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x2bf9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_2bf9e8:
    // 0x2bf9e8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x2bf9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_2bf9ec:
    // 0x2bf9ec: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2bf9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2bf9f0:
    // 0x2bf9f0: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2bf9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_2bf9f4:
    // 0x2bf9f4: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x2bf9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_2bf9f8:
    // 0x2bf9f8: 0xc0aecc4  jal         func_2BB310
label_2bf9fc:
    if (ctx->pc == 0x2BF9FCu) {
        ctx->pc = 0x2BF9FCu;
            // 0x2bf9fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BFA00u;
        goto label_2bfa00;
    }
    ctx->pc = 0x2BF9F8u;
    SET_GPR_U32(ctx, 31, 0x2BFA00u);
    ctx->pc = 0x2BF9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BF9F8u;
            // 0x2bf9fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFA00u; }
        if (ctx->pc != 0x2BFA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFA00u; }
        if (ctx->pc != 0x2BFA00u) { return; }
    }
    ctx->pc = 0x2BFA00u;
label_2bfa00:
    // 0x2bfa00: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x2bfa00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_2bfa04:
    // 0x2bfa04: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x2bfa04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_2bfa08:
    // 0x2bfa08: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2bfa0c:
    if (ctx->pc == 0x2BFA0Cu) {
        ctx->pc = 0x2BFA0Cu;
            // 0x2bfa0c: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x2BFA10u;
        goto label_2bfa10;
    }
    ctx->pc = 0x2BFA08u;
    {
        const bool branch_taken_0x2bfa08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfa08) {
            ctx->pc = 0x2BFA0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFA08u;
            // 0x2bfa0c: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BFA24u;
            goto label_2bfa24;
        }
    }
    ctx->pc = 0x2BFA10u;
label_2bfa10:
    // 0x2bfa10: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x2bfa10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2bfa14:
    // 0x2bfa14: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2bfa14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2bfa18:
    // 0x2bfa18: 0x320f809  jalr        $t9
label_2bfa1c:
    if (ctx->pc == 0x2BFA1Cu) {
        ctx->pc = 0x2BFA1Cu;
            // 0x2bfa1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BFA20u;
        goto label_2bfa20;
    }
    ctx->pc = 0x2BFA18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BFA20u);
        ctx->pc = 0x2BFA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFA18u;
            // 0x2bfa1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BFA20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BFA20u; }
            if (ctx->pc != 0x2BFA20u) { return; }
        }
        }
    }
    ctx->pc = 0x2BFA20u;
label_2bfa20:
    // 0x2bfa20: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x2bfa20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_2bfa24:
    // 0x2bfa24: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2bfa24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bfa28:
    // 0x2bfa28: 0xc0aec9c  jal         func_2BB270
label_2bfa2c:
    if (ctx->pc == 0x2BFA2Cu) {
        ctx->pc = 0x2BFA2Cu;
            // 0x2bfa2c: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x2BFA30u;
        goto label_2bfa30;
    }
    ctx->pc = 0x2BFA28u;
    SET_GPR_U32(ctx, 31, 0x2BFA30u);
    ctx->pc = 0x2BFA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFA28u;
            // 0x2bfa2c: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFA30u; }
        if (ctx->pc != 0x2BFA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFA30u; }
        if (ctx->pc != 0x2BFA30u) { return; }
    }
    ctx->pc = 0x2BFA30u;
label_2bfa30:
    // 0x2bfa30: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x2bfa30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_2bfa34:
    // 0x2bfa34: 0xc0aec88  jal         func_2BB220
label_2bfa38:
    if (ctx->pc == 0x2BFA38u) {
        ctx->pc = 0x2BFA38u;
            // 0x2bfa38: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2BFA3Cu;
        goto label_2bfa3c;
    }
    ctx->pc = 0x2BFA34u;
    SET_GPR_U32(ctx, 31, 0x2BFA3Cu);
    ctx->pc = 0x2BFA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFA34u;
            // 0x2bfa38: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFA3Cu; }
        if (ctx->pc != 0x2BFA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFA3Cu; }
        if (ctx->pc != 0x2BFA3Cu) { return; }
    }
    ctx->pc = 0x2BFA3Cu;
label_2bfa3c:
    // 0x2bfa3c: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x2bfa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_2bfa40:
    // 0x2bfa40: 0xc0aec0c  jal         func_2BB030
label_2bfa44:
    if (ctx->pc == 0x2BFA44u) {
        ctx->pc = 0x2BFA44u;
            // 0x2bfa44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BFA48u;
        goto label_2bfa48;
    }
    ctx->pc = 0x2BFA40u;
    SET_GPR_U32(ctx, 31, 0x2BFA48u);
    ctx->pc = 0x2BFA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFA40u;
            // 0x2bfa44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFA48u; }
        if (ctx->pc != 0x2BFA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFA48u; }
        if (ctx->pc != 0x2BFA48u) { return; }
    }
    ctx->pc = 0x2BFA48u;
label_2bfa48:
    // 0x2bfa48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bfa48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bfa4c:
    // 0x2bfa4c: 0xc0aeaa8  jal         func_2BAAA0
label_2bfa50:
    if (ctx->pc == 0x2BFA50u) {
        ctx->pc = 0x2BFA50u;
            // 0x2bfa50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BFA54u;
        goto label_2bfa54;
    }
    ctx->pc = 0x2BFA4Cu;
    SET_GPR_U32(ctx, 31, 0x2BFA54u);
    ctx->pc = 0x2BFA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFA4Cu;
            // 0x2bfa50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFA54u; }
        if (ctx->pc != 0x2BFA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFA54u; }
        if (ctx->pc != 0x2BFA54u) { return; }
    }
    ctx->pc = 0x2BFA54u;
label_2bfa54:
    // 0x2bfa54: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2bfa54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2bfa58:
    // 0x2bfa58: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bfa58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2bfa5c:
    // 0x2bfa5c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2bfa60:
    if (ctx->pc == 0x2BFA60u) {
        ctx->pc = 0x2BFA60u;
            // 0x2bfa60: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BFA64u;
        goto label_2bfa64;
    }
    ctx->pc = 0x2BFA5Cu;
    {
        const bool branch_taken_0x2bfa5c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bfa5c) {
            ctx->pc = 0x2BFA60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFA5Cu;
            // 0x2bfa60: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BFA70u;
            goto label_2bfa70;
        }
    }
    ctx->pc = 0x2BFA64u;
label_2bfa64:
    // 0x2bfa64: 0xc0400a8  jal         func_1002A0
label_2bfa68:
    if (ctx->pc == 0x2BFA68u) {
        ctx->pc = 0x2BFA68u;
            // 0x2bfa68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BFA6Cu;
        goto label_2bfa6c;
    }
    ctx->pc = 0x2BFA64u;
    SET_GPR_U32(ctx, 31, 0x2BFA6Cu);
    ctx->pc = 0x2BFA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFA64u;
            // 0x2bfa68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFA6Cu; }
        if (ctx->pc != 0x2BFA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFA6Cu; }
        if (ctx->pc != 0x2BFA6Cu) { return; }
    }
    ctx->pc = 0x2BFA6Cu;
label_2bfa6c:
    // 0x2bfa6c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bfa6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bfa70:
    // 0x2bfa70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bfa70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bfa74:
    // 0x2bfa74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bfa74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bfa78:
    // 0x2bfa78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bfa78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bfa7c:
    // 0x2bfa7c: 0x3e00008  jr          $ra
label_2bfa80:
    if (ctx->pc == 0x2BFA80u) {
        ctx->pc = 0x2BFA80u;
            // 0x2bfa80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BFA84u;
        goto label_2bfa84;
    }
    ctx->pc = 0x2BFA7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFA7Cu;
            // 0x2bfa80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BFA84u;
label_2bfa84:
    // 0x2bfa84: 0x0  nop
    ctx->pc = 0x2bfa84u;
    // NOP
label_2bfa88:
    // 0x2bfa88: 0x0  nop
    ctx->pc = 0x2bfa88u;
    // NOP
label_2bfa8c:
    // 0x2bfa8c: 0x0  nop
    ctx->pc = 0x2bfa8cu;
    // NOP
label_2bfa90:
    // 0x2bfa90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bfa90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2bfa94:
    // 0x2bfa94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bfa94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2bfa98:
    // 0x2bfa98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bfa98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bfa9c:
    // 0x2bfa9c: 0xc0aeebc  jal         func_2BBAF0
label_2bfaa0:
    if (ctx->pc == 0x2BFAA0u) {
        ctx->pc = 0x2BFAA0u;
            // 0x2bfaa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BFAA4u;
        goto label_2bfaa4;
    }
    ctx->pc = 0x2BFA9Cu;
    SET_GPR_U32(ctx, 31, 0x2BFAA4u);
    ctx->pc = 0x2BFAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFA9Cu;
            // 0x2bfaa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFAA4u; }
        if (ctx->pc != 0x2BFAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFAA4u; }
        if (ctx->pc != 0x2BFAA4u) { return; }
    }
    ctx->pc = 0x2BFAA4u;
label_2bfaa4:
    // 0x2bfaa4: 0xc0aeeb4  jal         func_2BBAD0
label_2bfaa8:
    if (ctx->pc == 0x2BFAA8u) {
        ctx->pc = 0x2BFAA8u;
            // 0x2bfaa8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x2BFAACu;
        goto label_2bfaac;
    }
    ctx->pc = 0x2BFAA4u;
    SET_GPR_U32(ctx, 31, 0x2BFAACu);
    ctx->pc = 0x2BFAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFAA4u;
            // 0x2bfaa8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFAACu; }
        if (ctx->pc != 0x2BFAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFAACu; }
        if (ctx->pc != 0x2BFAACu) { return; }
    }
    ctx->pc = 0x2BFAACu;
label_2bfaac:
    // 0x2bfaac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bfaacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2bfab0:
    // 0x2bfab0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bfab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bfab4:
    // 0x2bfab4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x2bfab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_2bfab8:
    // 0x2bfab8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x2bfab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_2bfabc:
    // 0x2bfabc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2bfabcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2bfac0:
    // 0x2bfac0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x2bfac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_2bfac4:
    // 0x2bfac4: 0xc0aeea4  jal         func_2BBA90
label_2bfac8:
    if (ctx->pc == 0x2BFAC8u) {
        ctx->pc = 0x2BFAC8u;
            // 0x2bfac8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x2BFACCu;
        goto label_2bfacc;
    }
    ctx->pc = 0x2BFAC4u;
    SET_GPR_U32(ctx, 31, 0x2BFACCu);
    ctx->pc = 0x2BFAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFAC4u;
            // 0x2bfac8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFACCu; }
        if (ctx->pc != 0x2BFACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFACCu; }
        if (ctx->pc != 0x2BFACCu) { return; }
    }
    ctx->pc = 0x2BFACCu;
label_2bfacc:
    // 0x2bfacc: 0xc0aee8c  jal         func_2BBA30
label_2bfad0:
    if (ctx->pc == 0x2BFAD0u) {
        ctx->pc = 0x2BFAD0u;
            // 0x2bfad0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x2BFAD4u;
        goto label_2bfad4;
    }
    ctx->pc = 0x2BFACCu;
    SET_GPR_U32(ctx, 31, 0x2BFAD4u);
    ctx->pc = 0x2BFAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFACCu;
            // 0x2bfad0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFAD4u; }
        if (ctx->pc != 0x2BFAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFAD4u; }
        if (ctx->pc != 0x2BFAD4u) { return; }
    }
    ctx->pc = 0x2BFAD4u;
label_2bfad4:
    // 0x2bfad4: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x2bfad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_2bfad8:
    // 0x2bfad8: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x2bfad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_2bfadc:
    // 0x2bfadc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x2bfadcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_2bfae0:
    // 0x2bfae0: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x2bfae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_2bfae4:
    // 0x2bfae4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x2bfae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_2bfae8:
    // 0x2bfae8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bfae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bfaec:
    // 0x2bfaec: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x2bfaecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_2bfaf0:
    // 0x2bfaf0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2bfaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bfaf4:
    // 0x2bfaf4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x2bfaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_2bfaf8:
    // 0x2bfaf8: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x2bfaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_2bfafc:
    // 0x2bfafc: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x2bfafcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_2bfb00:
    // 0x2bfb00: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x2bfb00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_2bfb04:
    // 0x2bfb04: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x2bfb04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_2bfb08:
    // 0x2bfb08: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x2bfb08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_2bfb0c:
    // 0x2bfb0c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x2bfb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_2bfb10:
    // 0x2bfb10: 0xc0775b8  jal         func_1DD6E0
label_2bfb14:
    if (ctx->pc == 0x2BFB14u) {
        ctx->pc = 0x2BFB14u;
            // 0x2bfb14: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2BFB18u;
        goto label_2bfb18;
    }
    ctx->pc = 0x2BFB10u;
    SET_GPR_U32(ctx, 31, 0x2BFB18u);
    ctx->pc = 0x2BFB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFB10u;
            // 0x2bfb14: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFB18u; }
        if (ctx->pc != 0x2BFB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFB18u; }
        if (ctx->pc != 0x2BFB18u) { return; }
    }
    ctx->pc = 0x2BFB18u;
label_2bfb18:
    // 0x2bfb18: 0xc077314  jal         func_1DCC50
label_2bfb1c:
    if (ctx->pc == 0x2BFB1Cu) {
        ctx->pc = 0x2BFB1Cu;
            // 0x2bfb1c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x2BFB20u;
        goto label_2bfb20;
    }
    ctx->pc = 0x2BFB18u;
    SET_GPR_U32(ctx, 31, 0x2BFB20u);
    ctx->pc = 0x2BFB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFB18u;
            // 0x2bfb1c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFB20u; }
        if (ctx->pc != 0x2BFB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFB20u; }
        if (ctx->pc != 0x2BFB20u) { return; }
    }
    ctx->pc = 0x2BFB20u;
label_2bfb20:
    // 0x2bfb20: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x2bfb20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_2bfb24:
    // 0x2bfb24: 0x3c08006a  lui         $t0, 0x6A
    ctx->pc = 0x2bfb24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)106 << 16));
label_2bfb28:
    // 0x2bfb28: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x2bfb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_2bfb2c:
    // 0x2bfb2c: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x2bfb2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
label_2bfb30:
    // 0x2bfb30: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2bfb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2bfb34:
    // 0x2bfb34: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x2bfb34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
label_2bfb38:
    // 0x2bfb38: 0x8e0900c8  lw          $t1, 0xC8($s0)
    ctx->pc = 0x2bfb38u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_2bfb3c:
    // 0x2bfb3c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x2bfb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_2bfb40:
    // 0x2bfb40: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2bfb40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2bfb44:
    // 0x2bfb44: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2bfb44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_2bfb48:
    // 0x2bfb48: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2bfb48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2bfb4c:
    // 0x2bfb4c: 0x25081980  addiu       $t0, $t0, 0x1980
    ctx->pc = 0x2bfb4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6528));
label_2bfb50:
    // 0x2bfb50: 0x24e719c0  addiu       $a3, $a3, 0x19C0
    ctx->pc = 0x2bfb50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6592));
label_2bfb54:
    // 0x2bfb54: 0x24c6cfe0  addiu       $a2, $a2, -0x3020
    ctx->pc = 0x2bfb54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954976));
label_2bfb58:
    // 0x2bfb58: 0x1224818  mult        $t1, $t1, $v0
    ctx->pc = 0x2bfb58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_2bfb5c:
    // 0x2bfb5c: 0x24a524a0  addiu       $a1, $a1, 0x24A0
    ctx->pc = 0x2bfb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9376));
label_2bfb60:
    // 0x2bfb60: 0x24842460  addiu       $a0, $a0, 0x2460
    ctx->pc = 0x2bfb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9312));
label_2bfb64:
    // 0x2bfb64: 0x246363a0  addiu       $v1, $v1, 0x63A0
    ctx->pc = 0x2bfb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25504));
label_2bfb68:
    // 0x2bfb68: 0xae0900c8  sw          $t1, 0xC8($s0)
    ctx->pc = 0x2bfb68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 9));
label_2bfb6c:
    // 0x2bfb6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bfb6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bfb70:
    // 0x2bfb70: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x2bfb70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
label_2bfb74:
    // 0x2bfb74: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x2bfb74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
label_2bfb78:
    // 0x2bfb78: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x2bfb78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_2bfb7c:
    // 0x2bfb7c: 0xae0600d4  sw          $a2, 0xD4($s0)
    ctx->pc = 0x2bfb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 6));
label_2bfb80:
    // 0x2bfb80: 0xae0500d4  sw          $a1, 0xD4($s0)
    ctx->pc = 0x2bfb80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 5));
label_2bfb84:
    // 0x2bfb84: 0xae0400d4  sw          $a0, 0xD4($s0)
    ctx->pc = 0x2bfb84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 4));
label_2bfb88:
    // 0x2bfb88: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x2bfb88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_2bfb8c:
    // 0x2bfb8c: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x2bfb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
label_2bfb90:
    // 0x2bfb90: 0xae1000dc  sw          $s0, 0xDC($s0)
    ctx->pc = 0x2bfb90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 16));
label_2bfb94:
    // 0x2bfb94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bfb94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bfb98:
    // 0x2bfb98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bfb98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bfb9c:
    // 0x2bfb9c: 0x3e00008  jr          $ra
label_2bfba0:
    if (ctx->pc == 0x2BFBA0u) {
        ctx->pc = 0x2BFBA0u;
            // 0x2bfba0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2BFBA4u;
        goto label_2bfba4;
    }
    ctx->pc = 0x2BFB9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFB9Cu;
            // 0x2bfba0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BFBA4u;
label_2bfba4:
    // 0x2bfba4: 0x0  nop
    ctx->pc = 0x2bfba4u;
    // NOP
label_2bfba8:
    // 0x2bfba8: 0x0  nop
    ctx->pc = 0x2bfba8u;
    // NOP
label_2bfbac:
    // 0x2bfbac: 0x0  nop
    ctx->pc = 0x2bfbacu;
    // NOP
label_2bfbb0:
    // 0x2bfbb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bfbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2bfbb4:
    // 0x2bfbb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bfbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2bfbb8:
    // 0x2bfbb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bfbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bfbbc:
    // 0x2bfbbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bfbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bfbc0:
    // 0x2bfbc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bfbc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bfbc4:
    // 0x2bfbc4: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
label_2bfbc8:
    if (ctx->pc == 0x2BFBC8u) {
        ctx->pc = 0x2BFBC8u;
            // 0x2bfbc8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BFBCCu;
        goto label_2bfbcc;
    }
    ctx->pc = 0x2BFBC4u;
    {
        const bool branch_taken_0x2bfbc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFBC4u;
            // 0x2bfbc8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfbc4) {
            ctx->pc = 0x2BFC34u;
            goto label_2bfc34;
        }
    }
    ctx->pc = 0x2BFBCCu;
label_2bfbcc:
    // 0x2bfbcc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2bfbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2bfbd0:
    // 0x2bfbd0: 0x244263a0  addiu       $v0, $v0, 0x63A0
    ctx->pc = 0x2bfbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25504));
label_2bfbd4:
    // 0x2bfbd4: 0xc0d37dc  jal         func_34DF70
label_2bfbd8:
    if (ctx->pc == 0x2BFBD8u) {
        ctx->pc = 0x2BFBD8u;
            // 0x2bfbd8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2BFBDCu;
        goto label_2bfbdc;
    }
    ctx->pc = 0x2BFBD4u;
    SET_GPR_U32(ctx, 31, 0x2BFBDCu);
    ctx->pc = 0x2BFBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFBD4u;
            // 0x2bfbd8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFBDCu; }
        if (ctx->pc != 0x2BFBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFBDCu; }
        if (ctx->pc != 0x2BFBDCu) { return; }
    }
    ctx->pc = 0x2BFBDCu;
label_2bfbdc:
    // 0x2bfbdc: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_2bfbe0:
    if (ctx->pc == 0x2BFBE0u) {
        ctx->pc = 0x2BFBE0u;
            // 0x2bfbe0: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x2BFBE4u;
        goto label_2bfbe4;
    }
    ctx->pc = 0x2BFBDCu;
    {
        const bool branch_taken_0x2bfbdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfbdc) {
            ctx->pc = 0x2BFBE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFBDCu;
            // 0x2bfbe0: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BFC20u;
            goto label_2bfc20;
        }
    }
    ctx->pc = 0x2BFBE4u;
label_2bfbe4:
    // 0x2bfbe4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bfbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bfbe8:
    // 0x2bfbe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bfbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bfbec:
    // 0x2bfbec: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x2bfbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_2bfbf0:
    // 0x2bfbf0: 0xc0d37dc  jal         func_34DF70
label_2bfbf4:
    if (ctx->pc == 0x2BFBF4u) {
        ctx->pc = 0x2BFBF4u;
            // 0x2bfbf4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2BFBF8u;
        goto label_2bfbf8;
    }
    ctx->pc = 0x2BFBF0u;
    SET_GPR_U32(ctx, 31, 0x2BFBF8u);
    ctx->pc = 0x2BFBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFBF0u;
            // 0x2bfbf4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFBF8u; }
        if (ctx->pc != 0x2BFBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFBF8u; }
        if (ctx->pc != 0x2BFBF8u) { return; }
    }
    ctx->pc = 0x2BFBF8u;
label_2bfbf8:
    // 0x2bfbf8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2bfbfc:
    if (ctx->pc == 0x2BFBFCu) {
        ctx->pc = 0x2BFC00u;
        goto label_2bfc00;
    }
    ctx->pc = 0x2BFBF8u;
    {
        const bool branch_taken_0x2bfbf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfbf8) {
            ctx->pc = 0x2BFC1Cu;
            goto label_2bfc1c;
        }
    }
    ctx->pc = 0x2BFC00u;
label_2bfc00:
    // 0x2bfc00: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bfc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bfc04:
    // 0x2bfc04: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x2bfc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_2bfc08:
    // 0x2bfc08: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_2bfc0c:
    if (ctx->pc == 0x2BFC0Cu) {
        ctx->pc = 0x2BFC0Cu;
            // 0x2bfc0c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2BFC10u;
        goto label_2bfc10;
    }
    ctx->pc = 0x2BFC08u;
    {
        const bool branch_taken_0x2bfc08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFC08u;
            // 0x2bfc0c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfc08) {
            ctx->pc = 0x2BFC1Cu;
            goto label_2bfc1c;
        }
    }
    ctx->pc = 0x2BFC10u;
label_2bfc10:
    // 0x2bfc10: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bfc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bfc14:
    // 0x2bfc14: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2bfc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2bfc18:
    // 0x2bfc18: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2bfc18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2bfc1c:
    // 0x2bfc1c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2bfc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2bfc20:
    // 0x2bfc20: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bfc20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2bfc24:
    // 0x2bfc24: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2bfc28:
    if (ctx->pc == 0x2BFC28u) {
        ctx->pc = 0x2BFC28u;
            // 0x2bfc28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BFC2Cu;
        goto label_2bfc2c;
    }
    ctx->pc = 0x2BFC24u;
    {
        const bool branch_taken_0x2bfc24 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bfc24) {
            ctx->pc = 0x2BFC28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFC24u;
            // 0x2bfc28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BFC38u;
            goto label_2bfc38;
        }
    }
    ctx->pc = 0x2BFC2Cu;
label_2bfc2c:
    // 0x2bfc2c: 0xc0400a8  jal         func_1002A0
label_2bfc30:
    if (ctx->pc == 0x2BFC30u) {
        ctx->pc = 0x2BFC30u;
            // 0x2bfc30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BFC34u;
        goto label_2bfc34;
    }
    ctx->pc = 0x2BFC2Cu;
    SET_GPR_U32(ctx, 31, 0x2BFC34u);
    ctx->pc = 0x2BFC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFC2Cu;
            // 0x2bfc30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFC34u; }
        if (ctx->pc != 0x2BFC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFC34u; }
        if (ctx->pc != 0x2BFC34u) { return; }
    }
    ctx->pc = 0x2BFC34u;
label_2bfc34:
    // 0x2bfc34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bfc34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bfc38:
    // 0x2bfc38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bfc38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bfc3c:
    // 0x2bfc3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bfc3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bfc40:
    // 0x2bfc40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bfc40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bfc44:
    // 0x2bfc44: 0x3e00008  jr          $ra
label_2bfc48:
    if (ctx->pc == 0x2BFC48u) {
        ctx->pc = 0x2BFC48u;
            // 0x2bfc48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BFC4Cu;
        goto label_2bfc4c;
    }
    ctx->pc = 0x2BFC44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFC44u;
            // 0x2bfc48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BFC4Cu;
label_2bfc4c:
    // 0x2bfc4c: 0x0  nop
    ctx->pc = 0x2bfc4cu;
    // NOP
}
