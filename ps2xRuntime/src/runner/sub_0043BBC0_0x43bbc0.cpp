#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0043BBC0
// Address: 0x43bbc0 - 0x43bfe0
void sub_0043BBC0_0x43bbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043BBC0_0x43bbc0");
#endif

    switch (ctx->pc) {
        case 0x43bbc0u: goto label_43bbc0;
        case 0x43bbc4u: goto label_43bbc4;
        case 0x43bbc8u: goto label_43bbc8;
        case 0x43bbccu: goto label_43bbcc;
        case 0x43bbd0u: goto label_43bbd0;
        case 0x43bbd4u: goto label_43bbd4;
        case 0x43bbd8u: goto label_43bbd8;
        case 0x43bbdcu: goto label_43bbdc;
        case 0x43bbe0u: goto label_43bbe0;
        case 0x43bbe4u: goto label_43bbe4;
        case 0x43bbe8u: goto label_43bbe8;
        case 0x43bbecu: goto label_43bbec;
        case 0x43bbf0u: goto label_43bbf0;
        case 0x43bbf4u: goto label_43bbf4;
        case 0x43bbf8u: goto label_43bbf8;
        case 0x43bbfcu: goto label_43bbfc;
        case 0x43bc00u: goto label_43bc00;
        case 0x43bc04u: goto label_43bc04;
        case 0x43bc08u: goto label_43bc08;
        case 0x43bc0cu: goto label_43bc0c;
        case 0x43bc10u: goto label_43bc10;
        case 0x43bc14u: goto label_43bc14;
        case 0x43bc18u: goto label_43bc18;
        case 0x43bc1cu: goto label_43bc1c;
        case 0x43bc20u: goto label_43bc20;
        case 0x43bc24u: goto label_43bc24;
        case 0x43bc28u: goto label_43bc28;
        case 0x43bc2cu: goto label_43bc2c;
        case 0x43bc30u: goto label_43bc30;
        case 0x43bc34u: goto label_43bc34;
        case 0x43bc38u: goto label_43bc38;
        case 0x43bc3cu: goto label_43bc3c;
        case 0x43bc40u: goto label_43bc40;
        case 0x43bc44u: goto label_43bc44;
        case 0x43bc48u: goto label_43bc48;
        case 0x43bc4cu: goto label_43bc4c;
        case 0x43bc50u: goto label_43bc50;
        case 0x43bc54u: goto label_43bc54;
        case 0x43bc58u: goto label_43bc58;
        case 0x43bc5cu: goto label_43bc5c;
        case 0x43bc60u: goto label_43bc60;
        case 0x43bc64u: goto label_43bc64;
        case 0x43bc68u: goto label_43bc68;
        case 0x43bc6cu: goto label_43bc6c;
        case 0x43bc70u: goto label_43bc70;
        case 0x43bc74u: goto label_43bc74;
        case 0x43bc78u: goto label_43bc78;
        case 0x43bc7cu: goto label_43bc7c;
        case 0x43bc80u: goto label_43bc80;
        case 0x43bc84u: goto label_43bc84;
        case 0x43bc88u: goto label_43bc88;
        case 0x43bc8cu: goto label_43bc8c;
        case 0x43bc90u: goto label_43bc90;
        case 0x43bc94u: goto label_43bc94;
        case 0x43bc98u: goto label_43bc98;
        case 0x43bc9cu: goto label_43bc9c;
        case 0x43bca0u: goto label_43bca0;
        case 0x43bca4u: goto label_43bca4;
        case 0x43bca8u: goto label_43bca8;
        case 0x43bcacu: goto label_43bcac;
        case 0x43bcb0u: goto label_43bcb0;
        case 0x43bcb4u: goto label_43bcb4;
        case 0x43bcb8u: goto label_43bcb8;
        case 0x43bcbcu: goto label_43bcbc;
        case 0x43bcc0u: goto label_43bcc0;
        case 0x43bcc4u: goto label_43bcc4;
        case 0x43bcc8u: goto label_43bcc8;
        case 0x43bcccu: goto label_43bccc;
        case 0x43bcd0u: goto label_43bcd0;
        case 0x43bcd4u: goto label_43bcd4;
        case 0x43bcd8u: goto label_43bcd8;
        case 0x43bcdcu: goto label_43bcdc;
        case 0x43bce0u: goto label_43bce0;
        case 0x43bce4u: goto label_43bce4;
        case 0x43bce8u: goto label_43bce8;
        case 0x43bcecu: goto label_43bcec;
        case 0x43bcf0u: goto label_43bcf0;
        case 0x43bcf4u: goto label_43bcf4;
        case 0x43bcf8u: goto label_43bcf8;
        case 0x43bcfcu: goto label_43bcfc;
        case 0x43bd00u: goto label_43bd00;
        case 0x43bd04u: goto label_43bd04;
        case 0x43bd08u: goto label_43bd08;
        case 0x43bd0cu: goto label_43bd0c;
        case 0x43bd10u: goto label_43bd10;
        case 0x43bd14u: goto label_43bd14;
        case 0x43bd18u: goto label_43bd18;
        case 0x43bd1cu: goto label_43bd1c;
        case 0x43bd20u: goto label_43bd20;
        case 0x43bd24u: goto label_43bd24;
        case 0x43bd28u: goto label_43bd28;
        case 0x43bd2cu: goto label_43bd2c;
        case 0x43bd30u: goto label_43bd30;
        case 0x43bd34u: goto label_43bd34;
        case 0x43bd38u: goto label_43bd38;
        case 0x43bd3cu: goto label_43bd3c;
        case 0x43bd40u: goto label_43bd40;
        case 0x43bd44u: goto label_43bd44;
        case 0x43bd48u: goto label_43bd48;
        case 0x43bd4cu: goto label_43bd4c;
        case 0x43bd50u: goto label_43bd50;
        case 0x43bd54u: goto label_43bd54;
        case 0x43bd58u: goto label_43bd58;
        case 0x43bd5cu: goto label_43bd5c;
        case 0x43bd60u: goto label_43bd60;
        case 0x43bd64u: goto label_43bd64;
        case 0x43bd68u: goto label_43bd68;
        case 0x43bd6cu: goto label_43bd6c;
        case 0x43bd70u: goto label_43bd70;
        case 0x43bd74u: goto label_43bd74;
        case 0x43bd78u: goto label_43bd78;
        case 0x43bd7cu: goto label_43bd7c;
        case 0x43bd80u: goto label_43bd80;
        case 0x43bd84u: goto label_43bd84;
        case 0x43bd88u: goto label_43bd88;
        case 0x43bd8cu: goto label_43bd8c;
        case 0x43bd90u: goto label_43bd90;
        case 0x43bd94u: goto label_43bd94;
        case 0x43bd98u: goto label_43bd98;
        case 0x43bd9cu: goto label_43bd9c;
        case 0x43bda0u: goto label_43bda0;
        case 0x43bda4u: goto label_43bda4;
        case 0x43bda8u: goto label_43bda8;
        case 0x43bdacu: goto label_43bdac;
        case 0x43bdb0u: goto label_43bdb0;
        case 0x43bdb4u: goto label_43bdb4;
        case 0x43bdb8u: goto label_43bdb8;
        case 0x43bdbcu: goto label_43bdbc;
        case 0x43bdc0u: goto label_43bdc0;
        case 0x43bdc4u: goto label_43bdc4;
        case 0x43bdc8u: goto label_43bdc8;
        case 0x43bdccu: goto label_43bdcc;
        case 0x43bdd0u: goto label_43bdd0;
        case 0x43bdd4u: goto label_43bdd4;
        case 0x43bdd8u: goto label_43bdd8;
        case 0x43bddcu: goto label_43bddc;
        case 0x43bde0u: goto label_43bde0;
        case 0x43bde4u: goto label_43bde4;
        case 0x43bde8u: goto label_43bde8;
        case 0x43bdecu: goto label_43bdec;
        case 0x43bdf0u: goto label_43bdf0;
        case 0x43bdf4u: goto label_43bdf4;
        case 0x43bdf8u: goto label_43bdf8;
        case 0x43bdfcu: goto label_43bdfc;
        case 0x43be00u: goto label_43be00;
        case 0x43be04u: goto label_43be04;
        case 0x43be08u: goto label_43be08;
        case 0x43be0cu: goto label_43be0c;
        case 0x43be10u: goto label_43be10;
        case 0x43be14u: goto label_43be14;
        case 0x43be18u: goto label_43be18;
        case 0x43be1cu: goto label_43be1c;
        case 0x43be20u: goto label_43be20;
        case 0x43be24u: goto label_43be24;
        case 0x43be28u: goto label_43be28;
        case 0x43be2cu: goto label_43be2c;
        case 0x43be30u: goto label_43be30;
        case 0x43be34u: goto label_43be34;
        case 0x43be38u: goto label_43be38;
        case 0x43be3cu: goto label_43be3c;
        case 0x43be40u: goto label_43be40;
        case 0x43be44u: goto label_43be44;
        case 0x43be48u: goto label_43be48;
        case 0x43be4cu: goto label_43be4c;
        case 0x43be50u: goto label_43be50;
        case 0x43be54u: goto label_43be54;
        case 0x43be58u: goto label_43be58;
        case 0x43be5cu: goto label_43be5c;
        case 0x43be60u: goto label_43be60;
        case 0x43be64u: goto label_43be64;
        case 0x43be68u: goto label_43be68;
        case 0x43be6cu: goto label_43be6c;
        case 0x43be70u: goto label_43be70;
        case 0x43be74u: goto label_43be74;
        case 0x43be78u: goto label_43be78;
        case 0x43be7cu: goto label_43be7c;
        case 0x43be80u: goto label_43be80;
        case 0x43be84u: goto label_43be84;
        case 0x43be88u: goto label_43be88;
        case 0x43be8cu: goto label_43be8c;
        case 0x43be90u: goto label_43be90;
        case 0x43be94u: goto label_43be94;
        case 0x43be98u: goto label_43be98;
        case 0x43be9cu: goto label_43be9c;
        case 0x43bea0u: goto label_43bea0;
        case 0x43bea4u: goto label_43bea4;
        case 0x43bea8u: goto label_43bea8;
        case 0x43beacu: goto label_43beac;
        case 0x43beb0u: goto label_43beb0;
        case 0x43beb4u: goto label_43beb4;
        case 0x43beb8u: goto label_43beb8;
        case 0x43bebcu: goto label_43bebc;
        case 0x43bec0u: goto label_43bec0;
        case 0x43bec4u: goto label_43bec4;
        case 0x43bec8u: goto label_43bec8;
        case 0x43beccu: goto label_43becc;
        case 0x43bed0u: goto label_43bed0;
        case 0x43bed4u: goto label_43bed4;
        case 0x43bed8u: goto label_43bed8;
        case 0x43bedcu: goto label_43bedc;
        case 0x43bee0u: goto label_43bee0;
        case 0x43bee4u: goto label_43bee4;
        case 0x43bee8u: goto label_43bee8;
        case 0x43beecu: goto label_43beec;
        case 0x43bef0u: goto label_43bef0;
        case 0x43bef4u: goto label_43bef4;
        case 0x43bef8u: goto label_43bef8;
        case 0x43befcu: goto label_43befc;
        case 0x43bf00u: goto label_43bf00;
        case 0x43bf04u: goto label_43bf04;
        case 0x43bf08u: goto label_43bf08;
        case 0x43bf0cu: goto label_43bf0c;
        case 0x43bf10u: goto label_43bf10;
        case 0x43bf14u: goto label_43bf14;
        case 0x43bf18u: goto label_43bf18;
        case 0x43bf1cu: goto label_43bf1c;
        case 0x43bf20u: goto label_43bf20;
        case 0x43bf24u: goto label_43bf24;
        case 0x43bf28u: goto label_43bf28;
        case 0x43bf2cu: goto label_43bf2c;
        case 0x43bf30u: goto label_43bf30;
        case 0x43bf34u: goto label_43bf34;
        case 0x43bf38u: goto label_43bf38;
        case 0x43bf3cu: goto label_43bf3c;
        case 0x43bf40u: goto label_43bf40;
        case 0x43bf44u: goto label_43bf44;
        case 0x43bf48u: goto label_43bf48;
        case 0x43bf4cu: goto label_43bf4c;
        case 0x43bf50u: goto label_43bf50;
        case 0x43bf54u: goto label_43bf54;
        case 0x43bf58u: goto label_43bf58;
        case 0x43bf5cu: goto label_43bf5c;
        case 0x43bf60u: goto label_43bf60;
        case 0x43bf64u: goto label_43bf64;
        case 0x43bf68u: goto label_43bf68;
        case 0x43bf6cu: goto label_43bf6c;
        case 0x43bf70u: goto label_43bf70;
        case 0x43bf74u: goto label_43bf74;
        case 0x43bf78u: goto label_43bf78;
        case 0x43bf7cu: goto label_43bf7c;
        case 0x43bf80u: goto label_43bf80;
        case 0x43bf84u: goto label_43bf84;
        case 0x43bf88u: goto label_43bf88;
        case 0x43bf8cu: goto label_43bf8c;
        case 0x43bf90u: goto label_43bf90;
        case 0x43bf94u: goto label_43bf94;
        case 0x43bf98u: goto label_43bf98;
        case 0x43bf9cu: goto label_43bf9c;
        case 0x43bfa0u: goto label_43bfa0;
        case 0x43bfa4u: goto label_43bfa4;
        case 0x43bfa8u: goto label_43bfa8;
        case 0x43bfacu: goto label_43bfac;
        case 0x43bfb0u: goto label_43bfb0;
        case 0x43bfb4u: goto label_43bfb4;
        case 0x43bfb8u: goto label_43bfb8;
        case 0x43bfbcu: goto label_43bfbc;
        case 0x43bfc0u: goto label_43bfc0;
        case 0x43bfc4u: goto label_43bfc4;
        case 0x43bfc8u: goto label_43bfc8;
        case 0x43bfccu: goto label_43bfcc;
        case 0x43bfd0u: goto label_43bfd0;
        case 0x43bfd4u: goto label_43bfd4;
        case 0x43bfd8u: goto label_43bfd8;
        case 0x43bfdcu: goto label_43bfdc;
        default: break;
    }

    ctx->pc = 0x43bbc0u;

