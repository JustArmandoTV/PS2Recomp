#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FAC50
// Address: 0x1fac50 - 0x1faf50
void sub_001FAC50_0x1fac50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAC50_0x1fac50");
#endif

    switch (ctx->pc) {
        case 0x1fac50u: goto label_1fac50;
        case 0x1fac54u: goto label_1fac54;
        case 0x1fac58u: goto label_1fac58;
        case 0x1fac5cu: goto label_1fac5c;
        case 0x1fac60u: goto label_1fac60;
        case 0x1fac64u: goto label_1fac64;
        case 0x1fac68u: goto label_1fac68;
        case 0x1fac6cu: goto label_1fac6c;
        case 0x1fac70u: goto label_1fac70;
        case 0x1fac74u: goto label_1fac74;
        case 0x1fac78u: goto label_1fac78;
        case 0x1fac7cu: goto label_1fac7c;
        case 0x1fac80u: goto label_1fac80;
        case 0x1fac84u: goto label_1fac84;
        case 0x1fac88u: goto label_1fac88;
        case 0x1fac8cu: goto label_1fac8c;
        case 0x1fac90u: goto label_1fac90;
        case 0x1fac94u: goto label_1fac94;
        case 0x1fac98u: goto label_1fac98;
        case 0x1fac9cu: goto label_1fac9c;
        case 0x1faca0u: goto label_1faca0;
        case 0x1faca4u: goto label_1faca4;
        case 0x1faca8u: goto label_1faca8;
        case 0x1facacu: goto label_1facac;
        case 0x1facb0u: goto label_1facb0;
        case 0x1facb4u: goto label_1facb4;
        case 0x1facb8u: goto label_1facb8;
        case 0x1facbcu: goto label_1facbc;
        case 0x1facc0u: goto label_1facc0;
        case 0x1facc4u: goto label_1facc4;
        case 0x1facc8u: goto label_1facc8;
        case 0x1facccu: goto label_1faccc;
        case 0x1facd0u: goto label_1facd0;
        case 0x1facd4u: goto label_1facd4;
        case 0x1facd8u: goto label_1facd8;
        case 0x1facdcu: goto label_1facdc;
        case 0x1face0u: goto label_1face0;
        case 0x1face4u: goto label_1face4;
        case 0x1face8u: goto label_1face8;
        case 0x1facecu: goto label_1facec;
        case 0x1facf0u: goto label_1facf0;
        case 0x1facf4u: goto label_1facf4;
        case 0x1facf8u: goto label_1facf8;
        case 0x1facfcu: goto label_1facfc;
        case 0x1fad00u: goto label_1fad00;
        case 0x1fad04u: goto label_1fad04;
        case 0x1fad08u: goto label_1fad08;
        case 0x1fad0cu: goto label_1fad0c;
        case 0x1fad10u: goto label_1fad10;
        case 0x1fad14u: goto label_1fad14;
        case 0x1fad18u: goto label_1fad18;
        case 0x1fad1cu: goto label_1fad1c;
        case 0x1fad20u: goto label_1fad20;
        case 0x1fad24u: goto label_1fad24;
        case 0x1fad28u: goto label_1fad28;
        case 0x1fad2cu: goto label_1fad2c;
        case 0x1fad30u: goto label_1fad30;
        case 0x1fad34u: goto label_1fad34;
        case 0x1fad38u: goto label_1fad38;
        case 0x1fad3cu: goto label_1fad3c;
        case 0x1fad40u: goto label_1fad40;
        case 0x1fad44u: goto label_1fad44;
        case 0x1fad48u: goto label_1fad48;
        case 0x1fad4cu: goto label_1fad4c;
        case 0x1fad50u: goto label_1fad50;
        case 0x1fad54u: goto label_1fad54;
        case 0x1fad58u: goto label_1fad58;
        case 0x1fad5cu: goto label_1fad5c;
        case 0x1fad60u: goto label_1fad60;
        case 0x1fad64u: goto label_1fad64;
        case 0x1fad68u: goto label_1fad68;
        case 0x1fad6cu: goto label_1fad6c;
        case 0x1fad70u: goto label_1fad70;
        case 0x1fad74u: goto label_1fad74;
        case 0x1fad78u: goto label_1fad78;
        case 0x1fad7cu: goto label_1fad7c;
        case 0x1fad80u: goto label_1fad80;
        case 0x1fad84u: goto label_1fad84;
        case 0x1fad88u: goto label_1fad88;
        case 0x1fad8cu: goto label_1fad8c;
        case 0x1fad90u: goto label_1fad90;
        case 0x1fad94u: goto label_1fad94;
        case 0x1fad98u: goto label_1fad98;
        case 0x1fad9cu: goto label_1fad9c;
        case 0x1fada0u: goto label_1fada0;
        case 0x1fada4u: goto label_1fada4;
        case 0x1fada8u: goto label_1fada8;
        case 0x1fadacu: goto label_1fadac;
        case 0x1fadb0u: goto label_1fadb0;
        case 0x1fadb4u: goto label_1fadb4;
        case 0x1fadb8u: goto label_1fadb8;
        case 0x1fadbcu: goto label_1fadbc;
        case 0x1fadc0u: goto label_1fadc0;
        case 0x1fadc4u: goto label_1fadc4;
        case 0x1fadc8u: goto label_1fadc8;
        case 0x1fadccu: goto label_1fadcc;
        case 0x1fadd0u: goto label_1fadd0;
        case 0x1fadd4u: goto label_1fadd4;
        case 0x1fadd8u: goto label_1fadd8;
        case 0x1faddcu: goto label_1faddc;
        case 0x1fade0u: goto label_1fade0;
        case 0x1fade4u: goto label_1fade4;
        case 0x1fade8u: goto label_1fade8;
        case 0x1fadecu: goto label_1fadec;
        case 0x1fadf0u: goto label_1fadf0;
        case 0x1fadf4u: goto label_1fadf4;
        case 0x1fadf8u: goto label_1fadf8;
        case 0x1fadfcu: goto label_1fadfc;
        case 0x1fae00u: goto label_1fae00;
        case 0x1fae04u: goto label_1fae04;
        case 0x1fae08u: goto label_1fae08;
        case 0x1fae0cu: goto label_1fae0c;
        case 0x1fae10u: goto label_1fae10;
        case 0x1fae14u: goto label_1fae14;
        case 0x1fae18u: goto label_1fae18;
        case 0x1fae1cu: goto label_1fae1c;
        case 0x1fae20u: goto label_1fae20;
        case 0x1fae24u: goto label_1fae24;
        case 0x1fae28u: goto label_1fae28;
        case 0x1fae2cu: goto label_1fae2c;
        case 0x1fae30u: goto label_1fae30;
        case 0x1fae34u: goto label_1fae34;
        case 0x1fae38u: goto label_1fae38;
        case 0x1fae3cu: goto label_1fae3c;
        case 0x1fae40u: goto label_1fae40;
        case 0x1fae44u: goto label_1fae44;
        case 0x1fae48u: goto label_1fae48;
        case 0x1fae4cu: goto label_1fae4c;
        case 0x1fae50u: goto label_1fae50;
        case 0x1fae54u: goto label_1fae54;
        case 0x1fae58u: goto label_1fae58;
        case 0x1fae5cu: goto label_1fae5c;
        case 0x1fae60u: goto label_1fae60;
        case 0x1fae64u: goto label_1fae64;
        case 0x1fae68u: goto label_1fae68;
        case 0x1fae6cu: goto label_1fae6c;
        case 0x1fae70u: goto label_1fae70;
        case 0x1fae74u: goto label_1fae74;
        case 0x1fae78u: goto label_1fae78;
        case 0x1fae7cu: goto label_1fae7c;
        case 0x1fae80u: goto label_1fae80;
        case 0x1fae84u: goto label_1fae84;
        case 0x1fae88u: goto label_1fae88;
        case 0x1fae8cu: goto label_1fae8c;
        case 0x1fae90u: goto label_1fae90;
        case 0x1fae94u: goto label_1fae94;
        case 0x1fae98u: goto label_1fae98;
        case 0x1fae9cu: goto label_1fae9c;
        case 0x1faea0u: goto label_1faea0;
        case 0x1faea4u: goto label_1faea4;
        case 0x1faea8u: goto label_1faea8;
        case 0x1faeacu: goto label_1faeac;
        case 0x1faeb0u: goto label_1faeb0;
        case 0x1faeb4u: goto label_1faeb4;
        case 0x1faeb8u: goto label_1faeb8;
        case 0x1faebcu: goto label_1faebc;
        case 0x1faec0u: goto label_1faec0;
        case 0x1faec4u: goto label_1faec4;
        case 0x1faec8u: goto label_1faec8;
        case 0x1faeccu: goto label_1faecc;
        case 0x1faed0u: goto label_1faed0;
        case 0x1faed4u: goto label_1faed4;
        case 0x1faed8u: goto label_1faed8;
        case 0x1faedcu: goto label_1faedc;
        case 0x1faee0u: goto label_1faee0;
        case 0x1faee4u: goto label_1faee4;
        case 0x1faee8u: goto label_1faee8;
        case 0x1faeecu: goto label_1faeec;
        case 0x1faef0u: goto label_1faef0;
        case 0x1faef4u: goto label_1faef4;
        case 0x1faef8u: goto label_1faef8;
        case 0x1faefcu: goto label_1faefc;
        case 0x1faf00u: goto label_1faf00;
        case 0x1faf04u: goto label_1faf04;
        case 0x1faf08u: goto label_1faf08;
        case 0x1faf0cu: goto label_1faf0c;
        case 0x1faf10u: goto label_1faf10;
        case 0x1faf14u: goto label_1faf14;
        case 0x1faf18u: goto label_1faf18;
        case 0x1faf1cu: goto label_1faf1c;
        case 0x1faf20u: goto label_1faf20;
        case 0x1faf24u: goto label_1faf24;
        case 0x1faf28u: goto label_1faf28;
        case 0x1faf2cu: goto label_1faf2c;
        case 0x1faf30u: goto label_1faf30;
        case 0x1faf34u: goto label_1faf34;
        case 0x1faf38u: goto label_1faf38;
        case 0x1faf3cu: goto label_1faf3c;
        case 0x1faf40u: goto label_1faf40;
        case 0x1faf44u: goto label_1faf44;
        case 0x1faf48u: goto label_1faf48;
        case 0x1faf4cu: goto label_1faf4c;
        default: break;
    }

    ctx->pc = 0x1fac50u;

