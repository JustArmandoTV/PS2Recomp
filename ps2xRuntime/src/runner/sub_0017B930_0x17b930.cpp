#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017B930
// Address: 0x17b930 - 0x17bc98
void sub_0017B930_0x17b930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B930_0x17b930");
#endif

    switch (ctx->pc) {
        case 0x17b930u: goto label_17b930;
        case 0x17b934u: goto label_17b934;
        case 0x17b938u: goto label_17b938;
        case 0x17b93cu: goto label_17b93c;
        case 0x17b940u: goto label_17b940;
        case 0x17b944u: goto label_17b944;
        case 0x17b948u: goto label_17b948;
        case 0x17b94cu: goto label_17b94c;
        case 0x17b950u: goto label_17b950;
        case 0x17b954u: goto label_17b954;
        case 0x17b958u: goto label_17b958;
        case 0x17b95cu: goto label_17b95c;
        case 0x17b960u: goto label_17b960;
        case 0x17b964u: goto label_17b964;
        case 0x17b968u: goto label_17b968;
        case 0x17b96cu: goto label_17b96c;
        case 0x17b970u: goto label_17b970;
        case 0x17b974u: goto label_17b974;
        case 0x17b978u: goto label_17b978;
        case 0x17b97cu: goto label_17b97c;
        case 0x17b980u: goto label_17b980;
        case 0x17b984u: goto label_17b984;
        case 0x17b988u: goto label_17b988;
        case 0x17b98cu: goto label_17b98c;
        case 0x17b990u: goto label_17b990;
        case 0x17b994u: goto label_17b994;
        case 0x17b998u: goto label_17b998;
        case 0x17b99cu: goto label_17b99c;
        case 0x17b9a0u: goto label_17b9a0;
        case 0x17b9a4u: goto label_17b9a4;
        case 0x17b9a8u: goto label_17b9a8;
        case 0x17b9acu: goto label_17b9ac;
        case 0x17b9b0u: goto label_17b9b0;
        case 0x17b9b4u: goto label_17b9b4;
        case 0x17b9b8u: goto label_17b9b8;
        case 0x17b9bcu: goto label_17b9bc;
        case 0x17b9c0u: goto label_17b9c0;
        case 0x17b9c4u: goto label_17b9c4;
        case 0x17b9c8u: goto label_17b9c8;
        case 0x17b9ccu: goto label_17b9cc;
        case 0x17b9d0u: goto label_17b9d0;
        case 0x17b9d4u: goto label_17b9d4;
        case 0x17b9d8u: goto label_17b9d8;
        case 0x17b9dcu: goto label_17b9dc;
        case 0x17b9e0u: goto label_17b9e0;
        case 0x17b9e4u: goto label_17b9e4;
        case 0x17b9e8u: goto label_17b9e8;
        case 0x17b9ecu: goto label_17b9ec;
        case 0x17b9f0u: goto label_17b9f0;
        case 0x17b9f4u: goto label_17b9f4;
        case 0x17b9f8u: goto label_17b9f8;
        case 0x17b9fcu: goto label_17b9fc;
        case 0x17ba00u: goto label_17ba00;
        case 0x17ba04u: goto label_17ba04;
        case 0x17ba08u: goto label_17ba08;
        case 0x17ba0cu: goto label_17ba0c;
        case 0x17ba10u: goto label_17ba10;
        case 0x17ba14u: goto label_17ba14;
        case 0x17ba18u: goto label_17ba18;
        case 0x17ba1cu: goto label_17ba1c;
        case 0x17ba20u: goto label_17ba20;
        case 0x17ba24u: goto label_17ba24;
        case 0x17ba28u: goto label_17ba28;
        case 0x17ba2cu: goto label_17ba2c;
        case 0x17ba30u: goto label_17ba30;
        case 0x17ba34u: goto label_17ba34;
        case 0x17ba38u: goto label_17ba38;
        case 0x17ba3cu: goto label_17ba3c;
        case 0x17ba40u: goto label_17ba40;
        case 0x17ba44u: goto label_17ba44;
        case 0x17ba48u: goto label_17ba48;
        case 0x17ba4cu: goto label_17ba4c;
        case 0x17ba50u: goto label_17ba50;
        case 0x17ba54u: goto label_17ba54;
        case 0x17ba58u: goto label_17ba58;
        case 0x17ba5cu: goto label_17ba5c;
        case 0x17ba60u: goto label_17ba60;
        case 0x17ba64u: goto label_17ba64;
        case 0x17ba68u: goto label_17ba68;
        case 0x17ba6cu: goto label_17ba6c;
        case 0x17ba70u: goto label_17ba70;
        case 0x17ba74u: goto label_17ba74;
        case 0x17ba78u: goto label_17ba78;
        case 0x17ba7cu: goto label_17ba7c;
        case 0x17ba80u: goto label_17ba80;
        case 0x17ba84u: goto label_17ba84;
        case 0x17ba88u: goto label_17ba88;
        case 0x17ba8cu: goto label_17ba8c;
        case 0x17ba90u: goto label_17ba90;
        case 0x17ba94u: goto label_17ba94;
        case 0x17ba98u: goto label_17ba98;
        case 0x17ba9cu: goto label_17ba9c;
        case 0x17baa0u: goto label_17baa0;
        case 0x17baa4u: goto label_17baa4;
        case 0x17baa8u: goto label_17baa8;
        case 0x17baacu: goto label_17baac;
        case 0x17bab0u: goto label_17bab0;
        case 0x17bab4u: goto label_17bab4;
        case 0x17bab8u: goto label_17bab8;
        case 0x17babcu: goto label_17babc;
        case 0x17bac0u: goto label_17bac0;
        case 0x17bac4u: goto label_17bac4;
        case 0x17bac8u: goto label_17bac8;
        case 0x17baccu: goto label_17bacc;
        case 0x17bad0u: goto label_17bad0;
        case 0x17bad4u: goto label_17bad4;
        case 0x17bad8u: goto label_17bad8;
        case 0x17badcu: goto label_17badc;
        case 0x17bae0u: goto label_17bae0;
        case 0x17bae4u: goto label_17bae4;
        case 0x17bae8u: goto label_17bae8;
        case 0x17baecu: goto label_17baec;
        case 0x17baf0u: goto label_17baf0;
        case 0x17baf4u: goto label_17baf4;
        case 0x17baf8u: goto label_17baf8;
        case 0x17bafcu: goto label_17bafc;
        case 0x17bb00u: goto label_17bb00;
        case 0x17bb04u: goto label_17bb04;
        case 0x17bb08u: goto label_17bb08;
        case 0x17bb0cu: goto label_17bb0c;
        case 0x17bb10u: goto label_17bb10;
        case 0x17bb14u: goto label_17bb14;
        case 0x17bb18u: goto label_17bb18;
        case 0x17bb1cu: goto label_17bb1c;
        case 0x17bb20u: goto label_17bb20;
        case 0x17bb24u: goto label_17bb24;
        case 0x17bb28u: goto label_17bb28;
        case 0x17bb2cu: goto label_17bb2c;
        case 0x17bb30u: goto label_17bb30;
        case 0x17bb34u: goto label_17bb34;
        case 0x17bb38u: goto label_17bb38;
        case 0x17bb3cu: goto label_17bb3c;
        case 0x17bb40u: goto label_17bb40;
        case 0x17bb44u: goto label_17bb44;
        case 0x17bb48u: goto label_17bb48;
        case 0x17bb4cu: goto label_17bb4c;
        case 0x17bb50u: goto label_17bb50;
        case 0x17bb54u: goto label_17bb54;
        case 0x17bb58u: goto label_17bb58;
        case 0x17bb5cu: goto label_17bb5c;
        case 0x17bb60u: goto label_17bb60;
        case 0x17bb64u: goto label_17bb64;
        case 0x17bb68u: goto label_17bb68;
        case 0x17bb6cu: goto label_17bb6c;
        case 0x17bb70u: goto label_17bb70;
        case 0x17bb74u: goto label_17bb74;
        case 0x17bb78u: goto label_17bb78;
        case 0x17bb7cu: goto label_17bb7c;
        case 0x17bb80u: goto label_17bb80;
        case 0x17bb84u: goto label_17bb84;
        case 0x17bb88u: goto label_17bb88;
        case 0x17bb8cu: goto label_17bb8c;
        case 0x17bb90u: goto label_17bb90;
        case 0x17bb94u: goto label_17bb94;
        case 0x17bb98u: goto label_17bb98;
        case 0x17bb9cu: goto label_17bb9c;
        case 0x17bba0u: goto label_17bba0;
        case 0x17bba4u: goto label_17bba4;
        case 0x17bba8u: goto label_17bba8;
        case 0x17bbacu: goto label_17bbac;
        case 0x17bbb0u: goto label_17bbb0;
        case 0x17bbb4u: goto label_17bbb4;
        case 0x17bbb8u: goto label_17bbb8;
        case 0x17bbbcu: goto label_17bbbc;
        case 0x17bbc0u: goto label_17bbc0;
        case 0x17bbc4u: goto label_17bbc4;
        case 0x17bbc8u: goto label_17bbc8;
        case 0x17bbccu: goto label_17bbcc;
        case 0x17bbd0u: goto label_17bbd0;
        case 0x17bbd4u: goto label_17bbd4;
        case 0x17bbd8u: goto label_17bbd8;
        case 0x17bbdcu: goto label_17bbdc;
        case 0x17bbe0u: goto label_17bbe0;
        case 0x17bbe4u: goto label_17bbe4;
        case 0x17bbe8u: goto label_17bbe8;
        case 0x17bbecu: goto label_17bbec;
        case 0x17bbf0u: goto label_17bbf0;
        case 0x17bbf4u: goto label_17bbf4;
        case 0x17bbf8u: goto label_17bbf8;
        case 0x17bbfcu: goto label_17bbfc;
        case 0x17bc00u: goto label_17bc00;
        case 0x17bc04u: goto label_17bc04;
        case 0x17bc08u: goto label_17bc08;
        case 0x17bc0cu: goto label_17bc0c;
        case 0x17bc10u: goto label_17bc10;
        case 0x17bc14u: goto label_17bc14;
        case 0x17bc18u: goto label_17bc18;
        case 0x17bc1cu: goto label_17bc1c;
        case 0x17bc20u: goto label_17bc20;
        case 0x17bc24u: goto label_17bc24;
        case 0x17bc28u: goto label_17bc28;
        case 0x17bc2cu: goto label_17bc2c;
        case 0x17bc30u: goto label_17bc30;
        case 0x17bc34u: goto label_17bc34;
        case 0x17bc38u: goto label_17bc38;
        case 0x17bc3cu: goto label_17bc3c;
        case 0x17bc40u: goto label_17bc40;
        case 0x17bc44u: goto label_17bc44;
        case 0x17bc48u: goto label_17bc48;
        case 0x17bc4cu: goto label_17bc4c;
        case 0x17bc50u: goto label_17bc50;
        case 0x17bc54u: goto label_17bc54;
        case 0x17bc58u: goto label_17bc58;
        case 0x17bc5cu: goto label_17bc5c;
        case 0x17bc60u: goto label_17bc60;
        case 0x17bc64u: goto label_17bc64;
        case 0x17bc68u: goto label_17bc68;
        case 0x17bc6cu: goto label_17bc6c;
        case 0x17bc70u: goto label_17bc70;
        case 0x17bc74u: goto label_17bc74;
        case 0x17bc78u: goto label_17bc78;
        case 0x17bc7cu: goto label_17bc7c;
        case 0x17bc80u: goto label_17bc80;
        case 0x17bc84u: goto label_17bc84;
        case 0x17bc88u: goto label_17bc88;
        case 0x17bc8cu: goto label_17bc8c;
        case 0x17bc90u: goto label_17bc90;
        case 0x17bc94u: goto label_17bc94;
        default: break;
    }

    ctx->pc = 0x17b930u;

