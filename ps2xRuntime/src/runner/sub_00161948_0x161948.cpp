#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00161948
// Address: 0x161948 - 0x161b70
void sub_00161948_0x161948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161948_0x161948");
#endif

    switch (ctx->pc) {
        case 0x161948u: goto label_161948;
        case 0x16194cu: goto label_16194c;
        case 0x161950u: goto label_161950;
        case 0x161954u: goto label_161954;
        case 0x161958u: goto label_161958;
        case 0x16195cu: goto label_16195c;
        case 0x161960u: goto label_161960;
        case 0x161964u: goto label_161964;
        case 0x161968u: goto label_161968;
        case 0x16196cu: goto label_16196c;
        case 0x161970u: goto label_161970;
        case 0x161974u: goto label_161974;
        case 0x161978u: goto label_161978;
        case 0x16197cu: goto label_16197c;
        case 0x161980u: goto label_161980;
        case 0x161984u: goto label_161984;
        case 0x161988u: goto label_161988;
        case 0x16198cu: goto label_16198c;
        case 0x161990u: goto label_161990;
        case 0x161994u: goto label_161994;
        case 0x161998u: goto label_161998;
        case 0x16199cu: goto label_16199c;
        case 0x1619a0u: goto label_1619a0;
        case 0x1619a4u: goto label_1619a4;
        case 0x1619a8u: goto label_1619a8;
        case 0x1619acu: goto label_1619ac;
        case 0x1619b0u: goto label_1619b0;
        case 0x1619b4u: goto label_1619b4;
        case 0x1619b8u: goto label_1619b8;
        case 0x1619bcu: goto label_1619bc;
        case 0x1619c0u: goto label_1619c0;
        case 0x1619c4u: goto label_1619c4;
        case 0x1619c8u: goto label_1619c8;
        case 0x1619ccu: goto label_1619cc;
        case 0x1619d0u: goto label_1619d0;
        case 0x1619d4u: goto label_1619d4;
        case 0x1619d8u: goto label_1619d8;
        case 0x1619dcu: goto label_1619dc;
        case 0x1619e0u: goto label_1619e0;
        case 0x1619e4u: goto label_1619e4;
        case 0x1619e8u: goto label_1619e8;
        case 0x1619ecu: goto label_1619ec;
        case 0x1619f0u: goto label_1619f0;
        case 0x1619f4u: goto label_1619f4;
        case 0x1619f8u: goto label_1619f8;
        case 0x1619fcu: goto label_1619fc;
        case 0x161a00u: goto label_161a00;
        case 0x161a04u: goto label_161a04;
        case 0x161a08u: goto label_161a08;
        case 0x161a0cu: goto label_161a0c;
        case 0x161a10u: goto label_161a10;
        case 0x161a14u: goto label_161a14;
        case 0x161a18u: goto label_161a18;
        case 0x161a1cu: goto label_161a1c;
        case 0x161a20u: goto label_161a20;
        case 0x161a24u: goto label_161a24;
        case 0x161a28u: goto label_161a28;
        case 0x161a2cu: goto label_161a2c;
        case 0x161a30u: goto label_161a30;
        case 0x161a34u: goto label_161a34;
        case 0x161a38u: goto label_161a38;
        case 0x161a3cu: goto label_161a3c;
        case 0x161a40u: goto label_161a40;
        case 0x161a44u: goto label_161a44;
        case 0x161a48u: goto label_161a48;
        case 0x161a4cu: goto label_161a4c;
        case 0x161a50u: goto label_161a50;
        case 0x161a54u: goto label_161a54;
        case 0x161a58u: goto label_161a58;
        case 0x161a5cu: goto label_161a5c;
        case 0x161a60u: goto label_161a60;
        case 0x161a64u: goto label_161a64;
        case 0x161a68u: goto label_161a68;
        case 0x161a6cu: goto label_161a6c;
        case 0x161a70u: goto label_161a70;
        case 0x161a74u: goto label_161a74;
        case 0x161a78u: goto label_161a78;
        case 0x161a7cu: goto label_161a7c;
        case 0x161a80u: goto label_161a80;
        case 0x161a84u: goto label_161a84;
        case 0x161a88u: goto label_161a88;
        case 0x161a8cu: goto label_161a8c;
        case 0x161a90u: goto label_161a90;
        case 0x161a94u: goto label_161a94;
        case 0x161a98u: goto label_161a98;
        case 0x161a9cu: goto label_161a9c;
        case 0x161aa0u: goto label_161aa0;
        case 0x161aa4u: goto label_161aa4;
        case 0x161aa8u: goto label_161aa8;
        case 0x161aacu: goto label_161aac;
        case 0x161ab0u: goto label_161ab0;
        case 0x161ab4u: goto label_161ab4;
        case 0x161ab8u: goto label_161ab8;
        case 0x161abcu: goto label_161abc;
        case 0x161ac0u: goto label_161ac0;
        case 0x161ac4u: goto label_161ac4;
        case 0x161ac8u: goto label_161ac8;
        case 0x161accu: goto label_161acc;
        case 0x161ad0u: goto label_161ad0;
        case 0x161ad4u: goto label_161ad4;
        case 0x161ad8u: goto label_161ad8;
        case 0x161adcu: goto label_161adc;
        case 0x161ae0u: goto label_161ae0;
        case 0x161ae4u: goto label_161ae4;
        case 0x161ae8u: goto label_161ae8;
        case 0x161aecu: goto label_161aec;
        case 0x161af0u: goto label_161af0;
        case 0x161af4u: goto label_161af4;
        case 0x161af8u: goto label_161af8;
        case 0x161afcu: goto label_161afc;
        case 0x161b00u: goto label_161b00;
        case 0x161b04u: goto label_161b04;
        case 0x161b08u: goto label_161b08;
        case 0x161b0cu: goto label_161b0c;
        case 0x161b10u: goto label_161b10;
        case 0x161b14u: goto label_161b14;
        case 0x161b18u: goto label_161b18;
        case 0x161b1cu: goto label_161b1c;
        case 0x161b20u: goto label_161b20;
        case 0x161b24u: goto label_161b24;
        case 0x161b28u: goto label_161b28;
        case 0x161b2cu: goto label_161b2c;
        case 0x161b30u: goto label_161b30;
        case 0x161b34u: goto label_161b34;
        case 0x161b38u: goto label_161b38;
        case 0x161b3cu: goto label_161b3c;
        case 0x161b40u: goto label_161b40;
        case 0x161b44u: goto label_161b44;
        case 0x161b48u: goto label_161b48;
        case 0x161b4cu: goto label_161b4c;
        case 0x161b50u: goto label_161b50;
        case 0x161b54u: goto label_161b54;
        case 0x161b58u: goto label_161b58;
        case 0x161b5cu: goto label_161b5c;
        case 0x161b60u: goto label_161b60;
        case 0x161b64u: goto label_161b64;
        case 0x161b68u: goto label_161b68;
        case 0x161b6cu: goto label_161b6c;
        default: break;
    }

    ctx->pc = 0x161948u;