label_1fac50:
    // 0x1fac50: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1fac50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_1fac54:
    // 0x1fac54: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1fac54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1fac58:
    // 0x1fac58: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1fac58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1fac5c:
    // 0x1fac5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1fac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1fac60:
    // 0x1fac60: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1fac60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1fac64:
    // 0x1fac64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fac64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1fac68:
    // 0x1fac68: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1fac68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1fac6c:
    // 0x1fac6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fac6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fac70:
    // 0x1fac70: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1fac70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fac74:
    // 0x1fac74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fac74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fac78:
    // 0x1fac78: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1fac78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fac7c:
    // 0x1fac7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fac7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fac80:
    // 0x1fac80: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x1fac80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1fac84:
    // 0x1fac84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fac84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fac88:
    // 0x1fac88: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1fac88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1fac8c:
    // 0x1fac8c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1fac8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1fac90:
    // 0x1fac90: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1fac90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1fac94:
    // 0x1fac94: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1fac98:
    if (ctx->pc == 0x1FAC98u) {
        ctx->pc = 0x1FAC98u;
            // 0x1fac98: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1FAC9Cu;
        goto label_1fac9c;
    }
    ctx->pc = 0x1FAC94u;
    {
        const bool branch_taken_0x1fac94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAC94u;
            // 0x1fac98: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fac94) {
            ctx->pc = 0x1FACC4u;
            goto label_1facc4;
        }
    }
    ctx->pc = 0x1FAC9Cu;