label_43bbc0:
    // 0x43bbc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x43bbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_43bbc4:
    // 0x43bbc4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x43bbc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43bbc8:
    // 0x43bbc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43bbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_43bbcc:
    // 0x43bbcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43bbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43bbd0:
    // 0x43bbd0: 0x90830094  lbu         $v1, 0x94($a0)
    ctx->pc = 0x43bbd0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 148)));
label_43bbd4:
    // 0x43bbd4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_43bbd8:
    if (ctx->pc == 0x43BBD8u) {
        ctx->pc = 0x43BBD8u;
            // 0x43bbd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43BBDCu;
        goto label_43bbdc;
    }
    ctx->pc = 0x43BBD4u;
    {
        const bool branch_taken_0x43bbd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x43BBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43BBD4u;
            // 0x43bbd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bbd4) {
            ctx->pc = 0x43BBF0u;
            goto label_43bbf0;
        }
    }
    ctx->pc = 0x43BBDCu;
label_43bbdc:
    // 0x43bbdc: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x43bbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_43bbe0:
    // 0x43bbe0: 0xc074f30  jal         func_1D3CC0
label_43bbe4:
    if (ctx->pc == 0x43BBE4u) {
        ctx->pc = 0x43BBE4u;
            // 0x43bbe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43BBE8u;
        goto label_43bbe8;
    }
    ctx->pc = 0x43BBE0u;
    SET_GPR_U32(ctx, 31, 0x43BBE8u);
    ctx->pc = 0x43BBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43BBE0u;
            // 0x43bbe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BBE8u; }
        if (ctx->pc != 0x43BBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BBE8u; }
        if (ctx->pc != 0x43BBE8u) { return; }
    }
    ctx->pc = 0x43BBE8u;