label_161948:
    // 0x161948: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x161948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_16194c:
    // 0x16194c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16194cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161950:
    // 0x161950: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x161950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_161954:
    // 0x161954: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x161954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_161958:
    // 0x161958: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x161958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_16195c:
    // 0x16195c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16195cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_161960:
    // 0x161960: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x161960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_161964:
    // 0x161964: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_161968:
    if (ctx->pc == 0x161968u) {
        ctx->pc = 0x161968u;
            // 0x161968: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->pc = 0x16196Cu;
        goto label_16196c;
    }
    ctx->pc = 0x161964u;
    {
        const bool branch_taken_0x161964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x161964) {
            ctx->pc = 0x161968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x161964u;
            // 0x161968: 0x8e220024  lw          $v0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x161978u;
            goto label_161978;
        }
    }
    ctx->pc = 0x16196Cu;
label_16196c:
    // 0x16196c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16196cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_161970:
    // 0x161970: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x161970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_161974:
    // 0x161974: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x161974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_161978:
    // 0x161978: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
label_16197c:
    if (ctx->pc == 0x16197Cu) {
        ctx->pc = 0x16197Cu;
            // 0x16197c: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x161980u;
        goto label_161980;
    }
    ctx->pc = 0x161978u;
    {
        const bool branch_taken_0x161978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x161978) {
            ctx->pc = 0x16197Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x161978u;
            // 0x16197c: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1619A8u;
            goto label_1619a8;
        }
    }
    ctx->pc = 0x161980u;
label_161980:
    // 0x161980: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x161980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_161984:
    // 0x161984: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x161984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_161988:
    // 0x161988: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x161988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_16198c:
    // 0x16198c: 0x40f809  jalr        $v0