label_17b930:
    // 0x17b930: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17b930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_17b934:
    // 0x17b934: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17b938:
    // 0x17b938: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x17b938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_17b93c:
    // 0x17b93c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17b93cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17b940:
    // 0x17b940: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x17b940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_17b944:
    // 0x17b944: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x17b944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_17b948:
    // 0x17b948: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x17b948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
label_17b94c:
    // 0x17b94c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x17b94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_17b950:
    // 0x17b950: 0x82440001  lb          $a0, 0x1($s2)
    ctx->pc = 0x17b950u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_17b954:
    // 0x17b954: 0x148200c9  bne         $a0, $v0, . + 4 + (0xC9 << 2)
label_17b958:
    if (ctx->pc == 0x17B958u) {
        ctx->pc = 0x17B958u;
            // 0x17b958: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x17B95Cu;
        goto label_17b95c;
    }
    ctx->pc = 0x17B954u;
    {
        const bool branch_taken_0x17b954 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x17B958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B954u;
            // 0x17b958: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b954) {
            ctx->pc = 0x17BC7Cu;
            goto label_17bc7c;
        }
    }
    ctx->pc = 0x17B95Cu;
label_17b95c:
    // 0x17b95c: 0x82420002  lb          $v0, 0x2($s2)
    ctx->pc = 0x17b95cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_17b960:
    // 0x17b960: 0x14440026  bne         $v0, $a0, . + 4 + (0x26 << 2)
