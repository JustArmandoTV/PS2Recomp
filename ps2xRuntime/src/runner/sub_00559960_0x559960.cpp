#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00559960
// Address: 0x559960 - 0x559ba0
void sub_00559960_0x559960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00559960_0x559960");
#endif

    switch (ctx->pc) {
        case 0x559960u: goto label_559960;
        case 0x559964u: goto label_559964;
        case 0x559968u: goto label_559968;
        case 0x55996cu: goto label_55996c;
        case 0x559970u: goto label_559970;
        case 0x559974u: goto label_559974;
        case 0x559978u: goto label_559978;
        case 0x55997cu: goto label_55997c;
        case 0x559980u: goto label_559980;
        case 0x559984u: goto label_559984;
        case 0x559988u: goto label_559988;
        case 0x55998cu: goto label_55998c;
        case 0x559990u: goto label_559990;
        case 0x559994u: goto label_559994;
        case 0x559998u: goto label_559998;
        case 0x55999cu: goto label_55999c;
        case 0x5599a0u: goto label_5599a0;
        case 0x5599a4u: goto label_5599a4;
        case 0x5599a8u: goto label_5599a8;
        case 0x5599acu: goto label_5599ac;
        case 0x5599b0u: goto label_5599b0;
        case 0x5599b4u: goto label_5599b4;
        case 0x5599b8u: goto label_5599b8;
        case 0x5599bcu: goto label_5599bc;
        case 0x5599c0u: goto label_5599c0;
        case 0x5599c4u: goto label_5599c4;
        case 0x5599c8u: goto label_5599c8;
        case 0x5599ccu: goto label_5599cc;
        case 0x5599d0u: goto label_5599d0;
        case 0x5599d4u: goto label_5599d4;
        case 0x5599d8u: goto label_5599d8;
        case 0x5599dcu: goto label_5599dc;
        case 0x5599e0u: goto label_5599e0;
        case 0x5599e4u: goto label_5599e4;
        case 0x5599e8u: goto label_5599e8;
        case 0x5599ecu: goto label_5599ec;
        case 0x5599f0u: goto label_5599f0;
        case 0x5599f4u: goto label_5599f4;
        case 0x5599f8u: goto label_5599f8;
        case 0x5599fcu: goto label_5599fc;
        case 0x559a00u: goto label_559a00;
        case 0x559a04u: goto label_559a04;
        case 0x559a08u: goto label_559a08;
        case 0x559a0cu: goto label_559a0c;
        case 0x559a10u: goto label_559a10;
        case 0x559a14u: goto label_559a14;
        case 0x559a18u: goto label_559a18;
        case 0x559a1cu: goto label_559a1c;
        case 0x559a20u: goto label_559a20;
        case 0x559a24u: goto label_559a24;
        case 0x559a28u: goto label_559a28;
        case 0x559a2cu: goto label_559a2c;
        case 0x559a30u: goto label_559a30;
        case 0x559a34u: goto label_559a34;
        case 0x559a38u: goto label_559a38;
        case 0x559a3cu: goto label_559a3c;
        case 0x559a40u: goto label_559a40;
        case 0x559a44u: goto label_559a44;
        case 0x559a48u: goto label_559a48;
        case 0x559a4cu: goto label_559a4c;
        case 0x559a50u: goto label_559a50;
        case 0x559a54u: goto label_559a54;
        case 0x559a58u: goto label_559a58;
        case 0x559a5cu: goto label_559a5c;
        case 0x559a60u: goto label_559a60;
        case 0x559a64u: goto label_559a64;
        case 0x559a68u: goto label_559a68;
        case 0x559a6cu: goto label_559a6c;
        case 0x559a70u: goto label_559a70;
        case 0x559a74u: goto label_559a74;
        case 0x559a78u: goto label_559a78;
        case 0x559a7cu: goto label_559a7c;
        case 0x559a80u: goto label_559a80;
        case 0x559a84u: goto label_559a84;
        case 0x559a88u: goto label_559a88;
        case 0x559a8cu: goto label_559a8c;
        case 0x559a90u: goto label_559a90;
        case 0x559a94u: goto label_559a94;
        case 0x559a98u: goto label_559a98;
        case 0x559a9cu: goto label_559a9c;
        case 0x559aa0u: goto label_559aa0;
        case 0x559aa4u: goto label_559aa4;
        case 0x559aa8u: goto label_559aa8;
        case 0x559aacu: goto label_559aac;
        case 0x559ab0u: goto label_559ab0;
        case 0x559ab4u: goto label_559ab4;
        case 0x559ab8u: goto label_559ab8;
        case 0x559abcu: goto label_559abc;
        case 0x559ac0u: goto label_559ac0;
        case 0x559ac4u: goto label_559ac4;
        case 0x559ac8u: goto label_559ac8;
        case 0x559accu: goto label_559acc;
        case 0x559ad0u: goto label_559ad0;
        case 0x559ad4u: goto label_559ad4;
        case 0x559ad8u: goto label_559ad8;
        case 0x559adcu: goto label_559adc;
        case 0x559ae0u: goto label_559ae0;
        case 0x559ae4u: goto label_559ae4;
        case 0x559ae8u: goto label_559ae8;
        case 0x559aecu: goto label_559aec;
        case 0x559af0u: goto label_559af0;
        case 0x559af4u: goto label_559af4;
        case 0x559af8u: goto label_559af8;
        case 0x559afcu: goto label_559afc;
        case 0x559b00u: goto label_559b00;
        case 0x559b04u: goto label_559b04;
        case 0x559b08u: goto label_559b08;
        case 0x559b0cu: goto label_559b0c;
        case 0x559b10u: goto label_559b10;
        case 0x559b14u: goto label_559b14;
        case 0x559b18u: goto label_559b18;
        case 0x559b1cu: goto label_559b1c;
        case 0x559b20u: goto label_559b20;
        case 0x559b24u: goto label_559b24;
        case 0x559b28u: goto label_559b28;
        case 0x559b2cu: goto label_559b2c;
        case 0x559b30u: goto label_559b30;
        case 0x559b34u: goto label_559b34;
        case 0x559b38u: goto label_559b38;
        case 0x559b3cu: goto label_559b3c;
        case 0x559b40u: goto label_559b40;
        case 0x559b44u: goto label_559b44;
        case 0x559b48u: goto label_559b48;
        case 0x559b4cu: goto label_559b4c;
        case 0x559b50u: goto label_559b50;
        case 0x559b54u: goto label_559b54;
        case 0x559b58u: goto label_559b58;
        case 0x559b5cu: goto label_559b5c;
        case 0x559b60u: goto label_559b60;
        case 0x559b64u: goto label_559b64;
        case 0x559b68u: goto label_559b68;
        case 0x559b6cu: goto label_559b6c;
        case 0x559b70u: goto label_559b70;
        case 0x559b74u: goto label_559b74;
        case 0x559b78u: goto label_559b78;
        case 0x559b7cu: goto label_559b7c;
        case 0x559b80u: goto label_559b80;
        case 0x559b84u: goto label_559b84;
        case 0x559b88u: goto label_559b88;
        case 0x559b8cu: goto label_559b8c;
        case 0x559b90u: goto label_559b90;
        case 0x559b94u: goto label_559b94;
        case 0x559b98u: goto label_559b98;
        case 0x559b9cu: goto label_559b9c;
        default: break;
    }

    ctx->pc = 0x559960u;