label_161990:
    if (ctx->pc == 0x161990u) {
        ctx->pc = 0x161990u;
            // 0x161990: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x161994u;
        goto label_161994;
    }
    ctx->pc = 0x16198Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161994u);
        ctx->pc = 0x161990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16198Cu;
            // 0x161990: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x161994u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161994u; }
            if (ctx->pc != 0x161994u) { return; }
        }
        }
    }
    ctx->pc = 0x161994u;
label_161994:
    // 0x161994: 0x5c400004  bgtzl       $v0, . + 4 + (0x4 << 2)
label_161998:
    if (ctx->pc == 0x161998u) {
        ctx->pc = 0x161998u;
            // 0x161998: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x16199Cu;
        goto label_16199c;
    }
    ctx->pc = 0x161994u;
    {
        const bool branch_taken_0x161994 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x161994) {
            ctx->pc = 0x161998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x161994u;
            // 0x161998: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1619A8u;
            goto label_1619a8;
        }
    }
    ctx->pc = 0x16199Cu;
label_16199c:
    // 0x16199c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x16199cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1619a0:
    // 0x1619a0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1619a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1619a4:
    // 0x1619a4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1619a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1619a8:
    // 0x1619a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1619a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1619ac:
    // 0x1619ac: 0x1462006b  bne         $v1, $v0, . + 4 + (0x6B << 2)
label_1619b0:
    if (ctx->pc == 0x1619B0u) {
        ctx->pc = 0x1619B0u;
            // 0x1619b0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1619B4u;
        goto label_1619b4;
    }
    ctx->pc = 0x1619ACu;
    {
        const bool branch_taken_0x1619ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1619B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1619ACu;
            // 0x1619b0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1619ac) {
            ctx->pc = 0x161B5Cu;
            goto label_161b5c;
        }
    }
    ctx->pc = 0x1619B4u;
label_1619b4:
    // 0x1619b4: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x1619b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1619b8:
    // 0x1619b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1619b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1619bc:
    // 0x1619bc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1619bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1619c0:
    // 0x1619c0: 0x40f809  jalr        $v0
label_1619c4:
    if (ctx->pc == 0x1619C4u) {
        ctx->pc = 0x1619C4u;
            // 0x1619c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1619C8u;
        goto label_1619c8;
    }
    ctx->pc = 0x1619C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1619C8u);
        ctx->pc = 0x1619C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1619C0u;
            // 0x1619c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1619C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1619C8u; }
            if (ctx->pc != 0x1619C8u) { return; }
        }
        }
    }
    ctx->pc = 0x1619C8u;
label_1619c8:
    // 0x1619c8: 0x28421800  slti        $v0, $v0, 0x1800
    ctx->pc = 0x1619c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6144) ? 1 : 0);
label_1619cc:
    // 0x1619cc: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
label_1619d0:
    if (ctx->pc == 0x1619D0u) {
        ctx->pc = 0x1619D0u;
            // 0x1619d0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1619D4u;
        goto label_1619d4;
    }
    ctx->pc = 0x1619CCu;
    {
        const bool branch_taken_0x1619cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1619D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1619CCu;
            // 0x1619d0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1619cc) {
            ctx->pc = 0x161B5Cu;
            goto label_161b5c;
        }
    }
    ctx->pc = 0x1619D4u;
label_1619d4:
    // 0x1619d4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1619d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1619d8:
    // 0x1619d8: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1619d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1619dc:
    // 0x1619dc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1619dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1619e0:
    // 0x1619e0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1619e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1619e4:
    // 0x1619e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1619e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1619e8:
    // 0x1619e8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1619e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1619ec:
    // 0x1619ec: 0x40f809  jalr        $v0
label_1619f0:
    if (ctx->pc == 0x1619F0u) {
        ctx->pc = 0x1619F0u;
            // 0x1619f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1619F4u;
        goto label_1619f4;
    }
    ctx->pc = 0x1619ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1619F4u);
        ctx->pc = 0x1619F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1619ECu;
            // 0x1619f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1619F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1619F4u; }
            if (ctx->pc != 0x1619F4u) { return; }
        }
        }
    }
    ctx->pc = 0x1619F4u;
label_1619f4:
    // 0x1619f4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1619f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1619f8:
    // 0x1619f8: 0xc0586dc  jal         func_161B70