label_17b964:
    if (ctx->pc == 0x17B964u) {
        ctx->pc = 0x17B964u;
            // 0x17b964: 0x92430002  lbu         $v1, 0x2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->pc = 0x17B968u;
        goto label_17b968;
    }
    ctx->pc = 0x17B960u;
    {
        const bool branch_taken_0x17b960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x17B964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B960u;
            // 0x17b964: 0x92430002  lbu         $v1, 0x2($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b960) {
            ctx->pc = 0x17B9FCu;
            goto label_17b9fc;
        }
    }
    ctx->pc = 0x17B968u;
label_17b968:
    // 0x17b968: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x17b968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_17b96c:
    // 0x17b96c: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x17b96cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_17b970:
    // 0x17b970: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17b970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b974:
    // 0x17b974: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17b974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17b978:
    // 0x17b978: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x17b978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17b97c:
    // 0x17b97c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x17b97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_17b980:
    // 0x17b980: 0x40f809  jalr        $v0
label_17b984:
    if (ctx->pc == 0x17B984u) {
        ctx->pc = 0x17B984u;
            // 0x17b984: 0x26510014  addiu       $s1, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->pc = 0x17B988u;
        goto label_17b988;
    }
    ctx->pc = 0x17B980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17B988u);
        ctx->pc = 0x17B984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B980u;
            // 0x17b984: 0x26510014  addiu       $s1, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17B988u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17B988u; }
            if (ctx->pc != 0x17B988u) { return; }
        }
        }
    }
    ctx->pc = 0x17B988u;
label_17b988:
    // 0x17b988: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x17b988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_17b98c:
    // 0x17b98c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x17b98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_17b990:
    // 0x17b990: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17b990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17b994:
    // 0x17b994: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x17b994u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_17b998:
    // 0x17b998: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x17b998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17b99c:
    // 0x17b99c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x17b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_17b9a0:
    // 0x17b9a0: 0x40f809  jalr        $v0
label_17b9a4:
    if (ctx->pc == 0x17B9A4u) {
        ctx->pc = 0x17B9A4u;
            // 0x17b9a4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17B9A8u;
        goto label_17b9a8;
    }
    ctx->pc = 0x17B9A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17B9A8u);
        ctx->pc = 0x17B9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B9A0u;
            // 0x17b9a4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17B9A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17B9A8u; }
            if (ctx->pc != 0x17B9A8u) { return; }
        }
        }
    }
    ctx->pc = 0x17B9A8u;
label_17b9a8:
    // 0x17b9a8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x17b9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_17b9ac:
    // 0x17b9ac: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x17b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_17b9b0:
    // 0x17b9b0: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x17b9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_17b9b4:
    // 0x17b9b4: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x17b9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_17b9b8:
    // 0x17b9b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17b9bc:
    // 0x17b9bc: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x17b9bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
label_17b9c0:
    // 0x17b9c0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_17b9c4:
    if (ctx->pc == 0x17B9C4u) {
        ctx->pc = 0x17B9C4u;
            // 0x17b9c4: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->pc = 0x17B9C8u;
        goto label_17b9c8;
    }
    ctx->pc = 0x17B9C0u;
    {
        const bool branch_taken_0x17b9c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B9C0u;
            // 0x17b9c4: 0xae42003c  sw          $v0, 0x3C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b9c0) {
            ctx->pc = 0x17B9F8u;
            goto label_17b9f8;
        }
    }
    ctx->pc = 0x17B9C8u;
label_17b9c8:
    // 0x17b9c8: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17b9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_17b9cc:
    // 0x17b9cc: 0xc05b99c  jal         func_16E670
label_17b9d0:
    if (ctx->pc == 0x17B9D0u) {
        ctx->pc = 0x17B9D0u;
            // 0x17b9d0: 0x24845bc0  addiu       $a0, $a0, 0x5BC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23488));
        ctx->pc = 0x17B9D4u;
        goto label_17b9d4;
    }
    ctx->pc = 0x17B9CCu;
    SET_GPR_U32(ctx, 31, 0x17B9D4u);
    ctx->pc = 0x17B9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B9CCu;
            // 0x17b9d0: 0x24845bc0  addiu       $a0, $a0, 0x5BC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B9D4u; }
        if (ctx->pc != 0x17B9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B9D4u; }
        if (ctx->pc != 0x17B9D4u) { return; }
    }
    ctx->pc = 0x17B9D4u;