label_559960:
    // 0x559960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x559960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_559964:
    // 0x559964: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x559964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_559968:
    // 0x559968: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x559968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_55996c:
    // 0x55996c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x55996cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_559970:
    // 0x559970: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x559970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_559974:
    // 0x559974: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x559974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_559978:
    // 0x559978: 0x8c8400c8  lw          $a0, 0xC8($a0)
    ctx->pc = 0x559978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_55997c:
    // 0x55997c: 0x2c810002  sltiu       $at, $a0, 0x2
    ctx->pc = 0x55997cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_559980:
    // 0x559980: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_559984:
    if (ctx->pc == 0x559984u) {
        ctx->pc = 0x559984u;
            // 0x559984: 0x8c70a348  lw          $s0, -0x5CB8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943560)));
        ctx->pc = 0x559988u;
        goto label_559988;
    }
    ctx->pc = 0x559980u;
    {
        const bool branch_taken_0x559980 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x559984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559980u;
            // 0x559984: 0x8c70a348  lw          $s0, -0x5CB8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x559980) {
            ctx->pc = 0x5599B4u;
            goto label_5599b4;
        }
    }
    ctx->pc = 0x559988u;
label_559988:
    // 0x559988: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x559988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_55998c:
    // 0x55998c: 0x8c639764  lw          $v1, -0x689C($v1)
    ctx->pc = 0x55998cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940516)));
