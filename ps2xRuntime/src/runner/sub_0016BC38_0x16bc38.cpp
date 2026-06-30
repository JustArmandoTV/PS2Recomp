#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016BC38
// Address: 0x16bc38 - 0x16bd98
void sub_0016BC38_0x16bc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BC38_0x16bc38");
#endif

    switch (ctx->pc) {
        case 0x16bca0u: goto label_16bca0;
        case 0x16bca8u: goto label_16bca8;
        case 0x16bcb0u: goto label_16bcb0;
        case 0x16bcb8u: goto label_16bcb8;
        case 0x16bcc0u: goto label_16bcc0;
        case 0x16bcc8u: goto label_16bcc8;
        case 0x16bcd4u: goto label_16bcd4;
        case 0x16bce4u: goto label_16bce4;
        case 0x16bcf4u: goto label_16bcf4;
        case 0x16bcfcu: goto label_16bcfc;
        case 0x16bd04u: goto label_16bd04;
        case 0x16bd0cu: goto label_16bd0c;
        case 0x16bd14u: goto label_16bd14;
        case 0x16bd1cu: goto label_16bd1c;
        case 0x16bd24u: goto label_16bd24;
        case 0x16bd2cu: goto label_16bd2c;
        case 0x16bd34u: goto label_16bd34;
        case 0x16bd48u: goto label_16bd48;
        case 0x16bd5cu: goto label_16bd5c;
        case 0x16bd64u: goto label_16bd64;
        default: break;
    }

    ctx->pc = 0x16bc38u;

    // 0x16bc38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16bc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16bc3c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16bc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16bc40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16bc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16bc44: 0x24439d70  addiu       $v1, $v0, -0x6290
    ctx->pc = 0x16bc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942064));
    // 0x16bc48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16bc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16bc4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16bc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16bc50: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16bc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16bc54: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16bc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16bc58: 0x5c400009  bgtzl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16BC58u;
    {
        const bool branch_taken_0x16bc58 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x16bc58) {
            ctx->pc = 0x16BC5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16BC58u;
            // 0x16bc5c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16BC80u;
            goto label_16bc80;
        }
    }
    ctx->pc = 0x16BC60u;
    // 0x16bc60: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16bc60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x16bc64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16bc64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bc68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16bc68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16bc6c: 0x24843c18  addiu       $a0, $a0, 0x3C18
    ctx->pc = 0x16bc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15384));
    // 0x16bc70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16bc70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bc74: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16bc74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16bc78: 0x8061fea  j           func_187FA8
    ctx->pc = 0x16BC78u;
    ctx->pc = 0x16BC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BC78u;
            // 0x16bc7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187FA8u;
    if (runtime->hasFunction(0x187FA8u)) {
        auto targetFn = runtime->lookupFunction(0x187FA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187FA8_0x187fa8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16BC80u;
label_16bc80:
    // 0x16bc80: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x16BC80u;
    {
        const bool branch_taken_0x16bc80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BC80u;
            // 0x16bc84: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bc80) {
            ctx->pc = 0x16BD70u;
            goto label_16bd70;
        }
    }
    ctx->pc = 0x16BC88u;
    // 0x16bc88: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x16bc88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x16bc8c: 0x3c120063  lui         $s2, 0x63
    ctx->pc = 0x16bc8cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)99 << 16));
    // 0x16bc90: 0x26104c2c  addiu       $s0, $s0, 0x4C2C
    ctx->pc = 0x16bc90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19500));
    // 0x16bc94: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x16bc94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x16bc98: 0xc05cb76  jal         func_172DD8
    ctx->pc = 0x16BC98u;
    SET_GPR_U32(ctx, 31, 0x16BCA0u);
    ctx->pc = 0x172DD8u;
    if (runtime->hasFunction(0x172DD8u)) {
        auto targetFn = runtime->lookupFunction(0x172DD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BCA0u; }
        if (ctx->pc != 0x16BCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172DD8_0x172dd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BCA0u; }
        if (ctx->pc != 0x16BCA0u) { return; }
    }
    ctx->pc = 0x16BCA0u;