label_1619fc:
    if (ctx->pc == 0x1619FCu) {
        ctx->pc = 0x1619FCu;
            // 0x1619fc: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x161A00u;
        goto label_161a00;
    }
    ctx->pc = 0x1619F8u;
    SET_GPR_U32(ctx, 31, 0x161A00u);
    ctx->pc = 0x1619FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1619F8u;
            // 0x1619fc: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161B70u;
    if (runtime->hasFunction(0x161B70u)) {
        auto targetFn = runtime->lookupFunction(0x161B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161A00u; }
        if (ctx->pc != 0x161A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161B70_0x161b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161A00u; }
        if (ctx->pc != 0x161A00u) { return; }
    }
    ctx->pc = 0x161A00u;
label_161a00:
    // 0x161a00: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x161a00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_161a04:
    // 0x161a04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x161a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_161a08:
    // 0x161a08: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x161a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_161a0c:
    // 0x161a0c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x161a0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_161a10:
    // 0x161a10: 0xc061c20  jal         func_187080
label_161a14:
    if (ctx->pc == 0x161A14u) {
        ctx->pc = 0x161A14u;
            // 0x161a14: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x161A18u;
        goto label_161a18;
    }
    ctx->pc = 0x161A10u;
    SET_GPR_U32(ctx, 31, 0x161A18u);
    ctx->pc = 0x161A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161A10u;
            // 0x161a14: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187080u;
    if (runtime->hasFunction(0x187080u)) {
        auto targetFn = runtime->lookupFunction(0x187080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161A18u; }
        if (ctx->pc != 0x161A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187080_0x187080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161A18u; }
        if (ctx->pc != 0x161A18u) { return; }
    }
    ctx->pc = 0x161A18u;
label_161a18:
    // 0x161a18: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x161a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_161a1c:
    // 0x161a1c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x161a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_161a20:
    // 0x161a20: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x161a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_161a24:
    // 0x161a24: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x161a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_161a28:
    // 0x161a28: 0x40f809  jalr        $v0
label_161a2c:
    if (ctx->pc == 0x161A2Cu) {
        ctx->pc = 0x161A2Cu;
            // 0x161a2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x161A30u;
        goto label_161a30;
    }
    ctx->pc = 0x161A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161A30u);
        ctx->pc = 0x161A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161A28u;
            // 0x161a2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x161A30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161A30u; }
            if (ctx->pc != 0x161A30u) { return; }
        }
        }
    }
    ctx->pc = 0x161A30u;
label_161a30:
    // 0x161a30: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x161a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_161a34:
    // 0x161a34: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x161a34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_161a38:
    // 0x161a38: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x161a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_161a3c:
    // 0x161a3c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x161a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_161a40:
    // 0x161a40: 0x40f809  jalr        $v0
label_161a44:
    if (ctx->pc == 0x161A44u) {
        ctx->pc = 0x161A44u;
            // 0x161a44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x161A48u;
        goto label_161a48;
    }
    ctx->pc = 0x161A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161A48u);
        ctx->pc = 0x161A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161A40u;
            // 0x161a44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x161A48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161A48u; }
            if (ctx->pc != 0x161A48u) { return; }
        }
        }
    }
    ctx->pc = 0x161A48u;
label_161a48:
    // 0x161a48: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x161a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_161a4c:
    // 0x161a4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x161a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161a50:
    // 0x161a50: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x161a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_161a54:
    // 0x161a54: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x161a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_161a58:
    // 0x161a58: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x161a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_161a5c:
    // 0x161a5c: 0x60f809  jalr        $v1
label_161a60:
    if (ctx->pc == 0x161A60u) {
        ctx->pc = 0x161A60u;
            // 0x161a60: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x161A64u;
        goto label_161a64;
    }
    ctx->pc = 0x161A5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x161A64u);
        ctx->pc = 0x161A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161A5Cu;
            // 0x161a60: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x161A64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161A64u; }
            if (ctx->pc != 0x161A64u) { return; }
        }
        }
    }
    ctx->pc = 0x161A64u;
label_161a64:
    // 0x161a64: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x161a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_161a68:
    // 0x161a68: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x161a68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_161a6c:
    // 0x161a6c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_161a70:
    if (ctx->pc == 0x161A70u) {
        ctx->pc = 0x161A70u;
            // 0x161a70: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x161A74u;
        goto label_161a74;
    }
    ctx->pc = 0x161A6Cu;
    {
        const bool branch_taken_0x161a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161A6Cu;
            // 0x161a70: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161a6c) {
            ctx->pc = 0x161A98u;
            goto label_161a98;
        }
    }
    ctx->pc = 0x161A74u;