label_43bbe8:
    // 0x43bbe8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x43bbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43bbec:
    // 0x43bbec: 0xa2030094  sb          $v1, 0x94($s0)
    ctx->pc = 0x43bbecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 148), (uint8_t)GPR_U32(ctx, 3));
label_43bbf0:
    // 0x43bbf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43bbf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_43bbf4:
    // 0x43bbf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43bbf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43bbf8:
    // 0x43bbf8: 0x3e00008  jr          $ra
label_43bbfc:
    if (ctx->pc == 0x43BBFCu) {
        ctx->pc = 0x43BBFCu;
            // 0x43bbfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x43BC00u;
        goto label_43bc00;
    }
    ctx->pc = 0x43BBF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43BBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43BBF8u;
            // 0x43bbfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43BC00u;
label_43bc00:
    // 0x43bc00: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x43bc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_43bc04:
    // 0x43bc04: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x43bc04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_43bc08:
    // 0x43bc08: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x43bc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_43bc0c:
    // 0x43bc0c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x43bc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_43bc10:
    // 0x43bc10: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x43bc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_43bc14:
    // 0x43bc14: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x43bc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_43bc18:
    // 0x43bc18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x43bc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_43bc1c:
    // 0x43bc1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x43bc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_43bc20:
    // 0x43bc20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x43bc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_43bc24:
    // 0x43bc24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43bc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43bc28:
    // 0x43bc28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43bc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43bc2c:
    // 0x43bc2c: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x43bc2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_43bc30:
    // 0x43bc30: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x43bc30u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_43bc34:
    // 0x43bc34: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x43bc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_43bc38:
    // 0x43bc38: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_43bc3c:
    if (ctx->pc == 0x43BC3Cu) {
        ctx->pc = 0x43BC3Cu;
            // 0x43bc3c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43BC40u;
        goto label_43bc40;
    }
    ctx->pc = 0x43BC38u;
    {
        const bool branch_taken_0x43bc38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x43BC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43BC38u;
            // 0x43bc3c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bc38) {
            ctx->pc = 0x43BC7Cu;
            goto label_43bc7c;
        }
    }
    ctx->pc = 0x43BC40u;
label_43bc40:
    // 0x43bc40: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x43bc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_43bc44:
    // 0x43bc44: 0x10a30056  beq         $a1, $v1, . + 4 + (0x56 << 2)
label_43bc48:
    if (ctx->pc == 0x43BC48u) {
        ctx->pc = 0x43BC4Cu;
        goto label_43bc4c;
    }
    ctx->pc = 0x43BC44u;
    {
        const bool branch_taken_0x43bc44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x43bc44) {
            ctx->pc = 0x43BDA0u;
            goto label_43bda0;
        }
    }
    ctx->pc = 0x43BC4Cu;