label_17b9d4:
    // 0x17b9d4: 0x0  nop
    ctx->pc = 0x17b9d4u;
    // NOP
label_17b9d8:
    // 0x17b9d8: 0x0  nop
    ctx->pc = 0x17b9d8u;
    // NOP
label_17b9dc:
    // 0x17b9dc: 0x0  nop
    ctx->pc = 0x17b9dcu;
    // NOP
label_17b9e0:
    // 0x17b9e0: 0x0  nop
    ctx->pc = 0x17b9e0u;
    // NOP
label_17b9e4:
    // 0x17b9e4: 0x0  nop
    ctx->pc = 0x17b9e4u;
    // NOP
label_17b9e8:
    // 0x17b9e8: 0x0  nop
    ctx->pc = 0x17b9e8u;
    // NOP
label_17b9ec:
    // 0x17b9ec: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_17b9f0:
    if (ctx->pc == 0x17B9F0u) {
        ctx->pc = 0x17B9F4u;
        goto label_17b9f4;
    }
    ctx->pc = 0x17B9ECu;
    {
        const bool branch_taken_0x17b9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b9ec) {
            ctx->pc = 0x17B9D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17b9d8;
        }
    }
    ctx->pc = 0x17B9F4u;
label_17b9f4:
    // 0x17b9f4: 0x0  nop
    ctx->pc = 0x17b9f4u;
    // NOP
label_17b9f8:
    // 0x17b9f8: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x17b9f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_17b9fc:
    // 0x17b9fc: 0x1460009f  bnez        $v1, . + 4 + (0x9F << 2)
label_17ba00:
    if (ctx->pc == 0x17BA00u) {
        ctx->pc = 0x17BA00u;
            // 0x17ba00: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x17BA04u;
        goto label_17ba04;
    }
    ctx->pc = 0x17B9FCu;
    {
        const bool branch_taken_0x17b9fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B9FCu;
            // 0x17ba00: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b9fc) {
            ctx->pc = 0x17BC7Cu;
            goto label_17bc7c;
        }
    }
    ctx->pc = 0x17BA04u;
label_17ba04:
    // 0x17ba04: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x17ba04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_17ba08:
    // 0x17ba08: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x17ba08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_17ba0c:
    // 0x17ba0c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x17ba0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17ba10:
    // 0x17ba10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17ba10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17ba14:
    // 0x17ba14: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x17ba14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17ba18:
    // 0x17ba18: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x17ba18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_17ba1c:
    // 0x17ba1c: 0x40f809  jalr        $v0
label_17ba20:
    if (ctx->pc == 0x17BA20u) {
        ctx->pc = 0x17BA20u;
            // 0x17ba20: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->pc = 0x17BA24u;
        goto label_17ba24;
    }
    ctx->pc = 0x17BA1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17BA24u);
        ctx->pc = 0x17BA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BA1Cu;
            // 0x17ba20: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17BA24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17BA24u; }
            if (ctx->pc != 0x17BA24u) { return; }
        }
        }
    }
    ctx->pc = 0x17BA24u;
label_17ba24:
    // 0x17ba24: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x17ba24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_17ba28:
    // 0x17ba28: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x17ba28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_17ba2c:
    // 0x17ba2c: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x17ba2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_17ba30:
    // 0x17ba30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x17ba30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17ba34:
    // 0x17ba34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17ba34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17ba38:
    // 0x17ba38: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x17ba38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_17ba3c:
    // 0x17ba3c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x17ba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_17ba40:
    // 0x17ba40: 0x40f809  jalr        $v0
label_17ba44:
    if (ctx->pc == 0x17BA44u) {
        ctx->pc = 0x17BA44u;
            // 0x17ba44: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17BA48u;
        goto label_17ba48;
    }
    ctx->pc = 0x17BA40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17BA48u);
        ctx->pc = 0x17BA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BA40u;
            // 0x17ba44: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17BA48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17BA48u; }
            if (ctx->pc != 0x17BA48u) { return; }
        }
        }
    }
    ctx->pc = 0x17BA48u;
label_17ba48:
    // 0x17ba48: 0x8e450038  lw          $a1, 0x38($s2)
    ctx->pc = 0x17ba48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_17ba4c:
    // 0x17ba4c: 0x8fb10024  lw          $s1, 0x24($sp)
    ctx->pc = 0x17ba4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_17ba50:
    // 0x17ba50: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x17ba50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_17ba54:
    // 0x17ba54: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x17ba54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_17ba58:
    // 0x17ba58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17ba58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17ba5c:
    // 0x17ba5c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x17ba5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17ba60:
    // 0x17ba60: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x17ba60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17ba64:
    // 0x17ba64: 0x111182a  slt         $v1, $t0, $s1
    ctx->pc = 0x17ba64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_17ba68:
    // 0x17ba68: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_17ba6c:
    if (ctx->pc == 0x17BA6Cu) {
        ctx->pc = 0x17BA6Cu;
            // 0x17ba6c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x17BA70u;
        goto label_17ba70;
    }
    ctx->pc = 0x17BA68u;
    {
        const bool branch_taken_0x17ba68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ba68) {
            ctx->pc = 0x17BA6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17BA68u;
            // 0x17ba6c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x17BA70u;
            goto label_17ba70;
        }
    }
    ctx->pc = 0x17BA70u;
label_17ba70:
    // 0x17ba70: 0x103880b  movn        $s1, $t0, $v1
    ctx->pc = 0x17ba70u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 8));