label_1fac9c:
    // 0x1fac9c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1fac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1faca0:
    // 0x1faca0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1faca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1faca4:
    // 0x1faca4: 0x2442b0a8  addiu       $v0, $v0, -0x4F58
    ctx->pc = 0x1faca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946984));
label_1faca8:
    // 0x1faca8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1faca8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1facac:
    // 0x1facac: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1facacu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1facb0:
    // 0x1facb0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1facb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1facb4:
    // 0x1facb4: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1facb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1facb8:
    // 0x1facb8: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1facb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1facbc:
    // 0x1facbc: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1facbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1facc0:
    // 0x1facc0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1facc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1facc4:
    // 0x1facc4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1facc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1facc8:
    // 0x1facc8: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1facc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1faccc:
    // 0x1faccc: 0xc09e9ec  jal         func_27A7B0
label_1facd0:
    if (ctx->pc == 0x1FACD0u) {
        ctx->pc = 0x1FACD0u;
            // 0x1facd0: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->pc = 0x1FACD4u;
        goto label_1facd4;
    }
    ctx->pc = 0x1FACCCu;
    SET_GPR_U32(ctx, 31, 0x1FACD4u);
    ctx->pc = 0x1FACD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FACCCu;
            // 0x1facd0: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A7B0u;
    if (runtime->hasFunction(0x27A7B0u)) {
        auto targetFn = runtime->lookupFunction(0x27A7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FACD4u; }
        if (ctx->pc != 0x1FACD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A7B0_0x27a7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FACD4u; }
        if (ctx->pc != 0x1FACD4u) { return; }
    }
    ctx->pc = 0x1FACD4u;