label_16bca0:
    // 0x16bca0: 0xc05ba48  jal         func_16E920
    ctx->pc = 0x16BCA0u;
    SET_GPR_U32(ctx, 31, 0x16BCA8u);
    ctx->pc = 0x16E920u;
    if (runtime->hasFunction(0x16E920u)) {
        auto targetFn = runtime->lookupFunction(0x16E920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BCA8u; }
        if (ctx->pc != 0x16BCA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E920_0x16e920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BCA8u; }
        if (ctx->pc != 0x16BCA8u) { return; }
    }
    ctx->pc = 0x16BCA8u;
label_16bca8:
    // 0x16bca8: 0xc05a034  jal         func_1680D0
    ctx->pc = 0x16BCA8u;
    SET_GPR_U32(ctx, 31, 0x16BCB0u);
    ctx->pc = 0x1680D0u;
    if (runtime->hasFunction(0x1680D0u)) {
        auto targetFn = runtime->lookupFunction(0x1680D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BCB0u; }
        if (ctx->pc != 0x16BCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001680D0_0x1680d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BCB0u; }
        if (ctx->pc != 0x16BCB0u) { return; }
    }
    ctx->pc = 0x16BCB0u;
label_16bcb0:
    // 0x16bcb0: 0xc05c120  jal         func_170480
    ctx->pc = 0x16BCB0u;
    SET_GPR_U32(ctx, 31, 0x16BCB8u);
    ctx->pc = 0x170480u;
    if (runtime->hasFunction(0x170480u)) {
        auto targetFn = runtime->lookupFunction(0x170480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BCB8u; }
        if (ctx->pc != 0x16BCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170480_0x170480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BCB8u; }
        if (ctx->pc != 0x16BCB8u) { return; }
    }
    ctx->pc = 0x16BCB8u;
label_16bcb8:
    // 0x16bcb8: 0xc06037c  jal         func_180DF0
    ctx->pc = 0x16BCB8u;
    SET_GPR_U32(ctx, 31, 0x16BCC0u);
    ctx->pc = 0x180DF0u;
    if (runtime->hasFunction(0x180DF0u)) {
        auto targetFn = runtime->lookupFunction(0x180DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BCC0u; }
        if (ctx->pc != 0x16BCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180DF0_0x180df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BCC0u; }
        if (ctx->pc != 0x16BCC0u) { return; }
    }
    ctx->pc = 0x16BCC0u;
label_16bcc0:
    // 0x16bcc0: 0xc0599d2  jal         func_166748
    ctx->pc = 0x16BCC0u;
    SET_GPR_U32(ctx, 31, 0x16BCC8u);
    ctx->pc = 0x166748u;
    if (runtime->hasFunction(0x166748u)) {
        auto targetFn = runtime->lookupFunction(0x166748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BCC8u; }
        if (ctx->pc != 0x16BCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166748_0x166748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BCC8u; }
        if (ctx->pc != 0x16BCC8u) { return; }
    }
    ctx->pc = 0x16BCC8u;
label_16bcc8:
    // 0x16bcc8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16bcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16bccc: 0xc0620de  jal         func_188378
    ctx->pc = 0x16BCCCu;
    SET_GPR_U32(ctx, 31, 0x16BCD4u);
    ctx->pc = 0x16BCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BCCCu;
            // 0x16bcd0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188378u;
    if (runtime->hasFunction(0x188378u)) {
        auto targetFn = runtime->lookupFunction(0x188378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BCD4u; }
        if (ctx->pc != 0x16BCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188378_0x188378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BCD4u; }
        if (ctx->pc != 0x16BCD4u) { return; }
    }
    ctx->pc = 0x16BCD4u;
label_16bcd4:
    // 0x16bcd4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16bcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16bcd8: 0x8c459d84  lw          $a1, -0x627C($v0)
    ctx->pc = 0x16bcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942084)));
    // 0x16bcdc: 0xc0620de  jal         func_188378
    ctx->pc = 0x16BCDCu;
    SET_GPR_U32(ctx, 31, 0x16BCE4u);
    ctx->pc = 0x16BCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BCDCu;
            // 0x16bce0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188378u;
    if (runtime->hasFunction(0x188378u)) {
        auto targetFn = runtime->lookupFunction(0x188378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BCE4u; }
        if (ctx->pc != 0x16BCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188378_0x188378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BCE4u; }
        if (ctx->pc != 0x16BCE4u) { return; }
    }
    ctx->pc = 0x16BCE4u;