label_559990:
    // 0x559990: 0x30630402  andi        $v1, $v1, 0x402
    ctx->pc = 0x559990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1026);
label_559994:
    // 0x559994: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_559998:
    if (ctx->pc == 0x559998u) {
        ctx->pc = 0x559998u;
            // 0x559998: 0x8e240098  lw          $a0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->pc = 0x55999Cu;
        goto label_55999c;
    }
    ctx->pc = 0x559994u;
    {
        const bool branch_taken_0x559994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x559994) {
            ctx->pc = 0x559998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x559994u;
            // 0x559998: 0x8e240098  lw          $a0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5599B8u;
            goto label_5599b8;
        }
    }
    ctx->pc = 0x55999Cu;
label_55999c:
    // 0x55999c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x55999cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_5599a0:
    // 0x5599a0: 0xc073234  jal         func_1CC8D0
label_5599a4:
    if (ctx->pc == 0x5599A4u) {
        ctx->pc = 0x5599A4u;
            // 0x5599a4: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x5599A8u;
        goto label_5599a8;
    }
    ctx->pc = 0x5599A0u;
    SET_GPR_U32(ctx, 31, 0x5599A8u);
    ctx->pc = 0x5599A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5599A0u;
            // 0x5599a4: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5599A8u; }
        if (ctx->pc != 0x5599A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5599A8u; }
        if (ctx->pc != 0x5599A8u) { return; }
    }
    ctx->pc = 0x5599A8u;
label_5599a8:
    // 0x5599a8: 0x8e2300c8  lw          $v1, 0xC8($s1)
    ctx->pc = 0x5599a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_5599ac:
    // 0x5599ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x5599acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_5599b0:
    // 0x5599b0: 0xae2300c8  sw          $v1, 0xC8($s1)
    ctx->pc = 0x5599b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 3));
label_5599b4:
    // 0x5599b4: 0x8e240098  lw          $a0, 0x98($s1)
    ctx->pc = 0x5599b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_5599b8:
    // 0x5599b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5599b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5599bc:
    // 0x5599bc: 0x50830057  beql        $a0, $v1, . + 4 + (0x57 << 2)
label_5599c0:
    if (ctx->pc == 0x5599C0u) {
        ctx->pc = 0x5599C0u;
            // 0x5599c0: 0x8e2300c4  lw          $v1, 0xC4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
        ctx->pc = 0x5599C4u;
        goto label_5599c4;
    }
    ctx->pc = 0x5599BCu;
    {
        const bool branch_taken_0x5599bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x5599bc) {
            ctx->pc = 0x5599C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5599BCu;
            // 0x5599c0: 0x8e2300c4  lw          $v1, 0xC4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x559B1Cu;
            goto label_559b1c;
        }
    }
    ctx->pc = 0x5599C4u;
label_5599c4:
    // 0x5599c4: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_5599c8:
    if (ctx->pc == 0x5599C8u) {
        ctx->pc = 0x5599C8u;
            // 0x5599c8: 0x8e2300cc  lw          $v1, 0xCC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
        ctx->pc = 0x5599CCu;
        goto label_5599cc;
    }
    ctx->pc = 0x5599C4u;
    {
        const bool branch_taken_0x5599c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5599c4) {
            ctx->pc = 0x5599C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5599C4u;
            // 0x5599c8: 0x8e2300cc  lw          $v1, 0xCC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5599D4u;
            goto label_5599d4;
        }
    }
    ctx->pc = 0x5599CCu;
label_5599cc:
    // 0x5599cc: 0x1000006f  b           . + 4 + (0x6F << 2)
label_5599d0:
    if (ctx->pc == 0x5599D0u) {
        ctx->pc = 0x5599D0u;
            // 0x5599d0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x5599D4u;
        goto label_5599d4;
    }
    ctx->pc = 0x5599CCu;
    {
        const bool branch_taken_0x5599cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5599D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5599CCu;
            // 0x5599d0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5599cc) {
            ctx->pc = 0x559B8Cu;
            goto label_559b8c;
        }
    }
    ctx->pc = 0x5599D4u;