label_161a74:
    // 0x161a74: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x161a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_161a78:
    // 0x161a78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x161a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161a7c:
    // 0x161a7c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x161a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_161a80:
    // 0x161a80: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x161a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_161a84:
    // 0x161a84: 0x40f809  jalr        $v0
label_161a88:
    if (ctx->pc == 0x161A88u) {
        ctx->pc = 0x161A88u;
            // 0x161a88: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x161A8Cu;
        goto label_161a8c;
    }
    ctx->pc = 0x161A84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161A8Cu);
        ctx->pc = 0x161A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161A84u;
            // 0x161a88: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x161A8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161A8Cu; }
            if (ctx->pc != 0x161A8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x161A8Cu;
label_161a8c:
    // 0x161a8c: 0x10000033  b           . + 4 + (0x33 << 2)
label_161a90:
    if (ctx->pc == 0x161A90u) {
        ctx->pc = 0x161A90u;
            // 0x161a90: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x161A94u;
        goto label_161a94;
    }
    ctx->pc = 0x161A8Cu;
    {
        const bool branch_taken_0x161a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161A8Cu;
            // 0x161a90: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161a8c) {
            ctx->pc = 0x161B5Cu;
            goto label_161b5c;
        }
    }
    ctx->pc = 0x161A94u;
label_161a94:
    // 0x161a94: 0x0  nop
    ctx->pc = 0x161a94u;
    // NOP
label_161a98:
    // 0x161a98: 0xc0586f6  jal         func_161BD8
label_161a9c:
    if (ctx->pc == 0x161A9Cu) {
        ctx->pc = 0x161A9Cu;
            // 0x161a9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x161AA0u;
        goto label_161aa0;
    }
    ctx->pc = 0x161A98u;
    SET_GPR_U32(ctx, 31, 0x161AA0u);
    ctx->pc = 0x161A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161A98u;
            // 0x161a9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161BD8u;
    if (runtime->hasFunction(0x161BD8u)) {
        auto targetFn = runtime->lookupFunction(0x161BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161AA0u; }
        if (ctx->pc != 0x161AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161BD8_0x161bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161AA0u; }
        if (ctx->pc != 0x161AA0u) { return; }
    }
    ctx->pc = 0x161AA0u;
label_161aa0:
    // 0x161aa0: 0x4400024  bltz        $v0, . + 4 + (0x24 << 2)
label_161aa4:
    if (ctx->pc == 0x161AA4u) {
        ctx->pc = 0x161AA4u;
            // 0x161aa4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x161AA8u;
        goto label_161aa8;
    }
    ctx->pc = 0x161AA0u;
    {
        const bool branch_taken_0x161aa0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x161AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161AA0u;
            // 0x161aa4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161aa0) {
            ctx->pc = 0x161B34u;
            goto label_161b34;
        }
    }
    ctx->pc = 0x161AA8u;
label_161aa8:
    // 0x161aa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_161aac:
    // 0x161aac: 0xc05873e  jal         func_161CF8
label_161ab0:
    if (ctx->pc == 0x161AB0u) {
        ctx->pc = 0x161AB0u;
            // 0x161ab0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x161AB4u;
        goto label_161ab4;
    }
    ctx->pc = 0x161AACu;
    SET_GPR_U32(ctx, 31, 0x161AB4u);
    ctx->pc = 0x161AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161AACu;
            // 0x161ab0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161CF8u;
    if (runtime->hasFunction(0x161CF8u)) {
        auto targetFn = runtime->lookupFunction(0x161CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161AB4u; }
        if (ctx->pc != 0x161AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161CF8_0x161cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161AB4u; }
        if (ctx->pc != 0x161AB4u) { return; }
    }
    ctx->pc = 0x161AB4u;
label_161ab4:
    // 0x161ab4: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
label_161ab8:
    if (ctx->pc == 0x161AB8u) {
        ctx->pc = 0x161AB8u;
            // 0x161ab8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x161ABCu;
        goto label_161abc;
    }
    ctx->pc = 0x161AB4u;
    {
        const bool branch_taken_0x161ab4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x161AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161AB4u;
            // 0x161ab8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161ab4) {
            ctx->pc = 0x161B34u;
            goto label_161b34;
        }
    }
    ctx->pc = 0x161ABCu;