label_43bc4c:
    // 0x43bc4c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x43bc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_43bc50:
    // 0x43bc50: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_43bc54:
    if (ctx->pc == 0x43BC54u) {
        ctx->pc = 0x43BC54u;
            // 0x43bc54: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x43BC58u;
        goto label_43bc58;
    }
    ctx->pc = 0x43BC50u;
    {
        const bool branch_taken_0x43bc50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x43bc50) {
            ctx->pc = 0x43BC54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43BC50u;
            // 0x43bc54: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43BC60u;
            goto label_43bc60;
        }
    }
    ctx->pc = 0x43BC58u;
label_43bc58:
    // 0x43bc58: 0x10000051  b           . + 4 + (0x51 << 2)
label_43bc5c:
    if (ctx->pc == 0x43BC5Cu) {
        ctx->pc = 0x43BC60u;
        goto label_43bc60;
    }
    ctx->pc = 0x43BC58u;
    {
        const bool branch_taken_0x43bc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43bc58) {
            ctx->pc = 0x43BDA0u;
            goto label_43bda0;
        }
    }
    ctx->pc = 0x43BC60u;
label_43bc60:
    // 0x43bc60: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x43bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_43bc64:
    // 0x43bc64: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x43bc64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_43bc68:
    // 0x43bc68: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x43bc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_43bc6c:
    // 0x43bc6c: 0x320f809  jalr        $t9
label_43bc70:
    if (ctx->pc == 0x43BC70u) {
        ctx->pc = 0x43BC70u;
            // 0x43bc70: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x43BC74u;
        goto label_43bc74;
    }
    ctx->pc = 0x43BC6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43BC74u);
        ctx->pc = 0x43BC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43BC6Cu;
            // 0x43bc70: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43BC74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43BC74u; }
            if (ctx->pc != 0x43BC74u) { return; }
        }
        }
    }
    ctx->pc = 0x43BC74u;
label_43bc74:
    // 0x43bc74: 0x1000004a  b           . + 4 + (0x4A << 2)
label_43bc78:
    if (ctx->pc == 0x43BC78u) {
        ctx->pc = 0x43BC7Cu;
        goto label_43bc7c;
    }
    ctx->pc = 0x43BC74u;
    {
        const bool branch_taken_0x43bc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43bc74) {
            ctx->pc = 0x43BDA0u;
            goto label_43bda0;
        }
    }
    ctx->pc = 0x43BC7Cu;
label_43bc7c:
    // 0x43bc7c: 0x8eb00070  lw          $s0, 0x70($s5)
    ctx->pc = 0x43bc7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_43bc80:
    // 0x43bc80: 0x12000047  beqz        $s0, . + 4 + (0x47 << 2)
label_43bc84:
    if (ctx->pc == 0x43BC84u) {
        ctx->pc = 0x43BC88u;
        goto label_43bc88;
    }
    ctx->pc = 0x43BC80u;
    {
        const bool branch_taken_0x43bc80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x43bc80) {
            ctx->pc = 0x43BDA0u;
            goto label_43bda0;
        }
    }
    ctx->pc = 0x43BC88u;
label_43bc88:
    // 0x43bc88: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43bc88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43bc8c:
    // 0x43bc8c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x43bc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_43bc90:
    // 0x43bc90: 0x8c74e378  lw          $s4, -0x1C88($v1)
    ctx->pc = 0x43bc90u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_43bc94:
    // 0x43bc94: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x43bc94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_43bc98:
    // 0x43bc98: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x43bc98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_43bc9c:
    // 0x43bc9c: 0x8c64d120  lw          $a0, -0x2EE0($v1)
    ctx->pc = 0x43bc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_43bca0:
    // 0x43bca0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43bca4:
    // 0x43bca4: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x43bca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_43bca8:
    // 0x43bca8: 0x8c57e370  lw          $s7, -0x1C90($v0)
    ctx->pc = 0x43bca8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_43bcac:
    // 0x43bcac: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x43bcacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_43bcb0:
    // 0x43bcb0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43bcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43bcb4:
    // 0x43bcb4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x43bcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_43bcb8:
    // 0x43bcb8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43bcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43bcbc:
    // 0x43bcbc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x43bcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_43bcc0:
    // 0x43bcc0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x43bcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_43bcc4:
    // 0x43bcc4: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x43bcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_43bcc8:
    // 0x43bcc8: 0x24960010  addiu       $s6, $a0, 0x10
    ctx->pc = 0x43bcc8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_43bccc:
    // 0x43bccc: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x43bcccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_43bcd0:
    // 0x43bcd0: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x43bcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_43bcd4:
    // 0x43bcd4: 0xc04e738  jal         func_139CE0
label_43bcd8:
    if (ctx->pc == 0x43BCD8u) {
        ctx->pc = 0x43BCD8u;
            // 0x43bcd8: 0x26b30084  addiu       $s3, $s5, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
        ctx->pc = 0x43BCDCu;
        goto label_43bcdc;
    }
    ctx->pc = 0x43BCD4u;
    SET_GPR_U32(ctx, 31, 0x43BCDCu);
    ctx->pc = 0x43BCD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43BCD4u;
            // 0x43bcd8: 0x26b30084  addiu       $s3, $s5, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BCDCu; }
        if (ctx->pc != 0x43BCDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BCDCu; }
        if (ctx->pc != 0x43BCDCu) { return; }
    }
    ctx->pc = 0x43BCDCu;
label_43bcdc:
    // 0x43bcdc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x43bcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_43bce0:
    // 0x43bce0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x43bce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_43bce4:
    // 0x43bce4: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x43bce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_43bce8:
    // 0x43bce8: 0xc04e4a4  jal         func_139290
label_43bcec:
    if (ctx->pc == 0x43BCECu) {
        ctx->pc = 0x43BCECu;
            // 0x43bcec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43BCF0u;
        goto label_43bcf0;
    }
    ctx->pc = 0x43BCE8u;
    SET_GPR_U32(ctx, 31, 0x43BCF0u);
    ctx->pc = 0x43BCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43BCE8u;
            // 0x43bcec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BCF0u; }
        if (ctx->pc != 0x43BCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BCF0u; }
        if (ctx->pc != 0x43BCF0u) { return; }
    }
    ctx->pc = 0x43BCF0u;
