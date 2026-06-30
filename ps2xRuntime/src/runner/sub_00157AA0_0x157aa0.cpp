#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00157AA0
// Address: 0x157aa0 - 0x157c90
void sub_00157AA0_0x157aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157AA0_0x157aa0");
#endif

    switch (ctx->pc) {
        case 0x157b24u: goto label_157b24;
        case 0x157b38u: goto label_157b38;
        case 0x157bb0u: goto label_157bb0;
        case 0x157bc8u: goto label_157bc8;
        case 0x157bd8u: goto label_157bd8;
        case 0x157c3cu: goto label_157c3c;
        case 0x157c60u: goto label_157c60;
        default: break;
    }

    ctx->pc = 0x157aa0u;

    // 0x157aa0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x157aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x157aa4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x157aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x157aa8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x157aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x157aac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x157aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x157ab0: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x157ab0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ab4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x157ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x157ab8: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x157ab8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157abc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x157abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x157ac0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x157ac0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ac4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x157ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x157ac8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x157ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x157acc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x157accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x157ad0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x157ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x157ad4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x157ad4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ad8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x157ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x157adc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x157adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ae0: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x157ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x157ae4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x157ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ae8: 0x1060005d  beqz        $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x157AE8u;
    {
        const bool branch_taken_0x157ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x157AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157AE8u;
            // 0x157aec: 0xafaa00ac  sw          $t2, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ae8) {
            ctx->pc = 0x157C60u;
            goto label_157c60;
        }
    }
    ctx->pc = 0x157AF0u;
    // 0x157af0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x157af4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x157af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x157af8: 0xac515784  sw          $s1, 0x5784($v0)
    ctx->pc = 0x157af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22404), GPR_U32(ctx, 17));
    // 0x157afc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x157afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157b00: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x157b04: 0xac705790  sw          $s0, 0x5790($v1)
    ctx->pc = 0x157b04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22416), GPR_U32(ctx, 16));
    // 0x157b08: 0xac525794  sw          $s2, 0x5794($v0)
    ctx->pc = 0x157b08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22420), GPR_U32(ctx, 18));
    // 0x157b0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x157b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x157b10: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x157b14: 0xac435760  sw          $v1, 0x5760($v0)
    ctx->pc = 0x157b14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22368), GPR_U32(ctx, 3));
    // 0x157b18: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x157b1c: 0xc053534  jal         func_14D4D0
    ctx->pc = 0x157B1Cu;
    SET_GPR_U32(ctx, 31, 0x157B24u);
    ctx->pc = 0x157B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157B1Cu;
            // 0x157b20: 0xac435768  sw          $v1, 0x5768($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22376), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D4D0u;
    if (runtime->hasFunction(0x14D4D0u)) {
        auto targetFn = runtime->lookupFunction(0x14D4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157B24u; }
        if (ctx->pc != 0x157B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D4D0_0x14d4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157B24u; }
        if (ctx->pc != 0x157B24u) { return; }
    }
    ctx->pc = 0x157B24u;
label_157b24:
    // 0x157b24: 0x5440004f  bnel        $v0, $zero, . + 4 + (0x4F << 2)
    ctx->pc = 0x157B24u;
    {
        const bool branch_taken_0x157b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157b24) {
            ctx->pc = 0x157B28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157B24u;
            // 0x157b28: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157C64u;
            goto label_157c64;
        }
    }
    ctx->pc = 0x157B2Cu;
    // 0x157b2c: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x157b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x157b30: 0xc056b04  jal         func_15AC10
    ctx->pc = 0x157B30u;
    SET_GPR_U32(ctx, 31, 0x157B38u);
    ctx->pc = 0x157B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157B30u;
            // 0x157b34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC10u;
    if (runtime->hasFunction(0x15AC10u)) {
        auto targetFn = runtime->lookupFunction(0x15AC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157B38u; }
        if (ctx->pc != 0x157B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC10_0x15ac10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157B38u; }
        if (ctx->pc != 0x157B38u) { return; }
    }
    ctx->pc = 0x157B38u;