label_1facd4:
    // 0x1facd4: 0xafb00110  sw          $s0, 0x110($sp)
    ctx->pc = 0x1facd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 16));
label_1facd8:
    // 0x1facd8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1facd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1facdc:
    // 0x1facdc: 0xafb20114  sw          $s2, 0x114($sp)
    ctx->pc = 0x1facdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 18));
label_1face0:
    // 0x1face0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1face0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1face4:
    // 0x1face4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1face4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1face8:
    // 0x1face8: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x1face8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1facec:
    // 0x1facec: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1facecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1facf0:
    // 0x1facf0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1facf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1facf4:
    // 0x1facf4: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1facf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1facf8:
    // 0x1facf8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1facf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1facfc:
    // 0x1facfc: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1facfcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1fad00:
    // 0x1fad00: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1fad00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_1fad04:
    // 0x1fad04: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1fad04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fad08:
    // 0x1fad08: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x1fad08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1fad0c:
    // 0x1fad0c: 0x24720030  addiu       $s2, $v1, 0x30
    ctx->pc = 0x1fad0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_1fad10:
    // 0x1fad10: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x1fad10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1fad14:
    // 0x1fad14: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x1fad14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1fad18:
    // 0x1fad18: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x1fad18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1fad1c:
    // 0x1fad1c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1fad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1fad20:
    // 0x1fad20: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1fad20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1fad24:
    // 0x1fad24: 0xc44b0014  lwc1        $f11, 0x14($v0)
    ctx->pc = 0x1fad24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1fad28:
    // 0x1fad28: 0xe7ac0070  swc1        $f12, 0x70($sp)
    ctx->pc = 0x1fad28u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1fad2c:
    // 0x1fad2c: 0xc44a0018  lwc1        $f10, 0x18($v0)
    ctx->pc = 0x1fad2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1fad30:
    // 0x1fad30: 0xe7ab0074  swc1        $f11, 0x74($sp)
    ctx->pc = 0x1fad30u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1fad34:
    // 0x1fad34: 0xc449001c  lwc1        $f9, 0x1C($v0)
    ctx->pc = 0x1fad34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1fad38:
    // 0x1fad38: 0xe7aa0078  swc1        $f10, 0x78($sp)
    ctx->pc = 0x1fad38u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_1fad3c:
    // 0x1fad3c: 0xc4480020  lwc1        $f8, 0x20($v0)
    ctx->pc = 0x1fad3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1fad40:
    // 0x1fad40: 0xe7a9007c  swc1        $f9, 0x7C($sp)
    ctx->pc = 0x1fad40u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_1fad44:
    // 0x1fad44: 0xc4470024  lwc1        $f7, 0x24($v0)
    ctx->pc = 0x1fad44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1fad48:
    // 0x1fad48: 0xe7a80080  swc1        $f8, 0x80($sp)
    ctx->pc = 0x1fad48u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1fad4c:
    // 0x1fad4c: 0xc4460028  lwc1        $f6, 0x28($v0)
    ctx->pc = 0x1fad4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1fad50:
    // 0x1fad50: 0xe7a70084  swc1        $f7, 0x84($sp)
    ctx->pc = 0x1fad50u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1fad54:
    // 0x1fad54: 0xc445002c  lwc1        $f5, 0x2C($v0)
    ctx->pc = 0x1fad54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1fad58:
    // 0x1fad58: 0xe7a60088  swc1        $f6, 0x88($sp)
    ctx->pc = 0x1fad58u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1fad5c:
    // 0x1fad5c: 0xc4440030  lwc1        $f4, 0x30($v0)
    ctx->pc = 0x1fad5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1fad60:
    // 0x1fad60: 0xe7a5008c  swc1        $f5, 0x8C($sp)
    ctx->pc = 0x1fad60u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_1fad64:
    // 0x1fad64: 0xc4430034  lwc1        $f3, 0x34($v0)
    ctx->pc = 0x1fad64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fad68:
    // 0x1fad68: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x1fad68u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1fad6c:
    // 0x1fad6c: 0xc4420038  lwc1        $f2, 0x38($v0)
    ctx->pc = 0x1fad6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fad70:
    // 0x1fad70: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x1fad70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1fad74:
    // 0x1fad74: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x1fad74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fad78:
    // 0x1fad78: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1fad78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1fad7c:
    // 0x1fad7c: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x1fad7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1fad80:
    // 0x1fad80: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x1fad80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1fad84:
    // 0x1fad84: 0xc7ab0060  lwc1        $f11, 0x60($sp)
    ctx->pc = 0x1fad84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1fad88:
    // 0x1fad88: 0xc7aa0070  lwc1        $f10, 0x70($sp)
    ctx->pc = 0x1fad88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1fad8c:
    // 0x1fad8c: 0xc7a90090  lwc1        $f9, 0x90($sp)
    ctx->pc = 0x1fad8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1fad90:
    // 0x1fad90: 0xc7a80084  lwc1        $f8, 0x84($sp)
    ctx->pc = 0x1fad90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1fad94:
    // 0x1fad94: 0xc7a70064  lwc1        $f7, 0x64($sp)
    ctx->pc = 0x1fad94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1fad98:
    // 0x1fad98: 0xc7a60074  lwc1        $f6, 0x74($sp)
    ctx->pc = 0x1fad98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1fad9c:
    // 0x1fad9c: 0xc7a50094  lwc1        $f5, 0x94($sp)
    ctx->pc = 0x1fad9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1fada0:
    // 0x1fada0: 0xc7a40088  lwc1        $f4, 0x88($sp)
    ctx->pc = 0x1fada0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1fada4:
    // 0x1fada4: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x1fada4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fada8:
    // 0x1fada8: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x1fada8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fadac:
    // 0x1fadac: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x1fadacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fadb0:
    // 0x1fadb0: 0xc46e0004  lwc1        $f14, 0x4($v1)
    ctx->pc = 0x1fadb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1fadb4:
    // 0x1fadb4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1fadb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1fadb8:
    // 0x1fadb8: 0xc46f0000  lwc1        $f15, 0x0($v1)
    ctx->pc = 0x1fadb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1fadbc:
    // 0x1fadbc: 0xc46d0008  lwc1        $f13, 0x8($v1)
    ctx->pc = 0x1fadbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1fadc0:
    // 0x1fadc0: 0x460a701a  mula.s      $f14, $f10
    ctx->pc = 0x1fadc0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[10]);