label_17ba74:
    // 0x17ba74: 0x225001a  div         $zero, $s1, $a1
    ctx->pc = 0x17ba74u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_17ba78:
    // 0x17ba78: 0x1012  mflo        $v0
    ctx->pc = 0x17ba78u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_17ba7c:
    // 0x17ba7c: 0x458818  mult        $s1, $v0, $a1
    ctx->pc = 0x17ba7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_17ba80:
    // 0x17ba80: 0xc061c20  jal         func_187080
label_17ba84:
    if (ctx->pc == 0x17BA84u) {
        ctx->pc = 0x17BA84u;
            // 0x17ba84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17BA88u;
        goto label_17ba88;
    }
    ctx->pc = 0x17BA80u;
    SET_GPR_U32(ctx, 31, 0x17BA88u);
    ctx->pc = 0x17BA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BA80u;
            // 0x17ba84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187080u;
    if (runtime->hasFunction(0x187080u)) {
        auto targetFn = runtime->lookupFunction(0x187080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BA88u; }
        if (ctx->pc != 0x17BA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187080_0x187080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BA88u; }
        if (ctx->pc != 0x17BA88u) { return; }
    }
    ctx->pc = 0x17BA88u;
label_17ba88:
    // 0x17ba88: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x17ba88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_17ba8c:
    // 0x17ba8c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17ba8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17ba90:
    // 0x17ba90: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x17ba90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17ba94:
    // 0x17ba94: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x17ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_17ba98:
    // 0x17ba98: 0x40f809  jalr        $v0
label_17ba9c:
    if (ctx->pc == 0x17BA9Cu) {
        ctx->pc = 0x17BA9Cu;
            // 0x17ba9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x17BAA0u;
        goto label_17baa0;
    }
    ctx->pc = 0x17BA98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17BAA0u);
        ctx->pc = 0x17BA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BA98u;
            // 0x17ba9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17BAA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17BAA0u; }
            if (ctx->pc != 0x17BAA0u) { return; }
        }
        }
    }
    ctx->pc = 0x17BAA0u;
label_17baa0:
    // 0x17baa0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17baa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17baa4:
    // 0x17baa4: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x17baa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_17baa8:
    // 0x17baa8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17baa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17baac:
    // 0x17baac: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x17baacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17bab0:
    // 0x17bab0: 0xc061c20  jal         func_187080
label_17bab4:
    if (ctx->pc == 0x17BAB4u) {
        ctx->pc = 0x17BAB4u;
            // 0x17bab4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17BAB8u;
        goto label_17bab8;
    }
    ctx->pc = 0x17BAB0u;
    SET_GPR_U32(ctx, 31, 0x17BAB8u);
    ctx->pc = 0x17BAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BAB0u;
            // 0x17bab4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187080u;
    if (runtime->hasFunction(0x187080u)) {
        auto targetFn = runtime->lookupFunction(0x187080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BAB8u; }
        if (ctx->pc != 0x17BAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187080_0x187080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BAB8u; }
        if (ctx->pc != 0x17BAB8u) { return; }
    }
    ctx->pc = 0x17BAB8u;
label_17bab8:
    // 0x17bab8: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x17bab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_17babc:
    // 0x17babc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17babcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17bac0:
    // 0x17bac0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x17bac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17bac4:
    // 0x17bac4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x17bac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_17bac8:
    // 0x17bac8: 0x40f809  jalr        $v0
label_17bacc:
    if (ctx->pc == 0x17BACCu) {
        ctx->pc = 0x17BACCu;
            // 0x17bacc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17BAD0u;
        goto label_17bad0;
    }
    ctx->pc = 0x17BAC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17BAD0u);
        ctx->pc = 0x17BACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BAC8u;
            // 0x17bacc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17BAD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17BAD0u; }
            if (ctx->pc != 0x17BAD0u) { return; }
        }
        }
    }
    ctx->pc = 0x17BAD0u;
label_17bad0:
    // 0x17bad0: 0x5a20006a  blezl       $s1, . + 4 + (0x6A << 2)
label_17bad4:
    if (ctx->pc == 0x17BAD4u) {
        ctx->pc = 0x17BAD4u;
            // 0x17bad4: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x17BAD8u;
        goto label_17bad8;
    }
    ctx->pc = 0x17BAD0u;
    {
        const bool branch_taken_0x17bad0 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x17bad0) {
            ctx->pc = 0x17BAD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17BAD0u;
            // 0x17bad4: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17BC7Cu;
            goto label_17bc7c;
        }
    }
    ctx->pc = 0x17BAD8u;
label_17bad8:
    // 0x17bad8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x17bad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_17badc:
    // 0x17badc: 0x3062003f  andi        $v0, $v1, 0x3F
    ctx->pc = 0x17badcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_17bae0:
    // 0x17bae0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_17bae4:
    if (ctx->pc == 0x17BAE4u) {
        ctx->pc = 0x17BAE4u;
            // 0x17bae4: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->pc = 0x17BAE8u;
        goto label_17bae8;
    }
    ctx->pc = 0x17BAE0u;
    {
        const bool branch_taken_0x17bae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BAE0u;
            // 0x17bae4: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bae0) {
            ctx->pc = 0x17BB28u;
            goto label_17bb28;
        }
    }
    ctx->pc = 0x17BAE8u;
label_17bae8:
    // 0x17bae8: 0xc05b99c  jal         func_16E670
label_17baec:
    if (ctx->pc == 0x17BAECu) {
        ctx->pc = 0x17BAECu;
            // 0x17baec: 0x24845be0  addiu       $a0, $a0, 0x5BE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23520));
        ctx->pc = 0x17BAF0u;
        goto label_17baf0;
    }
    ctx->pc = 0x17BAE8u;
    SET_GPR_U32(ctx, 31, 0x17BAF0u);
    ctx->pc = 0x17BAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BAE8u;
            // 0x17baec: 0x24845be0  addiu       $a0, $a0, 0x5BE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BAF0u; }
        if (ctx->pc != 0x17BAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BAF0u; }
        if (ctx->pc != 0x17BAF0u) { return; }
    }
    ctx->pc = 0x17BAF0u;