label_157b38:
    // 0x157b38: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x157b3c: 0x8c425840  lw          $v0, 0x5840($v0)
    ctx->pc = 0x157b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22592)));
    // 0x157b40: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x157B40u;
    {
        const bool branch_taken_0x157b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157B40u;
            // 0x157b44: 0xaf8081a4  sw          $zero, -0x7E5C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934948), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b40) {
            ctx->pc = 0x157B9Cu;
            goto label_157b9c;
        }
    }
    ctx->pc = 0x157B48u;
    // 0x157b48: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x157b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x157b4c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x157b50: 0xac435844  sw          $v1, 0x5844($v0)
    ctx->pc = 0x157b50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22596), GPR_U32(ctx, 3));
    // 0x157b54: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x157b58: 0xac435854  sw          $v1, 0x5854($v0)
    ctx->pc = 0x157b58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22612), GPR_U32(ctx, 3));
    // 0x157b5c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x157b60: 0xac435858  sw          $v1, 0x5858($v0)
    ctx->pc = 0x157b60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22616), GPR_U32(ctx, 3));
    // 0x157b64: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x157b68: 0xac43585c  sw          $v1, 0x585C($v0)
    ctx->pc = 0x157b68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22620), GPR_U32(ctx, 3));
    // 0x157b6c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x157b70: 0xac435860  sw          $v1, 0x5860($v0)
    ctx->pc = 0x157b70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22624), GPR_U32(ctx, 3));
    // 0x157b74: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x157b78: 0xac43584c  sw          $v1, 0x584C($v0)
    ctx->pc = 0x157b78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22604), GPR_U32(ctx, 3));
    // 0x157b7c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x157b80: 0xac435850  sw          $v1, 0x5850($v0)
    ctx->pc = 0x157b80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22608), GPR_U32(ctx, 3));
    // 0x157b84: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x157b88: 0xac43586c  sw          $v1, 0x586C($v0)
    ctx->pc = 0x157b88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22636), GPR_U32(ctx, 3));
    // 0x157b8c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x157b90: 0xac435870  sw          $v1, 0x5870($v0)
    ctx->pc = 0x157b90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22640), GPR_U32(ctx, 3));
    // 0x157b94: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x157b98: 0xac405874  sw          $zero, 0x5874($v0)
    ctx->pc = 0x157b98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22644), GPR_U32(ctx, 0));
label_157b9c:
    // 0x157b9c: 0x32420100  andi        $v0, $s2, 0x100
    ctx->pc = 0x157b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)256);
    // 0x157ba0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x157BA0u;
    {
        const bool branch_taken_0x157ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157ba0) {
            ctx->pc = 0x157BA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157BA0u;
            // 0x157ba4: 0x32421000  andi        $v0, $s2, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
            ctx->pc = 0x157BB8u;
            goto label_157bb8;
        }
    }
    ctx->pc = 0x157BA8u;
    // 0x157ba8: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x157BA8u;
    SET_GPR_U32(ctx, 31, 0x157BB0u);
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157BB0u; }
        if (ctx->pc != 0x157BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001398E0_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157BB0u; }
        if (ctx->pc != 0x157BB0u) { return; }
    }
    ctx->pc = 0x157BB0u;
label_157bb0:
    // 0x157bb0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x157BB0u;
    {
        const bool branch_taken_0x157bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157BB0u;
            // 0x157bb4: 0x8e340038  lw          $s4, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157bb0) {
            ctx->pc = 0x157BCCu;
            goto label_157bcc;
        }
    }
    ctx->pc = 0x157BB8u;
label_157bb8:
    // 0x157bb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157BB8u;
    {
        const bool branch_taken_0x157bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157bb8) {
            ctx->pc = 0x157BC8u;
            goto label_157bc8;
        }
    }
    ctx->pc = 0x157BC0u;
    // 0x157bc0: 0xc04e5c4  jal         func_139710
    ctx->pc = 0x157BC0u;
    SET_GPR_U32(ctx, 31, 0x157BC8u);
    ctx->pc = 0x139710u;
    if (runtime->hasFunction(0x139710u)) {
        auto targetFn = runtime->lookupFunction(0x139710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157BC8u; }
        if (ctx->pc != 0x157BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139710_0x139710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157BC8u; }
        if (ctx->pc != 0x157BC8u) { return; }
    }
    ctx->pc = 0x157BC8u;
label_157bc8:
    // 0x157bc8: 0x8e340038  lw          $s4, 0x38($s1)
    ctx->pc = 0x157bc8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_157bcc:
    // 0x157bcc: 0x32130007  andi        $s3, $s0, 0x7
    ctx->pc = 0x157bccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x157bd0: 0x8e35003c  lw          $s5, 0x3C($s1)
    ctx->pc = 0x157bd0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x157bd4: 0x32120300  andi        $s2, $s0, 0x300
    ctx->pc = 0x157bd4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)768);