label_43bcf0:
    // 0x43bcf0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x43bcf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43bcf4:
    // 0x43bcf4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x43bcf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43bcf8:
    // 0x43bcf8: 0x8ea30074  lw          $v1, 0x74($s5)
    ctx->pc = 0x43bcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_43bcfc:
    // 0x43bcfc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x43bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_43bd00:
    // 0x43bd00: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x43bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_43bd04:
    // 0x43bd04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x43bd04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_43bd08:
    // 0x43bd08: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x43bd08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_43bd0c:
    // 0x43bd0c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x43bd0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_43bd10:
    // 0x43bd10: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x43bd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_43bd14:
    // 0x43bd14: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x43bd14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_43bd18:
    // 0x43bd18: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x43bd18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_43bd1c:
    // 0x43bd1c: 0x8c4a0130  lw          $t2, 0x130($v0)
    ctx->pc = 0x43bd1cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_43bd20:
    // 0x43bd20: 0xc10f39c  jal         func_43CE70
label_43bd24:
    if (ctx->pc == 0x43BD24u) {
        ctx->pc = 0x43BD24u;
            // 0x43bd24: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x43BD28u;
        goto label_43bd28;
    }
    ctx->pc = 0x43BD20u;
    SET_GPR_U32(ctx, 31, 0x43BD28u);
    ctx->pc = 0x43BD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43BD20u;
            // 0x43bd24: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43CE70u;
    if (runtime->hasFunction(0x43CE70u)) {
        auto targetFn = runtime->lookupFunction(0x43CE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BD28u; }
        if (ctx->pc != 0x43BD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043CE70_0x43ce70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BD28u; }
        if (ctx->pc != 0x43BD28u) { return; }
    }
    ctx->pc = 0x43BD28u;
label_43bd28:
    // 0x43bd28: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x43bd28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_43bd2c:
    // 0x43bd2c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x43bd2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_43bd30:
    // 0x43bd30: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_43bd34:
    if (ctx->pc == 0x43BD34u) {
        ctx->pc = 0x43BD34u;
            // 0x43bd34: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x43BD38u;
        goto label_43bd38;
    }
    ctx->pc = 0x43BD30u;
    {
        const bool branch_taken_0x43bd30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43BD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43BD30u;
            // 0x43bd34: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bd30) {
            ctx->pc = 0x43BCF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_43bcf8;
        }
    }
    ctx->pc = 0x43BD38u;
label_43bd38:
    // 0x43bd38: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43bd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43bd3c:
    // 0x43bd3c: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x43bd3cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_43bd40:
    // 0x43bd40: 0x19200008  blez        $t1, . + 4 + (0x8 << 2)
label_43bd44:
    if (ctx->pc == 0x43BD44u) {
        ctx->pc = 0x43BD44u;
            // 0x43bd44: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x43BD48u;
        goto label_43bd48;
    }
    ctx->pc = 0x43BD40u;
    {
        const bool branch_taken_0x43bd40 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x43BD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43BD40u;
            // 0x43bd44: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bd40) {
            ctx->pc = 0x43BD64u;
            goto label_43bd64;
        }
    }
    ctx->pc = 0x43BD48u;
label_43bd48:
    // 0x43bd48: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43bd48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43bd4c:
    // 0x43bd4c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43bd50:
    // 0x43bd50: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x43bd50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_43bd54:
    // 0x43bd54: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x43bd54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_43bd58:
    // 0x43bd58: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x43bd58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_43bd5c:
    // 0x43bd5c: 0xc055990  jal         func_156640
label_43bd60:
    if (ctx->pc == 0x43BD60u) {
        ctx->pc = 0x43BD60u;
            // 0x43bd60: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43BD64u;
        goto label_43bd64;
    }
    ctx->pc = 0x43BD5Cu;
    SET_GPR_U32(ctx, 31, 0x43BD64u);
    ctx->pc = 0x43BD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43BD5Cu;
            // 0x43bd60: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BD64u; }
        if (ctx->pc != 0x43BD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BD64u; }
        if (ctx->pc != 0x43BD64u) { return; }
    }
    ctx->pc = 0x43BD64u;
label_43bd64:
    // 0x43bd64: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x43bd64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_43bd68:
    // 0x43bd68: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43bd6c:
    // 0x43bd6c: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x43bd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_43bd70:
    // 0x43bd70: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x43bd70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43bd74:
    // 0x43bd74: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x43bd74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_43bd78:
    // 0x43bd78: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x43bd78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43bd7c:
    // 0x43bd7c: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x43bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_43bd80:
    // 0x43bd80: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x43bd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_43bd84:
    // 0x43bd84: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x43bd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_43bd88:
    // 0x43bd88: 0xc10f110  jal         func_43C440
label_43bd8c:
    if (ctx->pc == 0x43BD8Cu) {
        ctx->pc = 0x43BD8Cu;
            // 0x43bd8c: 0x26a50090  addiu       $a1, $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
        ctx->pc = 0x43BD90u;
        goto label_43bd90;
    }
    ctx->pc = 0x43BD88u;
    SET_GPR_U32(ctx, 31, 0x43BD90u);
    ctx->pc = 0x43BD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43BD88u;
            // 0x43bd8c: 0x26a50090  addiu       $a1, $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43C440u;
    if (runtime->hasFunction(0x43C440u)) {
        auto targetFn = runtime->lookupFunction(0x43C440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BD90u; }
        if (ctx->pc != 0x43BD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043C440_0x43c440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BD90u; }
        if (ctx->pc != 0x43BD90u) { return; }
    }
    ctx->pc = 0x43BD90u;
label_43bd90:
    // 0x43bd90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x43bd90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_43bd94:
    // 0x43bd94: 0x230182b  sltu        $v1, $s1, $s0
    ctx->pc = 0x43bd94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_43bd98:
    // 0x43bd98: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_43bd9c:
    if (ctx->pc == 0x43BD9Cu) {
        ctx->pc = 0x43BD9Cu;
            // 0x43bd9c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x43BDA0u;
        goto label_43bda0;
    }
    ctx->pc = 0x43BD98u;
    {
        const bool branch_taken_0x43bd98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x43BD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43BD98u;
            // 0x43bd9c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bd98) {
            ctx->pc = 0x43BD7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_43bd7c;
        }
    }
    ctx->pc = 0x43BDA0u;
label_43bda0:
    // 0x43bda0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x43bda0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_43bda4:
    // 0x43bda4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x43bda4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_43bda8:
    // 0x43bda8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x43bda8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_43bdac:
    // 0x43bdac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x43bdacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_43bdb0:
    // 0x43bdb0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x43bdb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_43bdb4:
    // 0x43bdb4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x43bdb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_43bdb8:
    // 0x43bdb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x43bdb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43bdbc:
    // 0x43bdbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43bdbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43bdc0:
    // 0x43bdc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43bdc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43bdc4:
    // 0x43bdc4: 0x3e00008  jr          $ra