label_16bce4:
    // 0x16bce4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16bce8: 0x8c459d78  lw          $a1, -0x6288($v0)
    ctx->pc = 0x16bce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942072)));
    // 0x16bcec: 0xc0620de  jal         func_188378
    ctx->pc = 0x16BCECu;
    SET_GPR_U32(ctx, 31, 0x16BCF4u);
    ctx->pc = 0x16BCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BCECu;
            // 0x16bcf0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188378u;
    if (runtime->hasFunction(0x188378u)) {
        auto targetFn = runtime->lookupFunction(0x188378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BCF4u; }
        if (ctx->pc != 0x16BCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188378_0x188378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BCF4u; }
        if (ctx->pc != 0x16BCF4u) { return; }
    }
    ctx->pc = 0x16BCF4u;
label_16bcf4:
    // 0x16bcf4: 0xc062284  jal         func_188A10
    ctx->pc = 0x16BCF4u;
    SET_GPR_U32(ctx, 31, 0x16BCFCu);
    ctx->pc = 0x188A10u;
    if (runtime->hasFunction(0x188A10u)) {
        auto targetFn = runtime->lookupFunction(0x188A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BCFCu; }
        if (ctx->pc != 0x16BCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188A10_0x188a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BCFCu; }
        if (ctx->pc != 0x16BCFCu) { return; }
    }
    ctx->pc = 0x16BCFCu;
label_16bcfc:
    // 0x16bcfc: 0xc05bb3a  jal         func_16ECE8
    ctx->pc = 0x16BCFCu;
    SET_GPR_U32(ctx, 31, 0x16BD04u);
    ctx->pc = 0x16ECE8u;
    if (runtime->hasFunction(0x16ECE8u)) {
        auto targetFn = runtime->lookupFunction(0x16ECE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD04u; }
        if (ctx->pc != 0x16BD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016ECE8_0x16ece8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD04u; }
        if (ctx->pc != 0x16BD04u) { return; }
    }
    ctx->pc = 0x16BD04u;
label_16bd04:
    // 0x16bd04: 0xc059f36  jal         func_167CD8
    ctx->pc = 0x16BD04u;
    SET_GPR_U32(ctx, 31, 0x16BD0Cu);
    ctx->pc = 0x167CD8u;
    if (runtime->hasFunction(0x167CD8u)) {
        auto targetFn = runtime->lookupFunction(0x167CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD0Cu; }
        if (ctx->pc != 0x16BD0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167CD8_0x167cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD0Cu; }
        if (ctx->pc != 0x16BD0Cu) { return; }
    }
    ctx->pc = 0x16BD0Cu;
label_16bd0c:
    // 0x16bd0c: 0xc0612c8  jal         func_184B20
    ctx->pc = 0x16BD0Cu;
    SET_GPR_U32(ctx, 31, 0x16BD14u);
    ctx->pc = 0x184B20u;
    if (runtime->hasFunction(0x184B20u)) {
        auto targetFn = runtime->lookupFunction(0x184B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD14u; }
        if (ctx->pc != 0x16BD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184B20_0x184b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD14u; }
        if (ctx->pc != 0x16BD14u) { return; }
    }
    ctx->pc = 0x16BD14u;
label_16bd14:
    // 0x16bd14: 0xc06154e  jal         func_185538
    ctx->pc = 0x16BD14u;
    SET_GPR_U32(ctx, 31, 0x16BD1Cu);
    ctx->pc = 0x185538u;
    if (runtime->hasFunction(0x185538u)) {
        auto targetFn = runtime->lookupFunction(0x185538u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD1Cu; }
        if (ctx->pc != 0x16BD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185538_0x185538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD1Cu; }
        if (ctx->pc != 0x16BD1Cu) { return; }
    }
    ctx->pc = 0x16BD1Cu;
label_16bd1c:
    // 0x16bd1c: 0xc0618da  jal         func_186368
    ctx->pc = 0x16BD1Cu;
    SET_GPR_U32(ctx, 31, 0x16BD24u);
    ctx->pc = 0x186368u;
    if (runtime->hasFunction(0x186368u)) {
        auto targetFn = runtime->lookupFunction(0x186368u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD24u; }
        if (ctx->pc != 0x16BD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186368_0x186368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD24u; }
        if (ctx->pc != 0x16BD24u) { return; }
    }
    ctx->pc = 0x16BD24u;