label_157bd8:
    // 0x157bd8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x157bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x157bdc: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x157BDCu;
    {
        const bool branch_taken_0x157bdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x157bdc) {
            ctx->pc = 0x157C00u;
            goto label_157c00;
        }
    }
    ctx->pc = 0x157BE4u;
    // 0x157be4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x157be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x157be8: 0x731024  and         $v0, $v1, $s3
    ctx->pc = 0x157be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x157bec: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x157BECu;
    {
        const bool branch_taken_0x157bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157bec) {
            ctx->pc = 0x157C40u;
            goto label_157c40;
        }
    }
    ctx->pc = 0x157BF4u;
    // 0x157bf4: 0x721024  and         $v0, $v1, $s2
    ctx->pc = 0x157bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x157bf8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x157BF8u;
    {
        const bool branch_taken_0x157bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157bf8) {
            ctx->pc = 0x157C40u;
            goto label_157c40;
        }
    }
    ctx->pc = 0x157C00u;
label_157c00:
    // 0x157c00: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x157c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x157c04: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x157c08: 0x741823  subu        $v1, $v1, $s4
    ctx->pc = 0x157c08u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x157c0c: 0xac435778  sw          $v1, 0x5778($v0)
    ctx->pc = 0x157c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22392), GPR_U32(ctx, 3));
    // 0x157c10: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x157c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x157c14: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x157c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x157c18: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x157C18u;
    {
        const bool branch_taken_0x157c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157c18) {
            ctx->pc = 0x157C40u;
            goto label_157c40;
        }
    }
    ctx->pc = 0x157C20u;
    // 0x157c20: 0x8fa900ac  lw          $t1, 0xAC($sp)
    ctx->pc = 0x157c20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x157c24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x157c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157c28: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x157c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157c2c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x157c2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157c30: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x157c30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157c34: 0xc055d9c  jal         func_157670
    ctx->pc = 0x157C34u;
    SET_GPR_U32(ctx, 31, 0x157C3Cu);
    ctx->pc = 0x157C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157C34u;
            // 0x157c38: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157670u;
    if (runtime->hasFunction(0x157670u)) {
        auto targetFn = runtime->lookupFunction(0x157670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157C3Cu; }
        if (ctx->pc != 0x157C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157670_0x157670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157C3Cu; }
        if (ctx->pc != 0x157C3Cu) { return; }
    }
    ctx->pc = 0x157C3Cu;
label_157c3c:
    // 0x157c3c: 0x0  nop
    ctx->pc = 0x157c3cu;
    // NOP
label_157c40:
    // 0x157c40: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x157c40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x157c44: 0x1680ffe4  bnez        $s4, . + 4 + (-0x1C << 2)
    ctx->pc = 0x157C44u;
    {
        const bool branch_taken_0x157c44 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x157C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157C44u;
            // 0x157c48: 0x26b50014  addiu       $s5, $s5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c44) {
            ctx->pc = 0x157BD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_157bd8;
        }
    }
    ctx->pc = 0x157C4Cu;
    // 0x157c4c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x157c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x157c50: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x157c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x157c54: 0xac605808  sw          $zero, 0x5808($v1)
    ctx->pc = 0x157c54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22536), GPR_U32(ctx, 0));
    // 0x157c58: 0xc0500bc  jal         func_1402F0
    ctx->pc = 0x157C58u;
    SET_GPR_U32(ctx, 31, 0x157C60u);
    ctx->pc = 0x157C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157C58u;
            // 0x157c5c: 0xac405814  sw          $zero, 0x5814($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22548), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1402F0u;
    if (runtime->hasFunction(0x1402F0u)) {
        auto targetFn = runtime->lookupFunction(0x1402F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157C60u; }
        if (ctx->pc != 0x157C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001402F0_0x1402f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157C60u; }
        if (ctx->pc != 0x157C60u) { return; }
    }
    ctx->pc = 0x157C60u;
label_157c60:
    // 0x157c60: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x157c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_157c64:
    // 0x157c64: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x157c64u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x157c68: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x157c68u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x157c6c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x157c6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x157c70: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x157c70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x157c74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x157c74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x157c78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x157c78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x157c7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x157c7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x157c80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x157c80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157c84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x157c84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157c88: 0x3e00008  jr          $ra
    ctx->pc = 0x157C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157C88u;
            // 0x157c8c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x157C90u;
}