label_1fadc4:
    // 0x1fadc4: 0x460b781e  madda.s     $f15, $f11
    ctx->pc = 0x1fadc4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[11]));
label_1fadc8:
    // 0x1fadc8: 0x460c681c  madd.s      $f0, $f13, $f12
    ctx->pc = 0x1fadc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[12]));
label_1fadcc:
    // 0x1fadcc: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1fadccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_1fadd0:
    // 0x1fadd0: 0x46004800  add.s       $f0, $f9, $f0
    ctx->pc = 0x1fadd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_1fadd4:
    // 0x1fadd4: 0x4606701a  mula.s      $f14, $f6
    ctx->pc = 0x1fadd4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[6]);
label_1fadd8:
    // 0x1fadd8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1fadd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1faddc:
    // 0x1faddc: 0x4607781e  madda.s     $f15, $f7
    ctx->pc = 0x1faddcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[7]));
label_1fade0:
    // 0x1fade0: 0x4608681c  madd.s      $f0, $f13, $f8
    ctx->pc = 0x1fade0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[8]));
label_1fade4:
    // 0x1fade4: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x1fade4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_1fade8:
    // 0x1fade8: 0x4602701a  mula.s      $f14, $f2
    ctx->pc = 0x1fade8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
label_1fadec:
    // 0x1fadec: 0x4603781e  madda.s     $f15, $f3
    ctx->pc = 0x1fadecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[3]));