label_17baf0:
    // 0x17baf0: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17baf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_17baf4:
    // 0x17baf4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x17baf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_17baf8:
    // 0x17baf8: 0x24845c08  addiu       $a0, $a0, 0x5C08
    ctx->pc = 0x17baf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23560));
label_17bafc:
    // 0x17bafc: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x17bafcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17bb00:
    // 0x17bb00: 0xc05b99c  jal         func_16E670
label_17bb04:
    if (ctx->pc == 0x17BB04u) {
        ctx->pc = 0x17BB04u;
            // 0x17bb04: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x17BB08u;
        goto label_17bb08;
    }
    ctx->pc = 0x17BB00u;
    SET_GPR_U32(ctx, 31, 0x17BB08u);
    ctx->pc = 0x17BB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BB00u;
            // 0x17bb04: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BB08u; }
        if (ctx->pc != 0x17BB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BB08u; }
        if (ctx->pc != 0x17BB08u) { return; }
    }
    ctx->pc = 0x17BB08u;
label_17bb08:
    // 0x17bb08: 0x0  nop
    ctx->pc = 0x17bb08u;
    // NOP
label_17bb0c:
    // 0x17bb0c: 0x0  nop
    ctx->pc = 0x17bb0cu;
    // NOP
label_17bb10:
    // 0x17bb10: 0x0  nop
    ctx->pc = 0x17bb10u;
    // NOP
label_17bb14:
    // 0x17bb14: 0x0  nop
    ctx->pc = 0x17bb14u;
    // NOP
label_17bb18:
    // 0x17bb18: 0x0  nop
    ctx->pc = 0x17bb18u;
    // NOP
label_17bb1c:
    // 0x17bb1c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_17bb20:
    if (ctx->pc == 0x17BB20u) {
        ctx->pc = 0x17BB24u;
        goto label_17bb24;
    }
    ctx->pc = 0x17BB1Cu;
    {
        const bool branch_taken_0x17bb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bb1c) {
            ctx->pc = 0x17BB08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17bb08;
        }
    }
    ctx->pc = 0x17BB24u;
label_17bb24:
    // 0x17bb24: 0x0  nop
    ctx->pc = 0x17bb24u;
    // NOP
label_17bb28:
    // 0x17bb28: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x17bb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_17bb2c:
    // 0x17bb2c: 0x3082003f  andi        $v0, $a0, 0x3F
    ctx->pc = 0x17bb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
label_17bb30:
    // 0x17bb30: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_17bb34:
    if (ctx->pc == 0x17BB34u) {
        ctx->pc = 0x17BB34u;
            // 0x17bb34: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x17BB38u;
        goto label_17bb38;
    }
    ctx->pc = 0x17BB30u;
    {
        const bool branch_taken_0x17bb30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bb30) {
            ctx->pc = 0x17BB34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17BB30u;
            // 0x17bb34: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17BB80u;
            goto label_17bb80;
        }
    }
    ctx->pc = 0x17BB38u;
label_17bb38:
    // 0x17bb38: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17bb38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_17bb3c:
    // 0x17bb3c: 0xc05b99c  jal         func_16E670
label_17bb40:
    if (ctx->pc == 0x17BB40u) {
        ctx->pc = 0x17BB40u;
            // 0x17bb40: 0x24845c38  addiu       $a0, $a0, 0x5C38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23608));
        ctx->pc = 0x17BB44u;
        goto label_17bb44;
    }
    ctx->pc = 0x17BB3Cu;
    SET_GPR_U32(ctx, 31, 0x17BB44u);
    ctx->pc = 0x17BB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BB3Cu;
            // 0x17bb40: 0x24845c38  addiu       $a0, $a0, 0x5C38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BB44u; }
        if (ctx->pc != 0x17BB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BB44u; }
        if (ctx->pc != 0x17BB44u) { return; }
    }
    ctx->pc = 0x17BB44u;
label_17bb44:
    // 0x17bb44: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17bb44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_17bb48:
    // 0x17bb48: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x17bb48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_17bb4c:
    // 0x17bb4c: 0x24845c08  addiu       $a0, $a0, 0x5C08
    ctx->pc = 0x17bb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23560));
label_17bb50:
    // 0x17bb50: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x17bb50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17bb54:
    // 0x17bb54: 0xc05b99c  jal         func_16E670
label_17bb58:
    if (ctx->pc == 0x17BB58u) {
        ctx->pc = 0x17BB58u;
            // 0x17bb58: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x17BB5Cu;
        goto label_17bb5c;
    }
    ctx->pc = 0x17BB54u;
    SET_GPR_U32(ctx, 31, 0x17BB5Cu);
    ctx->pc = 0x17BB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BB54u;
            // 0x17bb58: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BB5Cu; }
        if (ctx->pc != 0x17BB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BB5Cu; }
        if (ctx->pc != 0x17BB5Cu) { return; }
    }
    ctx->pc = 0x17BB5Cu;
label_17bb5c:
    // 0x17bb5c: 0x0  nop
    ctx->pc = 0x17bb5cu;
    // NOP
label_17bb60:
    // 0x17bb60: 0x0  nop
    ctx->pc = 0x17bb60u;
    // NOP
label_17bb64:
    // 0x17bb64: 0x0  nop
    ctx->pc = 0x17bb64u;
    // NOP
label_17bb68:
    // 0x17bb68: 0x0  nop
    ctx->pc = 0x17bb68u;
    // NOP
label_17bb6c:
    // 0x17bb6c: 0x0  nop
    ctx->pc = 0x17bb6cu;
    // NOP
label_17bb70:
    // 0x17bb70: 0x0  nop
    ctx->pc = 0x17bb70u;
    // NOP