label_161abc:
    // 0x161abc: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x161abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_161ac0:
    // 0x161ac0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x161ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_161ac4:
    // 0x161ac4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x161ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_161ac8:
    // 0x161ac8: 0x40f809  jalr        $v0
label_161acc:
    if (ctx->pc == 0x161ACCu) {
        ctx->pc = 0x161ACCu;
            // 0x161acc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x161AD0u;
        goto label_161ad0;
    }
    ctx->pc = 0x161AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161AD0u);
        ctx->pc = 0x161ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161AC8u;
            // 0x161acc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x161AD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161AD0u; }
            if (ctx->pc != 0x161AD0u) { return; }
        }
        }
    }
    ctx->pc = 0x161AD0u;
label_161ad0:
    // 0x161ad0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x161ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_161ad4:
    // 0x161ad4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x161ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_161ad8:
    // 0x161ad8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x161ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_161adc:
    // 0x161adc: 0x40f809  jalr        $v0
label_161ae0:
    if (ctx->pc == 0x161AE0u) {
        ctx->pc = 0x161AE0u;
            // 0x161ae0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x161AE4u;
        goto label_161ae4;
    }
    ctx->pc = 0x161ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161AE4u);
        ctx->pc = 0x161AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161ADCu;
            // 0x161ae0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x161AE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161AE4u; }
            if (ctx->pc != 0x161AE4u) { return; }
        }
        }
    }
    ctx->pc = 0x161AE4u;
label_161ae4:
    // 0x161ae4: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x161ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_161ae8:
    // 0x161ae8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x161ae8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_161aec:
    // 0x161aec: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_161af0:
    if (ctx->pc == 0x161AF0u) {
        ctx->pc = 0x161AF0u;
            // 0x161af0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x161AF4u;
        goto label_161af4;
    }
    ctx->pc = 0x161AECu;
    {
        const bool branch_taken_0x161aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161AECu;
            // 0x161af0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161aec) {
            ctx->pc = 0x161B5Cu;
            goto label_161b5c;
        }
    }
    ctx->pc = 0x161AF4u;
label_161af4:
    // 0x161af4: 0xc058754  jal         func_161D50
label_161af8:
    if (ctx->pc == 0x161AF8u) {
        ctx->pc = 0x161AF8u;
            // 0x161af8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x161AFCu;
        goto label_161afc;
    }
    ctx->pc = 0x161AF4u;
    SET_GPR_U32(ctx, 31, 0x161AFCu);
    ctx->pc = 0x161AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161AF4u;
            // 0x161af8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161D50u;
    if (runtime->hasFunction(0x161D50u)) {
        auto targetFn = runtime->lookupFunction(0x161D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161AFCu; }
        if (ctx->pc != 0x161AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161D50_0x161d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161AFCu; }
        if (ctx->pc != 0x161AFCu) { return; }
    }
    ctx->pc = 0x161AFCu;
label_161afc:
    // 0x161afc: 0xc058768  jal         func_161DA0
label_161b00:
    if (ctx->pc == 0x161B00u) {
        ctx->pc = 0x161B00u;
            // 0x161b00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x161B04u;
        goto label_161b04;
    }
    ctx->pc = 0x161AFCu;
    SET_GPR_U32(ctx, 31, 0x161B04u);
    ctx->pc = 0x161B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161AFCu;
            // 0x161b00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161DA0u;
    if (runtime->hasFunction(0x161DA0u)) {
        auto targetFn = runtime->lookupFunction(0x161DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161B04u; }
        if (ctx->pc != 0x161B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161DA0_0x161da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161B04u; }
        if (ctx->pc != 0x161B04u) { return; }
    }
    ctx->pc = 0x161B04u;
label_161b04:
    // 0x161b04: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
label_161b08:
    if (ctx->pc == 0x161B08u) {
        ctx->pc = 0x161B08u;
            // 0x161b08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x161B0Cu;
        goto label_161b0c;
    }
    ctx->pc = 0x161B04u;
    {
        const bool branch_taken_0x161b04 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x161B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161B04u;
            // 0x161b08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b04) {
            ctx->pc = 0x161B34u;
            goto label_161b34;
        }
    }
    ctx->pc = 0x161B0Cu;