label_5599d4:
    // 0x5599d4: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x5599d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_5599d8:
    // 0x5599d8: 0x2c63000b  sltiu       $v1, $v1, 0xB
    ctx->pc = 0x5599d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_5599dc:
    // 0x5599dc: 0x1460006a  bnez        $v1, . + 4 + (0x6A << 2)
label_5599e0:
    if (ctx->pc == 0x5599E0u) {
        ctx->pc = 0x5599E4u;
        goto label_5599e4;
    }
    ctx->pc = 0x5599DCu;
    {
        const bool branch_taken_0x5599dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5599dc) {
            ctx->pc = 0x559B88u;
            goto label_559b88;
        }
    }
    ctx->pc = 0x5599E4u;
label_5599e4:
    // 0x5599e4: 0xa2000038  sb          $zero, 0x38($s0)
    ctx->pc = 0x5599e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 0));
label_5599e8:
    // 0x5599e8: 0x8e2300c8  lw          $v1, 0xC8($s1)
    ctx->pc = 0x5599e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_5599ec:
    // 0x5599ec: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x5599ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_5599f0:
    // 0x5599f0: 0x50200044  beql        $at, $zero, . + 4 + (0x44 << 2)
label_5599f4:
    if (ctx->pc == 0x5599F4u) {
        ctx->pc = 0x5599F4u;
            // 0x5599f4: 0x8e2300c8  lw          $v1, 0xC8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
        ctx->pc = 0x5599F8u;
        goto label_5599f8;
    }
    ctx->pc = 0x5599F0u;
    {
        const bool branch_taken_0x5599f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5599f0) {
            ctx->pc = 0x5599F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5599F0u;
            // 0x5599f4: 0x8e2300c8  lw          $v1, 0xC8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x559B04u;
            goto label_559b04;
        }
    }
    ctx->pc = 0x5599F8u;
label_5599f8:
    // 0x5599f8: 0x8e2300d0  lw          $v1, 0xD0($s1)
    ctx->pc = 0x5599f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_5599fc:
    // 0x5599fc: 0x14600040  bnez        $v1, . + 4 + (0x40 << 2)
label_559a00:
    if (ctx->pc == 0x559A00u) {
        ctx->pc = 0x559A04u;
        goto label_559a04;
    }
    ctx->pc = 0x5599FCu;
    {
        const bool branch_taken_0x5599fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5599fc) {
            ctx->pc = 0x559B00u;
            goto label_559b00;
        }
    }
    ctx->pc = 0x559A04u;
label_559a04:
    // 0x559a04: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x559a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
label_559a08:
    // 0x559a08: 0xc073234  jal         func_1CC8D0
label_559a0c:
    if (ctx->pc == 0x559A0Cu) {
        ctx->pc = 0x559A0Cu;
            // 0x559a0c: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x559A10u;
        goto label_559a10;
    }
    ctx->pc = 0x559A08u;
    SET_GPR_U32(ctx, 31, 0x559A10u);
    ctx->pc = 0x559A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x559A08u;
            // 0x559a0c: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x559A10u; }
        if (ctx->pc != 0x559A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x559A10u; }
        if (ctx->pc != 0x559A10u) { return; }
    }
    ctx->pc = 0x559A10u;
label_559a10:
    // 0x559a10: 0xc040180  jal         func_100600
label_559a14:
    if (ctx->pc == 0x559A14u) {
        ctx->pc = 0x559A14u;
            // 0x559a14: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->pc = 0x559A18u;
        goto label_559a18;
    }
    ctx->pc = 0x559A10u;
    SET_GPR_U32(ctx, 31, 0x559A18u);
    ctx->pc = 0x559A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x559A10u;
            // 0x559a14: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x559A18u; }
        if (ctx->pc != 0x559A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x559A18u; }
        if (ctx->pc != 0x559A18u) { return; }
    }
    ctx->pc = 0x559A18u;