label_17bb74:
    // 0x17bb74: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_17bb78:
    if (ctx->pc == 0x17BB78u) {
        ctx->pc = 0x17BB7Cu;
        goto label_17bb7c;
    }
    ctx->pc = 0x17BB74u;
    {
        const bool branch_taken_0x17bb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bb74) {
            ctx->pc = 0x17BB60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17bb60;
        }
    }
    ctx->pc = 0x17BB7Cu;
label_17bb7c:
    // 0x17bb7c: 0x0  nop
    ctx->pc = 0x17bb7cu;
    // NOP
label_17bb80:
    // 0x17bb80: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x17bb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_17bb84:
    // 0x17bb84: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_17bb88:
    if (ctx->pc == 0x17BB88u) {
        ctx->pc = 0x17BB88u;
            // 0x17bb88: 0x832821  addu        $a1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x17BB8Cu;
        goto label_17bb8c;
    }
    ctx->pc = 0x17BB84u;
    {
        const bool branch_taken_0x17bb84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BB84u;
            // 0x17bb88: 0x832821  addu        $a1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bb84) {
            ctx->pc = 0x17BBD0u;
            goto label_17bbd0;
        }
    }
    ctx->pc = 0x17BB8Cu;
label_17bb8c:
    // 0x17bb8c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17bb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_17bb90:
    // 0x17bb90: 0xc05b99c  jal         func_16E670
label_17bb94:
    if (ctx->pc == 0x17BB94u) {
        ctx->pc = 0x17BB94u;
            // 0x17bb94: 0x24845c60  addiu       $a0, $a0, 0x5C60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23648));
        ctx->pc = 0x17BB98u;
        goto label_17bb98;
    }
    ctx->pc = 0x17BB90u;
    SET_GPR_U32(ctx, 31, 0x17BB98u);
    ctx->pc = 0x17BB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BB90u;
            // 0x17bb94: 0x24845c60  addiu       $a0, $a0, 0x5C60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BB98u; }
        if (ctx->pc != 0x17BB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BB98u; }
        if (ctx->pc != 0x17BB98u) { return; }
    }
    ctx->pc = 0x17BB98u;
label_17bb98:
    // 0x17bb98: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17bb98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_17bb9c:
    // 0x17bb9c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x17bb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_17bba0:
    // 0x17bba0: 0x24845c08  addiu       $a0, $a0, 0x5C08
    ctx->pc = 0x17bba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23560));
label_17bba4:
    // 0x17bba4: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x17bba4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17bba8:
    // 0x17bba8: 0xc05b99c  jal         func_16E670
label_17bbac:
    if (ctx->pc == 0x17BBACu) {
        ctx->pc = 0x17BBACu;
            // 0x17bbac: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x17BBB0u;
        goto label_17bbb0;
    }
    ctx->pc = 0x17BBA8u;
    SET_GPR_U32(ctx, 31, 0x17BBB0u);
    ctx->pc = 0x17BBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BBA8u;
            // 0x17bbac: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BBB0u; }
        if (ctx->pc != 0x17BBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BBB0u; }
        if (ctx->pc != 0x17BBB0u) { return; }
    }
    ctx->pc = 0x17BBB0u;
label_17bbb0:
    // 0x17bbb0: 0x0  nop
    ctx->pc = 0x17bbb0u;
    // NOP
label_17bbb4:
    // 0x17bbb4: 0x0  nop
    ctx->pc = 0x17bbb4u;
    // NOP
label_17bbb8:
    // 0x17bbb8: 0x0  nop
    ctx->pc = 0x17bbb8u;
    // NOP
label_17bbbc:
    // 0x17bbbc: 0x0  nop
    ctx->pc = 0x17bbbcu;
    // NOP
label_17bbc0:
    // 0x17bbc0: 0x0  nop
    ctx->pc = 0x17bbc0u;
    // NOP
label_17bbc4:
    // 0x17bbc4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_17bbc8:
    if (ctx->pc == 0x17BBC8u) {
        ctx->pc = 0x17BBCCu;
        goto label_17bbcc;
    }
    ctx->pc = 0x17BBC4u;
    {
        const bool branch_taken_0x17bbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bbc4) {
            ctx->pc = 0x17BBB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17bbb0;
        }
    }
    ctx->pc = 0x17BBCCu;
label_17bbcc:
    // 0x17bbcc: 0x0  nop
    ctx->pc = 0x17bbccu;
    // NOP
label_17bbd0:
    // 0x17bbd0: 0xc043316  jal         func_10CC58
label_17bbd4:
    if (ctx->pc == 0x17BBD4u) {
        ctx->pc = 0x17BBD4u;
            // 0x17bbd4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->pc = 0x17BBD8u;
        goto label_17bbd8;
    }
    ctx->pc = 0x17BBD0u;
    SET_GPR_U32(ctx, 31, 0x17BBD8u);
    ctx->pc = 0x17BBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BBD0u;
            // 0x17bbd4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC58u;
    if (runtime->hasFunction(0x10CC58u)) {
        auto targetFn = runtime->lookupFunction(0x10CC58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BBD8u; }
        if (ctx->pc != 0x17BBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC58_0x10cc58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BBD8u; }
        if (ctx->pc != 0x17BBD8u) { return; }
    }
    ctx->pc = 0x17BBD8u;
label_17bbd8:
    // 0x17bbd8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x17bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_17bbdc:
    // 0x17bbdc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17bbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_17bbe0:
    // 0x17bbe0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x17bbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_17bbe4:
    // 0x17bbe4: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x17bbe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_17bbe8:
    // 0x17bbe8: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x17bbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_17bbec:
    // 0x17bbec: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x17bbecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_17bbf0:
    // 0x17bbf0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x17bbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_17bbf4:
    // 0x17bbf4: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x17bbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
label_17bbf8:
    // 0x17bbf8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17bbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17bbfc:
    // 0x17bbfc: 0xae470020  sw          $a3, 0x20($s2)
    ctx->pc = 0x17bbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 7));
label_17bc00:
    // 0x17bc00: 0xae460024  sw          $a2, 0x24($s2)
    ctx->pc = 0x17bc00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 6));