label_43bdc8:
    if (ctx->pc == 0x43BDC8u) {
        ctx->pc = 0x43BDC8u;
            // 0x43bdc8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x43BDCCu;
        goto label_43bdcc;
    }
    ctx->pc = 0x43BDC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43BDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43BDC4u;
            // 0x43bdc8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43BDCCu;
label_43bdcc:
    // 0x43bdcc: 0x0  nop
    ctx->pc = 0x43bdccu;
    // NOP
label_43bdd0:
    // 0x43bdd0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x43bdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_43bdd4:
    // 0x43bdd4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x43bdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_43bdd8:
    // 0x43bdd8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x43bdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_43bddc:
    // 0x43bddc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x43bddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_43bde0:
    // 0x43bde0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x43bde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_43bde4:
    // 0x43bde4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x43bde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_43bde8:
    // 0x43bde8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x43bde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_43bdec:
    // 0x43bdec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43bdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43bdf0:
    // 0x43bdf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43bdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43bdf4:
    // 0x43bdf4: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x43bdf4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_43bdf8:
    // 0x43bdf8: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_43bdfc:
    if (ctx->pc == 0x43BDFCu) {
        ctx->pc = 0x43BDFCu;
            // 0x43bdfc: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43BE00u;
        goto label_43be00;
    }
    ctx->pc = 0x43BDF8u;
    {
        const bool branch_taken_0x43bdf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x43BDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43BDF8u;
            // 0x43bdfc: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bdf8) {
            ctx->pc = 0x43BE2Cu;
            goto label_43be2c;
        }
    }
    ctx->pc = 0x43BE00u;
label_43be00:
    // 0x43be00: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x43be00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_43be04:
    // 0x43be04: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_43be08:
    if (ctx->pc == 0x43BE08u) {
        ctx->pc = 0x43BE08u;
            // 0x43be08: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x43BE0Cu;
        goto label_43be0c;
    }
    ctx->pc = 0x43BE04u;
    {
        const bool branch_taken_0x43be04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x43be04) {
            ctx->pc = 0x43BE08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43BE04u;
            // 0x43be08: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43BE20u;
            goto label_43be20;
        }
    }
    ctx->pc = 0x43BE0Cu;
label_43be0c:
    // 0x43be0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x43be0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_43be10:
    // 0x43be10: 0x10a30049  beq         $a1, $v1, . + 4 + (0x49 << 2)
label_43be14:
    if (ctx->pc == 0x43BE14u) {
        ctx->pc = 0x43BE18u;
        goto label_43be18;
    }
    ctx->pc = 0x43BE10u;
    {
        const bool branch_taken_0x43be10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x43be10) {
            ctx->pc = 0x43BF38u;
            goto label_43bf38;
        }
    }
    ctx->pc = 0x43BE18u;
label_43be18:
    // 0x43be18: 0x10000047  b           . + 4 + (0x47 << 2)
label_43be1c:
    if (ctx->pc == 0x43BE1Cu) {
        ctx->pc = 0x43BE20u;
        goto label_43be20;
    }
    ctx->pc = 0x43BE18u;
    {
        const bool branch_taken_0x43be18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43be18) {
            ctx->pc = 0x43BF38u;
            goto label_43bf38;
        }
    }
    ctx->pc = 0x43BE20u;
label_43be20:
    // 0x43be20: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x43be20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_43be24:
    // 0x43be24: 0x320f809  jalr        $t9
label_43be28:
    if (ctx->pc == 0x43BE28u) {
        ctx->pc = 0x43BE2Cu;
        goto label_43be2c;
    }
    ctx->pc = 0x43BE24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43BE2Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x43BE2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43BE2Cu; }
            if (ctx->pc != 0x43BE2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x43BE2Cu;
label_43be2c:
    // 0x43be2c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x43be2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_43be30:
    // 0x43be30: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x43be30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_43be34:
    // 0x43be34: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x43be34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_43be38:
    // 0x43be38: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x43be38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_43be3c:
    // 0x43be3c: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
label_43be40:
    if (ctx->pc == 0x43BE40u) {
        ctx->pc = 0x43BE40u;
            // 0x43be40: 0x8eb20070  lw          $s2, 0x70($s5) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
        ctx->pc = 0x43BE44u;
        goto label_43be44;
    }
    ctx->pc = 0x43BE3Cu;
    {
        const bool branch_taken_0x43be3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x43BE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43BE3Cu;
            // 0x43be40: 0x8eb20070  lw          $s2, 0x70($s5) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43be3c) {
            ctx->pc = 0x43BF38u;
            goto label_43bf38;
        }
    }
    ctx->pc = 0x43BE44u;
label_43be44:
    // 0x43be44: 0x1240003c  beqz        $s2, . + 4 + (0x3C << 2)
label_43be48:
    if (ctx->pc == 0x43BE48u) {
        ctx->pc = 0x43BE4Cu;
        goto label_43be4c;
    }
    ctx->pc = 0x43BE44u;
    {
        const bool branch_taken_0x43be44 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x43be44) {
            ctx->pc = 0x43BF38u;
            goto label_43bf38;
        }
    }
    ctx->pc = 0x43BE4Cu;
label_43be4c:
    // 0x43be4c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x43be4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43be50:
    // 0x43be50: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x43be50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43be54:
    // 0x43be54: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x43be54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_43be58:
    // 0x43be58: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x43be58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_43be5c:
    // 0x43be5c: 0xc0e3658  jal         func_38D960
label_43be60:
    if (ctx->pc == 0x43BE60u) {
        ctx->pc = 0x43BE60u;
            // 0x43be60: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x43BE64u;
        goto label_43be64;
    }
    ctx->pc = 0x43BE5Cu;
    SET_GPR_U32(ctx, 31, 0x43BE64u);
    ctx->pc = 0x43BE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43BE5Cu;
            // 0x43be60: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BE64u; }
        if (ctx->pc != 0x43BE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BE64u; }
        if (ctx->pc != 0x43BE64u) { return; }
    }
    ctx->pc = 0x43BE64u;
label_43be64:
    // 0x43be64: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x43be64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_43be68:
    // 0x43be68: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x43be68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_43be6c:
    // 0x43be6c: 0xc10f230  jal         func_43C8C0