label_559a18:
    // 0x559a18: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_559a1c:
    if (ctx->pc == 0x559A1Cu) {
        ctx->pc = 0x559A1Cu;
            // 0x559a1c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x559A20u;
        goto label_559a20;
    }
    ctx->pc = 0x559A18u;
    {
        const bool branch_taken_0x559a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x559A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559A18u;
            // 0x559a1c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x559a18) {
            ctx->pc = 0x559AFCu;
            goto label_559afc;
        }
    }
    ctx->pc = 0x559A20u;
label_559a20:
    // 0x559a20: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x559a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_559a24:
    // 0x559a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x559a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_559a28:
    // 0x559a28: 0x3445423f  ori         $a1, $v0, 0x423F
    ctx->pc = 0x559a28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16959);
label_559a2c:
    // 0x559a2c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x559a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_559a30:
    // 0x559a30: 0xc10ca68  jal         func_4329A0
label_559a34:
    if (ctx->pc == 0x559A34u) {
        ctx->pc = 0x559A34u;
            // 0x559a34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x559A38u;
        goto label_559a38;
    }
    ctx->pc = 0x559A30u;
    SET_GPR_U32(ctx, 31, 0x559A38u);
    ctx->pc = 0x559A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x559A30u;
            // 0x559a34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x559A38u; }
        if (ctx->pc != 0x559A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x559A38u; }
        if (ctx->pc != 0x559A38u) { return; }
    }
    ctx->pc = 0x559A38u;
label_559a38:
    // 0x559a38: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x559a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_559a3c:
    // 0x559a3c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x559a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_559a40:
    // 0x559a40: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x559a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_559a44:
    // 0x559a44: 0x244210c0  addiu       $v0, $v0, 0x10C0
    ctx->pc = 0x559a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4288));
label_559a48:
    // 0x559a48: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x559a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_559a4c:
    // 0x559a4c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x559a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_559a50:
    // 0x559a50: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x559a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_559a54:
    // 0x559a54: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x559a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_559a58:
    // 0x559a58: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x559a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_559a5c:
    // 0x559a5c: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x559a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_559a60:
    // 0x559a60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x559a60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_559a64:
    // 0x559a64: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x559a64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_559a68:
    // 0x559a68: 0x320f809  jalr        $t9
label_559a6c:
    if (ctx->pc == 0x559A6Cu) {
        ctx->pc = 0x559A70u;
        goto label_559a70;
    }
    ctx->pc = 0x559A68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x559A70u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x559A70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x559A70u; }
            if (ctx->pc != 0x559A70u) { return; }
        }
        }
    }
    ctx->pc = 0x559A70u;
label_559a70:
    // 0x559a70: 0x3c0243b9  lui         $v0, 0x43B9
    ctx->pc = 0x559a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17337 << 16));
label_559a74:
    // 0x559a74: 0x240300c9  addiu       $v1, $zero, 0xC9
    ctx->pc = 0x559a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
label_559a78:
    // 0x559a78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x559a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_559a7c:
    // 0x559a7c: 0x0  nop
    ctx->pc = 0x559a7cu;
    // NOP
label_559a80:
    // 0x559a80: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x559a80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_559a84:
    // 0x559a84: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x559a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_559a88:
    // 0x559a88: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x559a88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_559a8c:
    // 0x559a8c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x559a8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_559a90:
    // 0x559a90: 0x0  nop
    ctx->pc = 0x559a90u;
    // NOP
label_559a94:
    // 0x559a94: 0xae040058  sw          $a0, 0x58($s0)
    ctx->pc = 0x559a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 4));
label_559a98:
    // 0x559a98: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x559a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
label_559a9c:
    // 0x559a9c: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x559a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_559aa0:
    // 0x559aa0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x559aa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_559aa4:
    // 0x559aa4: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x559aa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_559aa8:
    // 0x559aa8: 0x320f809  jalr        $t9
label_559aac:
    if (ctx->pc == 0x559AACu) {
        ctx->pc = 0x559AB0u;
        goto label_559ab0;
    }
    ctx->pc = 0x559AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x559AB0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x559AB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x559AB0u; }
            if (ctx->pc != 0x559AB0u) { return; }
        }
        }
    }
    ctx->pc = 0x559AB0u;
label_559ab0:
    // 0x559ab0: 0x3c04422c  lui         $a0, 0x422C
    ctx->pc = 0x559ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16940 << 16));