label_16bd24:
    // 0x16bd24: 0xc0599d8  jal         func_166760
    ctx->pc = 0x16BD24u;
    SET_GPR_U32(ctx, 31, 0x16BD2Cu);
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD2Cu; }
        if (ctx->pc != 0x16BD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166760_0x166760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD2Cu; }
        if (ctx->pc != 0x16BD2Cu) { return; }
    }
    ctx->pc = 0x16BD2Cu;
label_16bd2c:
    // 0x16bd2c: 0xc0599c6  jal         func_166718
    ctx->pc = 0x16BD2Cu;
    SET_GPR_U32(ctx, 31, 0x16BD34u);
    ctx->pc = 0x166718u;
    if (runtime->hasFunction(0x166718u)) {
        auto targetFn = runtime->lookupFunction(0x166718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD34u; }
        if (ctx->pc != 0x16BD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166718_0x166718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD34u; }
        if (ctx->pc != 0x16BD34u) { return; }
    }
    ctx->pc = 0x16BD34u;
label_16bd34:
    // 0x16bd34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16bd38: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16bd38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16bd3c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x16bd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x16bd40: 0x24709d90  addiu       $s0, $v1, -0x6270
    ctx->pc = 0x16bd40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942096));
    // 0x16bd44: 0x0  nop
    ctx->pc = 0x16bd44u;
    // NOP
label_16bd48:
    // 0x16bd48: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x16bd48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16bd4c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x16BD4Cu;
    {
        const bool branch_taken_0x16bd4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bd4c) {
            ctx->pc = 0x16BD50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16BD4Cu;
            // 0x16bd50: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16BD68u;
            goto label_16bd68;
        }
    }
    ctx->pc = 0x16BD54u;
    // 0x16bd54: 0xc061fea  jal         func_187FA8
    ctx->pc = 0x16BD54u;
    SET_GPR_U32(ctx, 31, 0x16BD5Cu);
    ctx->pc = 0x16BD58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BD54u;
            // 0x16bd58: 0x26443c68  addiu       $a0, $s2, 0x3C68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 15464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187FA8u;
    if (runtime->hasFunction(0x187FA8u)) {
        auto targetFn = runtime->lookupFunction(0x187FA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD5Cu; }
        if (ctx->pc != 0x16BD5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187FA8_0x187fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD5Cu; }
        if (ctx->pc != 0x16BD5Cu) { return; }
    }
    ctx->pc = 0x16BD5Cu;
label_16bd5c:
    // 0x16bd5c: 0xc05caf4  jal         func_172BD0
    ctx->pc = 0x16BD5Cu;
    SET_GPR_U32(ctx, 31, 0x16BD64u);
    ctx->pc = 0x16BD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BD5Cu;
            // 0x16bd60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172BD0u;
    if (runtime->hasFunction(0x172BD0u)) {
        auto targetFn = runtime->lookupFunction(0x172BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD64u; }
        if (ctx->pc != 0x16BD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172BD0_0x172bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BD64u; }
        if (ctx->pc != 0x16BD64u) { return; }
    }
    ctx->pc = 0x16BD64u;
label_16bd64:
    // 0x16bd64: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x16bd64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_16bd68:
    // 0x16bd68: 0x621fff7  bgez        $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x16BD68u;
    {
        const bool branch_taken_0x16bd68 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x16BD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BD68u;
            // 0x16bd6c: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bd68) {
            ctx->pc = 0x16BD48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16bd48;
        }
    }
    ctx->pc = 0x16BD70u;
label_16bd70:
    // 0x16bd70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16bd70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bd74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16bd74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16bd78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16bd78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bd7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16bd7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16bd80: 0x3e00008  jr          $ra
    ctx->pc = 0x16BD80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BD80u;
            // 0x16bd84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16BD88u;
    // 0x16bd88: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16bd88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16bd8c: 0x8c629d70  lw          $v0, -0x6290($v1)
    ctx->pc = 0x16bd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942064)));
    // 0x16bd90: 0x3e00008  jr          $ra
    ctx->pc = 0x16BD90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16BD90u;
            // 0x16bd94: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16BD98u;
}