label_43be70:
    if (ctx->pc == 0x43BE70u) {
        ctx->pc = 0x43BE70u;
            // 0x43be70: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x43BE74u;
        goto label_43be74;
    }
    ctx->pc = 0x43BE6Cu;
    SET_GPR_U32(ctx, 31, 0x43BE74u);
    ctx->pc = 0x43BE70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43BE6Cu;
            // 0x43be70: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43C8C0u;
    if (runtime->hasFunction(0x43C8C0u)) {
        auto targetFn = runtime->lookupFunction(0x43C8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BE74u; }
        if (ctx->pc != 0x43BE74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043C8C0_0x43c8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BE74u; }
        if (ctx->pc != 0x43BE74u) { return; }
    }
    ctx->pc = 0x43BE74u;
label_43be74:
    // 0x43be74: 0x8ea40074  lw          $a0, 0x74($s5)
    ctx->pc = 0x43be74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_43be78:
    // 0x43be78: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x43be78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_43be7c:
    // 0x43be7c: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x43be7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_43be80:
    // 0x43be80: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x43be80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_43be84:
    // 0x43be84: 0x8e2400d0  lw          $a0, 0xD0($s1)
    ctx->pc = 0x43be84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_43be88:
    // 0x43be88: 0x14830027  bne         $a0, $v1, . + 4 + (0x27 << 2)
label_43be8c:
    if (ctx->pc == 0x43BE8Cu) {
        ctx->pc = 0x43BE90u;
        goto label_43be90;
    }
    ctx->pc = 0x43BE88u;
    {
        const bool branch_taken_0x43be88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x43be88) {
            ctx->pc = 0x43BF28u;
            goto label_43bf28;
        }
    }
    ctx->pc = 0x43BE90u;
label_43be90:
    // 0x43be90: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x43be90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_43be94:
    // 0x43be94: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x43be94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_43be98:
    // 0x43be98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x43be98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_43be9c:
    // 0x43be9c: 0xc6000180  lwc1        $f0, 0x180($s0)
    ctx->pc = 0x43be9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43bea0:
    // 0x43bea0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x43bea0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_43bea4:
    // 0x43bea4: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_43bea8:
    if (ctx->pc == 0x43BEA8u) {
        ctx->pc = 0x43BEA8u;
            // 0x43bea8: 0x26030180  addiu       $v1, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->pc = 0x43BEACu;
        goto label_43beac;
    }
    ctx->pc = 0x43BEA4u;
    {
        const bool branch_taken_0x43bea4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x43BEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43BEA4u;
            // 0x43bea8: 0x26030180  addiu       $v1, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bea4) {
            ctx->pc = 0x43BF28u;
            goto label_43bf28;
        }
    }
    ctx->pc = 0x43BEACu;
label_43beac:
    // 0x43beac: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x43beacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43beb0:
    // 0x43beb0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x43beb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_43beb4:
    // 0x43beb4: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_43beb8:
    if (ctx->pc == 0x43BEB8u) {
        ctx->pc = 0x43BEBCu;
        goto label_43bebc;
    }
    ctx->pc = 0x43BEB4u;
    {
        const bool branch_taken_0x43beb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x43beb4) {
            ctx->pc = 0x43BF28u;
            goto label_43bf28;
        }
    }
    ctx->pc = 0x43BEBCu;
label_43bebc:
    // 0x43bebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43bebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43bec0:
    // 0x43bec0: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x43bec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_43bec4:
    // 0x43bec4: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x43bec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_43bec8:
    // 0x43bec8: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x43bec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_43becc:
    // 0x43becc: 0xc088b74  jal         func_222DD0
label_43bed0:
    if (ctx->pc == 0x43BED0u) {
        ctx->pc = 0x43BED0u;
            // 0x43bed0: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x43BED4u;
        goto label_43bed4;
    }
    ctx->pc = 0x43BECCu;
    SET_GPR_U32(ctx, 31, 0x43BED4u);
    ctx->pc = 0x43BED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43BECCu;
            // 0x43bed0: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BED4u; }
        if (ctx->pc != 0x43BED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BED4u; }
        if (ctx->pc != 0x43BED4u) { return; }
    }
    ctx->pc = 0x43BED4u;
label_43bed4:
    // 0x43bed4: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x43bed4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_43bed8:
    // 0x43bed8: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x43bed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_43bedc:
    // 0x43bedc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x43bedcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_43bee0:
    // 0x43bee0: 0x320f809  jalr        $t9
label_43bee4:
    if (ctx->pc == 0x43BEE4u) {
        ctx->pc = 0x43BEE4u;
            // 0x43bee4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x43BEE8u;
        goto label_43bee8;
    }
    ctx->pc = 0x43BEE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43BEE8u);
        ctx->pc = 0x43BEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43BEE0u;
            // 0x43bee4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43BEE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43BEE8u; }
            if (ctx->pc != 0x43BEE8u) { return; }
        }
        }
    }
    ctx->pc = 0x43BEE8u;
label_43bee8:
    // 0x43bee8: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x43bee8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_43beec:
    // 0x43beec: 0xc088b74  jal         func_222DD0
label_43bef0:
    if (ctx->pc == 0x43BEF0u) {
        ctx->pc = 0x43BEF0u;
            // 0x43bef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43BEF4u;
        goto label_43bef4;
    }
    ctx->pc = 0x43BEECu;
    SET_GPR_U32(ctx, 31, 0x43BEF4u);
    ctx->pc = 0x43BEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43BEECu;
            // 0x43bef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BEF4u; }
        if (ctx->pc != 0x43BEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BEF4u; }
        if (ctx->pc != 0x43BEF4u) { return; }
    }
    ctx->pc = 0x43BEF4u;
label_43bef4:
    // 0x43bef4: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x43bef4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_43bef8:
    // 0x43bef8: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x43bef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_43befc:
    // 0x43befc: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x43befcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_43bf00:
    // 0x43bf00: 0x320f809  jalr        $t9
label_43bf04:
    if (ctx->pc == 0x43BF04u) {
        ctx->pc = 0x43BF04u;
            // 0x43bf04: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x43BF08u;
        goto label_43bf08;
    }
    ctx->pc = 0x43BF00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43BF08u);
        ctx->pc = 0x43BF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43BF00u;
            // 0x43bf04: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43BF08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43BF08u; }
            if (ctx->pc != 0x43BF08u) { return; }
        }
        }
    }
    ctx->pc = 0x43BF08u;