label_559ab4:
    // 0x559ab4: 0x3c034c0a  lui         $v1, 0x4C0A
    ctx->pc = 0x559ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19466 << 16));
label_559ab8:
    // 0x559ab8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x559ab8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_559abc:
    // 0x559abc: 0x34666d80  ori         $a2, $v1, 0x6D80
    ctx->pc = 0x559abcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28032);
label_559ac0:
    // 0x559ac0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x559ac0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_559ac4:
    // 0x559ac4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x559ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_559ac8:
    // 0x559ac8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x559ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_559acc:
    // 0x559acc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x559accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_559ad0:
    // 0x559ad0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x559ad0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_559ad4:
    // 0x559ad4: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x559ad4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_559ad8:
    // 0x559ad8: 0x0  nop
    ctx->pc = 0x559ad8u;
    // NOP
label_559adc:
    // 0x559adc: 0xae070060  sw          $a3, 0x60($s0)
    ctx->pc = 0x559adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 7));
label_559ae0:
    // 0x559ae0: 0xae060064  sw          $a2, 0x64($s0)
    ctx->pc = 0x559ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 6));
label_559ae4:
    // 0x559ae4: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x559ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_559ae8:
    // 0x559ae8: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x559ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
label_559aec:
    // 0x559aec: 0xa2050080  sb          $a1, 0x80($s0)
    ctx->pc = 0x559aecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 5));
label_559af0:
    // 0x559af0: 0xa2000081  sb          $zero, 0x81($s0)
    ctx->pc = 0x559af0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 129), (uint8_t)GPR_U32(ctx, 0));
label_559af4:
    // 0x559af4: 0xae040084  sw          $a0, 0x84($s0)
    ctx->pc = 0x559af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 4));
label_559af8:
    // 0x559af8: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x559af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
label_559afc:
    // 0x559afc: 0xae3000d0  sw          $s0, 0xD0($s1)
    ctx->pc = 0x559afcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 16));
label_559b00:
    // 0x559b00: 0x8e2300c8  lw          $v1, 0xC8($s1)
    ctx->pc = 0x559b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_559b04:
    // 0x559b04: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_559b08:
    if (ctx->pc == 0x559B08u) {
        ctx->pc = 0x559B0Cu;
        goto label_559b0c;
    }
    ctx->pc = 0x559B04u;
    {
        const bool branch_taken_0x559b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x559b04) {
            ctx->pc = 0x559B88u;
            goto label_559b88;
        }
    }
    ctx->pc = 0x559B0Cu;
label_559b0c:
    // 0x559b0c: 0x8e230098  lw          $v1, 0x98($s1)
    ctx->pc = 0x559b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_559b10:
    // 0x559b10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x559b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_559b14:
    // 0x559b14: 0x1000001c  b           . + 4 + (0x1C << 2)
label_559b18:
    if (ctx->pc == 0x559B18u) {
        ctx->pc = 0x559B18u;
            // 0x559b18: 0xae230098  sw          $v1, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 3));
        ctx->pc = 0x559B1Cu;
        goto label_559b1c;
    }
    ctx->pc = 0x559B14u;
    {
        const bool branch_taken_0x559b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x559B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559B14u;
            // 0x559b18: 0xae230098  sw          $v1, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x559b14) {
            ctx->pc = 0x559B88u;
            goto label_559b88;
        }
    }
    ctx->pc = 0x559B1Cu;
label_559b1c:
    // 0x559b1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x559b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_559b20:
    // 0x559b20: 0xae2300c4  sw          $v1, 0xC4($s1)
    ctx->pc = 0x559b20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
label_559b24:
    // 0x559b24: 0x2863003c  slti        $v1, $v1, 0x3C
    ctx->pc = 0x559b24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)60) ? 1 : 0);
label_559b28:
    // 0x559b28: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
label_559b2c:
    if (ctx->pc == 0x559B2Cu) {
        ctx->pc = 0x559B30u;
        goto label_559b30;
    }
    ctx->pc = 0x559B28u;
    {
        const bool branch_taken_0x559b28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x559b28) {
            ctx->pc = 0x559B88u;
            goto label_559b88;
        }
    }
    ctx->pc = 0x559B30u;