label_17bc04:
    // 0x17bc04: 0xc043ca2  jal         func_10F288
label_17bc08:
    if (ctx->pc == 0x17BC08u) {
        ctx->pc = 0x17BC08u;
            // 0x17bc08: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->pc = 0x17BC0Cu;
        goto label_17bc0c;
    }
    ctx->pc = 0x17BC04u;
    SET_GPR_U32(ctx, 31, 0x17BC0Cu);
    ctx->pc = 0x17BC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BC04u;
            // 0x17bc08: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F288u;
    if (runtime->hasFunction(0x10F288u)) {
        auto targetFn = runtime->lookupFunction(0x10F288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BC0Cu; }
        if (ctx->pc != 0x17BC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F288_0x10f288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BC0Cu; }
        if (ctx->pc != 0x17BC0Cu) { return; }
    }
    ctx->pc = 0x17BC0Cu;
label_17bc0c:
    // 0x17bc0c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_17bc10:
    if (ctx->pc == 0x17BC10u) {
        ctx->pc = 0x17BC10u;
            // 0x17bc10: 0xae42002c  sw          $v0, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x17BC14u;
        goto label_17bc14;
    }
    ctx->pc = 0x17BC0Cu;
    {
        const bool branch_taken_0x17bc0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BC0Cu;
            // 0x17bc10: 0xae42002c  sw          $v0, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bc0c) {
            ctx->pc = 0x17BC50u;
            goto label_17bc50;
        }
    }
    ctx->pc = 0x17BC14u;
label_17bc14:
    // 0x17bc14: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x17bc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_17bc18:
    // 0x17bc18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17bc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17bc1c:
    // 0x17bc1c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x17bc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17bc20:
    // 0x17bc20: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x17bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_17bc24:
    // 0x17bc24: 0x40f809  jalr        $v0
label_17bc28:
    if (ctx->pc == 0x17BC28u) {
        ctx->pc = 0x17BC28u;
            // 0x17bc28: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17BC2Cu;
        goto label_17bc2c;
    }
    ctx->pc = 0x17BC24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17BC2Cu);
        ctx->pc = 0x17BC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BC24u;
            // 0x17bc28: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17BC2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17BC2Cu; }
            if (ctx->pc != 0x17BC2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17BC2Cu;
label_17bc2c:
    // 0x17bc2c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x17bc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_17bc30:
    // 0x17bc30: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x17bc30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17bc34:
    // 0x17bc34: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x17bc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17bc38:
    // 0x17bc38: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x17bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_17bc3c:
    // 0x17bc3c: 0x40f809  jalr        $v0
label_17bc40:
    if (ctx->pc == 0x17BC40u) {
        ctx->pc = 0x17BC40u;
            // 0x17bc40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17BC44u;
        goto label_17bc44;
    }
    ctx->pc = 0x17BC3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17BC44u);
        ctx->pc = 0x17BC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BC3Cu;
            // 0x17bc40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17BC44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17BC44u; }
            if (ctx->pc != 0x17BC44u) { return; }
        }
        }
    }
    ctx->pc = 0x17BC44u;
label_17bc44:
    // 0x17bc44: 0x1000000d  b           . + 4 + (0xD << 2)
label_17bc48:
    if (ctx->pc == 0x17BC48u) {
        ctx->pc = 0x17BC48u;
            // 0x17bc48: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x17BC4Cu;
        goto label_17bc4c;
    }
    ctx->pc = 0x17BC44u;
    {
        const bool branch_taken_0x17bc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BC44u;
            // 0x17bc48: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bc44) {
            ctx->pc = 0x17BC7Cu;
            goto label_17bc7c;
        }
    }
    ctx->pc = 0x17BC4Cu;
label_17bc4c:
    // 0x17bc4c: 0x0  nop
    ctx->pc = 0x17bc4cu;
    // NOP
label_17bc50:
    // 0x17bc50: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x17bc50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_17bc54:
    // 0x17bc54: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x17bc54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_17bc58:
    // 0x17bc58: 0xb2440013  sdl         $a0, 0x13($s2)
    ctx->pc = 0x17bc58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_17bc5c:
    // 0x17bc5c: 0xb644000c  sdr         $a0, 0xC($s2)
    ctx->pc = 0x17bc5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17bc60:
    // 0x17bc60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17bc64:
    // 0x17bc64: 0x6a640007  ldl         $a0, 0x7($s3)
    ctx->pc = 0x17bc64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_17bc68:
    // 0x17bc68: 0x6e640000  ldr         $a0, 0x0($s3)
    ctx->pc = 0x17bc68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_17bc6c:
    // 0x17bc6c: 0xb244001b  sdl         $a0, 0x1B($s2)
    ctx->pc = 0x17bc6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_17bc70:
    // 0x17bc70: 0xb6440014  sdr         $a0, 0x14($s2)
    ctx->pc = 0x17bc70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17bc74:
    // 0x17bc74: 0xa2420002  sb          $v0, 0x2($s2)
    ctx->pc = 0x17bc74u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
label_17bc78:
    // 0x17bc78: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x17bc78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17bc7c:
    // 0x17bc7c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x17bc7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_17bc80:
    // 0x17bc80: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x17bc80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_17bc84:
    // 0x17bc84: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x17bc84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_17bc88:
    // 0x17bc88: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x17bc88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_17bc8c:
    // 0x17bc8c: 0x3e00008  jr          $ra
label_17bc90:
    if (ctx->pc == 0x17BC90u) {
        ctx->pc = 0x17BC90u;
            // 0x17bc90: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x17BC94u;
        goto label_17bc94;
    }
    ctx->pc = 0x17BC8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BC8Cu;
            // 0x17bc90: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17BC94u;
label_17bc94:
    // 0x17bc94: 0x0  nop
    ctx->pc = 0x17bc94u;
    // NOP
}