label_1fadf0:
    // 0x1fadf0: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1fadf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1fadf4:
    // 0x1fadf4: 0x4604681c  madd.s      $f0, $f13, $f4
    ctx->pc = 0x1fadf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[4]));
label_1fadf8:
    // 0x1fadf8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1fadf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1fadfc:
    // 0x1fadfc: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1fadfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1fae00:
    // 0x1fae00: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1fae00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_1fae04:
    // 0x1fae04: 0x4a1ffea  bgez        $a1, . + 4 + (-0x16 << 2)
label_1fae08:
    if (ctx->pc == 0x1FAE08u) {
        ctx->pc = 0x1FAE08u;
            // 0x1fae08: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->pc = 0x1FAE0Cu;
        goto label_1fae0c;
    }
    ctx->pc = 0x1FAE04u;
    {
        const bool branch_taken_0x1fae04 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1FAE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAE04u;
            // 0x1fae08: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae04) {
            ctx->pc = 0x1FADB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fadb0;
        }
    }
    ctx->pc = 0x1FAE0Cu;
label_1fae0c:
    // 0x1fae0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fae0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fae10:
    // 0x1fae10: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1fae10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1fae14:
    // 0x1fae14: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1fae14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1fae18:
    // 0x1fae18: 0xc09ea24  jal         func_27A890
label_1fae1c:
    if (ctx->pc == 0x1FAE1Cu) {
        ctx->pc = 0x1FAE1Cu;
            // 0x1fae1c: 0x27a700a0  addiu       $a3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1FAE20u;
        goto label_1fae20;
    }
    ctx->pc = 0x1FAE18u;
    SET_GPR_U32(ctx, 31, 0x1FAE20u);
    ctx->pc = 0x1FAE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAE18u;
            // 0x1fae1c: 0x27a700a0  addiu       $a3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A890u;
    if (runtime->hasFunction(0x27A890u)) {
        auto targetFn = runtime->lookupFunction(0x27A890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAE20u; }
        if (ctx->pc != 0x1FAE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A890_0x27a890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FAE20u; }
        if (ctx->pc != 0x1FAE20u) { return; }
    }
    ctx->pc = 0x1FAE20u;
label_1fae20:
    // 0x1fae20: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x1fae20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fae24:
    // 0x1fae24: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x1fae24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fae28:
    // 0x1fae28: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x1fae28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fae2c:
    // 0x1fae2c: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x1fae2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fae30:
    // 0x1fae30: 0x46031140  add.s       $f5, $f2, $f3
    ctx->pc = 0x1fae30u;
    ctx->f[5] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1fae34:
    // 0x1fae34: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x1fae34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_1fae38:
    // 0x1fae38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fae38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1fae3c:
    // 0x1fae3c: 0x45020021  bc1fl       . + 4 + (0x21 << 2)
label_1fae40:
    if (ctx->pc == 0x1FAE40u) {
        ctx->pc = 0x1FAE40u;
            // 0x1fae40: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE44u;
        goto label_1fae44;
    }
    ctx->pc = 0x1FAE3Cu;
    {
        const bool branch_taken_0x1fae3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fae3c) {
            ctx->pc = 0x1FAE40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAE3Cu;
            // 0x1fae40: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FAEC4u;
            goto label_1faec4;
        }
    }
    ctx->pc = 0x1FAE44u;