label_559b30:
    // 0x559b30: 0x8e2500d0  lw          $a1, 0xD0($s1)
    ctx->pc = 0x559b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_559b34:
    // 0x559b34: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_559b38:
    if (ctx->pc == 0x559B38u) {
        ctx->pc = 0x559B38u;
            // 0x559b38: 0x8e2300c8  lw          $v1, 0xC8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
        ctx->pc = 0x559B3Cu;
        goto label_559b3c;
    }
    ctx->pc = 0x559B34u;
    {
        const bool branch_taken_0x559b34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x559b34) {
            ctx->pc = 0x559B38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x559B34u;
            // 0x559b38: 0x8e2300c8  lw          $v1, 0xC8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x559B54u;
            goto label_559b54;
        }
    }
    ctx->pc = 0x559B3Cu;
label_559b3c:
    // 0x559b3c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x559b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_559b40:
    // 0x559b40: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x559b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_559b44:
    // 0x559b44: 0xc057b7c  jal         func_15EDF0
label_559b48:
    if (ctx->pc == 0x559B48u) {
        ctx->pc = 0x559B48u;
            // 0x559b48: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x559B4Cu;
        goto label_559b4c;
    }
    ctx->pc = 0x559B44u;
    SET_GPR_U32(ctx, 31, 0x559B4Cu);
    ctx->pc = 0x559B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x559B44u;
            // 0x559b48: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x559B4Cu; }
        if (ctx->pc != 0x559B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x559B4Cu; }
        if (ctx->pc != 0x559B4Cu) { return; }
    }
    ctx->pc = 0x559B4Cu;
label_559b4c:
    // 0x559b4c: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x559b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
label_559b50:
    // 0x559b50: 0x8e2300c8  lw          $v1, 0xC8($s1)
    ctx->pc = 0x559b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_559b54:
    // 0x559b54: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x559b54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_559b58:
    // 0x559b58: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
label_559b5c:
    if (ctx->pc == 0x559B5Cu) {
        ctx->pc = 0x559B60u;
        goto label_559b60;
    }
    ctx->pc = 0x559B58u;
    {
        const bool branch_taken_0x559b58 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x559b58) {
            ctx->pc = 0x559B88u;
            goto label_559b88;
        }
    }
    ctx->pc = 0x559B60u;
label_559b60:
    // 0x559b60: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x559b60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_559b64:
    // 0x559b64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x559b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_559b68:
    // 0x559b68: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x559b68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_559b6c:
    // 0x559b6c: 0x320f809  jalr        $t9
label_559b70:
    if (ctx->pc == 0x559B70u) {
        ctx->pc = 0x559B70u;
            // 0x559b70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x559B74u;
        goto label_559b74;
    }
    ctx->pc = 0x559B6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x559B74u);
        ctx->pc = 0x559B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559B6Cu;
            // 0x559b70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x559B74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x559B74u; }
            if (ctx->pc != 0x559B74u) { return; }
        }
        }
    }
    ctx->pc = 0x559B74u;
label_559b74:
    // 0x559b74: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x559b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_559b78:
    // 0x559b78: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_559b7c:
    if (ctx->pc == 0x559B7Cu) {
        ctx->pc = 0x559B80u;
        goto label_559b80;
    }
    ctx->pc = 0x559B78u;
    {
        const bool branch_taken_0x559b78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x559b78) {
            ctx->pc = 0x559B88u;
            goto label_559b88;
        }
    }
    ctx->pc = 0x559B80u;
label_559b80:
    // 0x559b80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x559b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_559b84:
    // 0x559b84: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x559b84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_559b88:
    // 0x559b88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x559b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_559b8c:
    // 0x559b8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x559b8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_559b90:
    // 0x559b90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x559b90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_559b94:
    // 0x559b94: 0x3e00008  jr          $ra
label_559b98:
    if (ctx->pc == 0x559B98u) {
        ctx->pc = 0x559B98u;
            // 0x559b98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x559B9Cu;
        goto label_559b9c;
    }
    ctx->pc = 0x559B94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x559B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x559B94u;
            // 0x559b98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x559B9Cu;
label_559b9c:
    // 0x559b9c: 0x0  nop
    ctx->pc = 0x559b9cu;
    // NOP
}