label_43bf08:
    // 0x43bf08: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x43bf08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_43bf0c:
    // 0x43bf0c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x43bf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_43bf10:
    // 0x43bf10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x43bf10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43bf14:
    // 0x43bf14: 0xc08914c  jal         func_224530
label_43bf18:
    if (ctx->pc == 0x43BF18u) {
        ctx->pc = 0x43BF18u;
            // 0x43bf18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43BF1Cu;
        goto label_43bf1c;
    }
    ctx->pc = 0x43BF14u;
    SET_GPR_U32(ctx, 31, 0x43BF1Cu);
    ctx->pc = 0x43BF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43BF14u;
            // 0x43bf18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BF1Cu; }
        if (ctx->pc != 0x43BF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43BF1Cu; }
        if (ctx->pc != 0x43BF1Cu) { return; }
    }
    ctx->pc = 0x43BF1Cu;
label_43bf1c:
    // 0x43bf1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x43bf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43bf20:
    // 0x43bf20: 0xae2300d0  sw          $v1, 0xD0($s1)
    ctx->pc = 0x43bf20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 3));
label_43bf24:
    // 0x43bf24: 0x0  nop
    ctx->pc = 0x43bf24u;
    // NOP
label_43bf28:
    // 0x43bf28: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x43bf28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_43bf2c:
    // 0x43bf2c: 0x292182b  sltu        $v1, $s4, $s2
    ctx->pc = 0x43bf2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_43bf30:
    // 0x43bf30: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
label_43bf34:
    if (ctx->pc == 0x43BF34u) {
        ctx->pc = 0x43BF34u;
            // 0x43bf34: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x43BF38u;
        goto label_43bf38;
    }
    ctx->pc = 0x43BF30u;
    {
        const bool branch_taken_0x43bf30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x43BF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43BF30u;
            // 0x43bf34: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bf30) {
            ctx->pc = 0x43BE54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_43be54;
        }
    }
    ctx->pc = 0x43BF38u;
label_43bf38:
    // 0x43bf38: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x43bf38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_43bf3c:
    // 0x43bf3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x43bf3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_43bf40:
    // 0x43bf40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x43bf40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_43bf44:
    // 0x43bf44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x43bf44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_43bf48:
    // 0x43bf48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x43bf48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43bf4c:
    // 0x43bf4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43bf4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43bf50:
    // 0x43bf50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43bf50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43bf54:
    // 0x43bf54: 0x3e00008  jr          $ra
label_43bf58:
    if (ctx->pc == 0x43BF58u) {
        ctx->pc = 0x43BF58u;
            // 0x43bf58: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x43BF5Cu;
        goto label_43bf5c;
    }
    ctx->pc = 0x43BF54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43BF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43BF54u;
            // 0x43bf58: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43BF5Cu;
label_43bf5c:
    // 0x43bf5c: 0x0  nop
    ctx->pc = 0x43bf5cu;
    // NOP
label_43bf60:
    // 0x43bf60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x43bf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_43bf64:
    // 0x43bf64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x43bf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_43bf68:
    // 0x43bf68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x43bf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_43bf6c:
    // 0x43bf6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x43bf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_43bf70:
    // 0x43bf70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43bf70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43bf74:
    // 0x43bf74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43bf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43bf78:
    // 0x43bf78: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x43bf78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_43bf7c:
    // 0x43bf7c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_43bf80:
    if (ctx->pc == 0x43BF80u) {
        ctx->pc = 0x43BF80u;
            // 0x43bf80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43BF84u;
        goto label_43bf84;
    }
    ctx->pc = 0x43BF7Cu;
    {
        const bool branch_taken_0x43bf7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43BF7Cu;
            // 0x43bf80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bf7c) {
            ctx->pc = 0x43BFB8u;
            goto label_43bfb8;
        }
    }
    ctx->pc = 0x43BF84u;
label_43bf84:
    // 0x43bf84: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x43bf84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43bf88:
    // 0x43bf88: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x43bf88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43bf8c:
    // 0x43bf8c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x43bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_43bf90:
    // 0x43bf90: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x43bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_43bf94:
    // 0x43bf94: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x43bf94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_43bf98:
    // 0x43bf98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x43bf98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_43bf9c:
    // 0x43bf9c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x43bf9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_43bfa0:
    // 0x43bfa0: 0x320f809  jalr        $t9
label_43bfa4:
    if (ctx->pc == 0x43BFA4u) {
        ctx->pc = 0x43BFA8u;
        goto label_43bfa8;
    }
    ctx->pc = 0x43BFA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43BFA8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x43BFA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43BFA8u; }
            if (ctx->pc != 0x43BFA8u) { return; }
        }
        }
    }
    ctx->pc = 0x43BFA8u;
label_43bfa8:
    // 0x43bfa8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x43bfa8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_43bfac:
    // 0x43bfac: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x43bfacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_43bfb0:
    // 0x43bfb0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_43bfb4:
    if (ctx->pc == 0x43BFB4u) {
        ctx->pc = 0x43BFB4u;
            // 0x43bfb4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x43BFB8u;
        goto label_43bfb8;
    }
    ctx->pc = 0x43BFB0u;
    {
        const bool branch_taken_0x43bfb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x43BFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43BFB0u;
            // 0x43bfb4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bfb0) {
            ctx->pc = 0x43BF8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_43bf8c;
        }
    }
    ctx->pc = 0x43BFB8u;
label_43bfb8:
    // 0x43bfb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x43bfb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_43bfbc:
    // 0x43bfbc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x43bfbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_43bfc0:
    // 0x43bfc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x43bfc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43bfc4:
    // 0x43bfc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43bfc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_43bfc8:
    // 0x43bfc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43bfc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43bfcc:
    // 0x43bfcc: 0x3e00008  jr          $ra
label_43bfd0:
    if (ctx->pc == 0x43BFD0u) {
        ctx->pc = 0x43BFD0u;
            // 0x43bfd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x43BFD4u;
        goto label_43bfd4;
    }
    ctx->pc = 0x43BFCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43BFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43BFCCu;
            // 0x43bfd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43BFD4u;
label_43bfd4:
    // 0x43bfd4: 0x0  nop
    ctx->pc = 0x43bfd4u;
    // NOP
label_43bfd8:
    // 0x43bfd8: 0x0  nop
    ctx->pc = 0x43bfd8u;
    // NOP
label_43bfdc:
    // 0x43bfdc: 0x0  nop
    ctx->pc = 0x43bfdcu;
    // NOP
}