label_1fae44:
    // 0x1fae44: 0x460119c1  sub.s       $f7, $f3, $f1
    ctx->pc = 0x1fae44u;
    ctx->f[7] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_1fae48:
    // 0x1fae48: 0x46050801  sub.s       $f0, $f1, $f5
    ctx->pc = 0x1fae48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_1fae4c:
    // 0x1fae4c: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1fae4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fae50:
    // 0x1fae50: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x1fae50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1fae54:
    // 0x1fae54: 0xc7a600a0  lwc1        $f6, 0xA0($sp)
    ctx->pc = 0x1fae54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1fae58:
    // 0x1fae58: 0x46012818  adda.s      $f5, $f1
    ctx->pc = 0x1fae58u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_1fae5c:
    // 0x1fae5c: 0xc7a400a4  lwc1        $f4, 0xA4($sp)
    ctx->pc = 0x1fae5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1fae60:
    // 0x1fae60: 0x4606385c  madd.s      $f1, $f7, $f6
    ctx->pc = 0x1fae60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[6]));
label_1fae64:
    // 0x1fae64: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x1fae64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1fae68:
    // 0x1fae68: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1fae68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fae6c:
    // 0x1fae6c: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x1fae6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1fae70:
    // 0x1fae70: 0xc7a200ac  lwc1        $f2, 0xAC($sp)
    ctx->pc = 0x1fae70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1fae74:
    // 0x1fae74: 0x46012818  adda.s      $f5, $f1
    ctx->pc = 0x1fae74u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_1fae78:
    // 0x1fae78: 0x4604385c  madd.s      $f1, $f7, $f4
    ctx->pc = 0x1fae78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[4]));
label_1fae7c:
    // 0x1fae7c: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x1fae7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1fae80:
    // 0x1fae80: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1fae80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fae84:
    // 0x1fae84: 0x46012818  adda.s      $f5, $f1
    ctx->pc = 0x1fae84u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_1fae88:
    // 0x1fae88: 0x4603385c  madd.s      $f1, $f7, $f3
    ctx->pc = 0x1fae88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[3]));
label_1fae8c:
    // 0x1fae8c: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x1fae8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1fae90:
    // 0x1fae90: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x1fae90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1fae94:
    // 0x1fae94: 0x46012818  adda.s      $f5, $f1
    ctx->pc = 0x1fae94u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_1fae98:
    // 0x1fae98: 0x4602385c  madd.s      $f1, $f7, $f2
    ctx->pc = 0x1fae98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[2]));
label_1fae9c:
    // 0x1fae9c: 0xe7a2010c  swc1        $f2, 0x10C($sp)
    ctx->pc = 0x1fae9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_1faea0:
    // 0x1faea0: 0xe7a60100  swc1        $f6, 0x100($sp)
    ctx->pc = 0x1faea0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1faea4:
    // 0x1faea4: 0xe7a40104  swc1        $f4, 0x104($sp)
    ctx->pc = 0x1faea4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_1faea8:
    // 0x1faea8: 0xe7a100fc  swc1        $f1, 0xFC($sp)
    ctx->pc = 0x1faea8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1faeac:
    // 0x1faeac: 0xe7a30108  swc1        $f3, 0x108($sp)
    ctx->pc = 0x1faeacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1faeb0:
    // 0x1faeb0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1faeb4:
    if (ctx->pc == 0x1FAEB4u) {
        ctx->pc = 0x1FAEB4u;
            // 0x1faeb4: 0xe7a0010c  swc1        $f0, 0x10C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
        ctx->pc = 0x1FAEB8u;
        goto label_1faeb8;
    }
    ctx->pc = 0x1FAEB0u;
    {
        const bool branch_taken_0x1faeb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAEB0u;
            // 0x1faeb4: 0xe7a0010c  swc1        $f0, 0x10C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faeb0) {
            ctx->pc = 0x1FAEC0u;
            goto label_1faec0;
        }
    }
    ctx->pc = 0x1FAEB8u;