label_161b0c:
    // 0x161b0c: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x161b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_161b10:
    // 0x161b10: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_161b14:
    if (ctx->pc == 0x161B14u) {
        ctx->pc = 0x161B18u;
        goto label_161b18;
    }
    ctx->pc = 0x161B10u;
    {
        const bool branch_taken_0x161b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x161b10) {
            ctx->pc = 0x161B24u;
            goto label_161b24;
        }
    }
    ctx->pc = 0x161B18u;
label_161b18:
    // 0x161b18: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x161b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_161b1c:
    // 0x161b1c: 0xc0587b0  jal         func_161EC0
label_161b20:
    if (ctx->pc == 0x161B20u) {
        ctx->pc = 0x161B20u;
            // 0x161b20: 0x24051800  addiu       $a1, $zero, 0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
        ctx->pc = 0x161B24u;
        goto label_161b24;
    }
    ctx->pc = 0x161B1Cu;
    SET_GPR_U32(ctx, 31, 0x161B24u);
    ctx->pc = 0x161B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161B1Cu;
            // 0x161b20: 0x24051800  addiu       $a1, $zero, 0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161EC0u;
    if (runtime->hasFunction(0x161EC0u)) {
        auto targetFn = runtime->lookupFunction(0x161EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161B24u; }
        if (ctx->pc != 0x161B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161EC0_0x161ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161B24u; }
        if (ctx->pc != 0x161B24u) { return; }
    }
    ctx->pc = 0x161B24u;
label_161b24:
    // 0x161b24: 0xc0587c2  jal         func_161F08
label_161b28:
    if (ctx->pc == 0x161B28u) {
        ctx->pc = 0x161B28u;
            // 0x161b28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x161B2Cu;
        goto label_161b2c;
    }
    ctx->pc = 0x161B24u;
    SET_GPR_U32(ctx, 31, 0x161B2Cu);
    ctx->pc = 0x161B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161B24u;
            // 0x161b28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161F08u;
    if (runtime->hasFunction(0x161F08u)) {
        auto targetFn = runtime->lookupFunction(0x161F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161B2Cu; }
        if (ctx->pc != 0x161B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161F08_0x161f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161B2Cu; }
        if (ctx->pc != 0x161B2Cu) { return; }
    }
    ctx->pc = 0x161B2Cu;
label_161b2c:
    // 0x161b2c: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
label_161b30:
    if (ctx->pc == 0x161B30u) {
        ctx->pc = 0x161B30u;
            // 0x161b30: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x161B34u;
        goto label_161b34;
    }
    ctx->pc = 0x161B2Cu;
    {
        const bool branch_taken_0x161b2c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x161b2c) {
            ctx->pc = 0x161B30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x161B2Cu;
            // 0x161b30: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x161B40u;
            goto label_161b40;
        }
    }
    ctx->pc = 0x161B34u;
label_161b34:
    // 0x161b34: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x161b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_161b38:
    // 0x161b38: 0x10000007  b           . + 4 + (0x7 << 2)
label_161b3c:
    if (ctx->pc == 0x161B3Cu) {
        ctx->pc = 0x161B3Cu;
            // 0x161b3c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x161B40u;
        goto label_161b40;
    }
    ctx->pc = 0x161B38u;
    {
        const bool branch_taken_0x161b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161B38u;
            // 0x161b3c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b38) {
            ctx->pc = 0x161B58u;
            goto label_161b58;
        }
    }
    ctx->pc = 0x161B40u;
label_161b40:
    // 0x161b40: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x161b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_161b44:
    // 0x161b44: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x161b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_161b48:
    // 0x161b48: 0x24631800  addiu       $v1, $v1, 0x1800
    ctx->pc = 0x161b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6144));
label_161b4c:
    // 0x161b4c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x161b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_161b50:
    // 0x161b50: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x161b50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_161b54:
    // 0x161b54: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x161b54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_161b58:
    // 0x161b58: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x161b58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_161b5c:
    // 0x161b5c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x161b5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_161b60:
    // 0x161b60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x161b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_161b64:
    // 0x161b64: 0x3e00008  jr          $ra
label_161b68:
    if (ctx->pc == 0x161B68u) {
        ctx->pc = 0x161B68u;
            // 0x161b68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x161B6Cu;
        goto label_161b6c;
    }
    ctx->pc = 0x161B64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161B64u;
            // 0x161b68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161B6Cu;
label_161b6c:
    // 0x161b6c: 0x0  nop
    ctx->pc = 0x161b6cu;
    // NOP
}