label_1faeb8:
    // 0x1faeb8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1faebc:
    if (ctx->pc == 0x1FAEBCu) {
        ctx->pc = 0x1FAEBCu;
            // 0x1faebc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1FAEC0u;
        goto label_1faec0;
    }
    ctx->pc = 0x1FAEB8u;
    {
        const bool branch_taken_0x1faeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAEB8u;
            // 0x1faebc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faeb8) {
            ctx->pc = 0x1FAEC4u;
            goto label_1faec4;
        }
    }
    ctx->pc = 0x1FAEC0u;
label_1faec0:
    // 0x1faec0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1faec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1faec4:
    // 0x1faec4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1faec8:
    if (ctx->pc == 0x1FAEC8u) {
        ctx->pc = 0x1FAECCu;
        goto label_1faecc;
    }
    ctx->pc = 0x1FAEC4u;
    {
        const bool branch_taken_0x1faec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faec4) {
            ctx->pc = 0x1FAEE0u;
            goto label_1faee0;
        }
    }
    ctx->pc = 0x1FAECCu;
label_1faecc:
    // 0x1faecc: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1faeccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1faed0:
    // 0x1faed0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1faed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1faed4:
    // 0x1faed4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1faed4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1faed8:
    // 0x1faed8: 0x320f809  jalr        $t9
label_1faedc:
    if (ctx->pc == 0x1FAEDCu) {
        ctx->pc = 0x1FAEDCu;
            // 0x1faedc: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x1FAEE0u;
        goto label_1faee0;
    }
    ctx->pc = 0x1FAED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FAEE0u);
        ctx->pc = 0x1FAEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAED8u;
            // 0x1faedc: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FAEE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FAEE0u; }
            if (ctx->pc != 0x1FAEE0u) { return; }
        }
        }
    }
    ctx->pc = 0x1FAEE0u;
label_1faee0:
    // 0x1faee0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1faee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1faee4:
    // 0x1faee4: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1faee4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1faee8:
    // 0x1faee8: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1faee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1faeec:
    // 0x1faeec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1faeecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1faef0:
    // 0x1faef0: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1faef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1faef4:
    // 0x1faef4: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1faef4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1faef8:
    // 0x1faef8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1faefc:
    if (ctx->pc == 0x1FAEFCu) {
        ctx->pc = 0x1FAEFCu;
            // 0x1faefc: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1FAF00u;
        goto label_1faf00;
    }
    ctx->pc = 0x1FAEF8u;
    {
        const bool branch_taken_0x1faef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAEF8u;
            // 0x1faefc: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faef8) {
            ctx->pc = 0x1FAF28u;
            goto label_1faf28;
        }
    }
    ctx->pc = 0x1FAF00u;
label_1faf00:
    // 0x1faf00: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1faf00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1faf04:
    // 0x1faf04: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1faf04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1faf08:
    // 0x1faf08: 0x2463b0b8  addiu       $v1, $v1, -0x4F48
    ctx->pc = 0x1faf08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947000));
label_1faf0c:
    // 0x1faf0c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1faf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1faf10:
    // 0x1faf10: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1faf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1faf14:
    // 0x1faf14: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1faf14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1faf18:
    // 0x1faf18: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1faf18u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1faf1c:
    // 0x1faf1c: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1faf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1faf20:
    // 0x1faf20: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1faf20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1faf24:
    // 0x1faf24: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1faf24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1faf28:
    // 0x1faf28: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1faf28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1faf2c:
    // 0x1faf2c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1faf2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1faf30:
    // 0x1faf30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1faf30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1faf34:
    // 0x1faf34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1faf34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1faf38:
    // 0x1faf38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1faf38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1faf3c:
    // 0x1faf3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1faf3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1faf40:
    // 0x1faf40: 0x3e00008  jr          $ra
label_1faf44:
    if (ctx->pc == 0x1FAF44u) {
        ctx->pc = 0x1FAF44u;
            // 0x1faf44: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x1FAF48u;
        goto label_1faf48;
    }
    ctx->pc = 0x1FAF40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FAF40u;
            // 0x1faf44: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FAF48u;
label_1faf48:
    // 0x1faf48: 0x0  nop
    ctx->pc = 0x1faf48u;
    // NOP
label_1faf4c:
    // 0x1faf4c: 0x0  nop
    ctx->pc = 0x1faf4cu;
    // NOP
}
