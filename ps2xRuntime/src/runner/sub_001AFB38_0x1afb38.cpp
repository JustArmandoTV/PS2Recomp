#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AFB38
// Address: 0x1afb38 - 0x1afdb0
void sub_001AFB38_0x1afb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AFB38_0x1afb38");
#endif

    switch (ctx->pc) {
        case 0x1afb64u: goto label_1afb64;
        case 0x1afd78u: goto label_1afd78;
        case 0x1afd88u: goto label_1afd88;
        case 0x1afd94u: goto label_1afd94;
        default: break;
    }

    ctx->pc = 0x1afb38u;

    // 0x1afb38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1afb38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1afb3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1afb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1afb40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1afb40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afb44: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1afb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1afb48: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1afb48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afb4c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1afb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1afb50: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1afb50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afb54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1afb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1afb58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1afb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1afb5c: 0xc06c092  jal         func_1B0248
    ctx->pc = 0x1AFB5Cu;
    SET_GPR_U32(ctx, 31, 0x1AFB64u);
    ctx->pc = 0x1AFB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFB5Cu;
            // 0x1afb60: 0x8e112030  lw          $s1, 0x2030($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8240)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0248u;
    if (runtime->hasFunction(0x1B0248u)) {
        auto targetFn = runtime->lookupFunction(0x1B0248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFB64u; }
        if (ctx->pc != 0x1AFB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0248_0x1b0248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFB64u; }
        if (ctx->pc != 0x1AFB64u) { return; }
    }
    ctx->pc = 0x1AFB64u;
label_1afb64:
    // 0x1afb64: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1afb64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1afb68: 0x2669005c  addiu       $t1, $s3, 0x5C
    ctx->pc = 0x1afb68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 92));
    // 0x1afb6c: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x1afb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x1afb70: 0x24480008  addiu       $t0, $v0, 0x8
    ctx->pc = 0x1afb70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1afb74: 0x8d230018  lw          $v1, 0x18($t1)
    ctx->pc = 0x1afb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x1afb78: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1afb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1afb7c: 0xad030010  sw          $v1, 0x10($t0)
    ctx->pc = 0x1afb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 3));
    // 0x1afb80: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x1afb80u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x1afb84: 0x8e060038  lw          $a2, 0x38($s0)
    ctx->pc = 0x1afb84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1afb88: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x1afb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1afb8c: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x1afb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1afb90: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x1afb90u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x1afb94: 0x8e650054  lw          $a1, 0x54($s3)
    ctx->pc = 0x1afb94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1afb98: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x1afb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1afb9c: 0x8d270040  lw          $a3, 0x40($t1)
    ctx->pc = 0x1afb9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 64)));
    // 0x1afba0: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x1afba0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x1afba4: 0xae330070  sw          $s3, 0x70($s1)
    ctx->pc = 0x1afba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 19));
    // 0x1afba8: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x1afba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1afbac: 0xad06001c  sw          $a2, 0x1C($t0)
    ctx->pc = 0x1afbacu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 6));
    // 0x1afbb0: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x1afbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
    // 0x1afbb4: 0xad040020  sw          $a0, 0x20($t0)
    ctx->pc = 0x1afbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 4));
    // 0x1afbb8: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x1afbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x1afbbc: 0xad050038  sw          $a1, 0x38($t0)
    ctx->pc = 0x1afbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 56), GPR_U32(ctx, 5));
    // 0x1afbc0: 0xad020014  sw          $v0, 0x14($t0)
    ctx->pc = 0x1afbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 2));
    // 0x1afbc4: 0xae480000  sw          $t0, 0x0($s2)
    ctx->pc = 0x1afbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 8));
    // 0x1afbc8: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x1afbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x1afbcc: 0xad020018  sw          $v0, 0x18($t0)
    ctx->pc = 0x1afbccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 2));
    // 0x1afbd0: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x1afbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x1afbd4: 0xad030024  sw          $v1, 0x24($t0)
    ctx->pc = 0x1afbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 3));
    // 0x1afbd8: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x1afbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x1afbdc: 0xad020028  sw          $v0, 0x28($t0)
    ctx->pc = 0x1afbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 2));
    // 0x1afbe0: 0x8e630048  lw          $v1, 0x48($s3)
    ctx->pc = 0x1afbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x1afbe4: 0xad03002c  sw          $v1, 0x2C($t0)
    ctx->pc = 0x1afbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 3));
    // 0x1afbe8: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x1afbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x1afbec: 0xad020030  sw          $v0, 0x30($t0)
    ctx->pc = 0x1afbecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 2));
    // 0x1afbf0: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x1afbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x1afbf4: 0xad030034  sw          $v1, 0x34($t0)
    ctx->pc = 0x1afbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 3));
    // 0x1afbf8: 0x8d220044  lw          $v0, 0x44($t1)
    ctx->pc = 0x1afbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 68)));
    // 0x1afbfc: 0xad07003c  sw          $a3, 0x3C($t0)
    ctx->pc = 0x1afbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 7));
    // 0x1afc00: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AFC00u;
    {
        const bool branch_taken_0x1afc00 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFC00u;
            // 0x1afc04: 0xad020040  sw          $v0, 0x40($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc00) {
            ctx->pc = 0x1AFC18u;
            goto label_1afc18;
        }
    }
    ctx->pc = 0x1AFC08u;
    // 0x1afc08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1afc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1afc0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFC0Cu;
    {
        const bool branch_taken_0x1afc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFC0Cu;
            // 0x1afc10: 0xad020048  sw          $v0, 0x48($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afc0c) {
            ctx->pc = 0x1AFC1Cu;
            goto label_1afc1c;
        }
    }
    ctx->pc = 0x1AFC14u;
    // 0x1afc14: 0x0  nop
    ctx->pc = 0x1afc14u;
    // NOP
label_1afc18:
    // 0x1afc18: 0xad0a0048  sw          $t2, 0x48($t0)
    ctx->pc = 0x1afc18u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 72), GPR_U32(ctx, 10));
label_1afc1c:
    // 0x1afc1c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1afc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1afc20: 0xde6200e0  ld          $v0, 0xE0($s3)
    ctx->pc = 0x1afc20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 224)));
    // 0x1afc24: 0xfc620050  sd          $v0, 0x50($v1)
    ctx->pc = 0x1afc24u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 80), GPR_U64(ctx, 2));
    // 0x1afc28: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1afc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1afc2c: 0x8d220038  lw          $v0, 0x38($t1)
    ctx->pc = 0x1afc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 56)));
    // 0x1afc30: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x1afc30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
    // 0x1afc34: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1afc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1afc38: 0x8d22003c  lw          $v0, 0x3C($t1)
    ctx->pc = 0x1afc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
    // 0x1afc3c: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x1afc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
    // 0x1afc40: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1afc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1afc44: 0x8d220048  lw          $v0, 0x48($t1)
    ctx->pc = 0x1afc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 72)));
    // 0x1afc48: 0xac820060  sw          $v0, 0x60($a0)
    ctx->pc = 0x1afc48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
    // 0x1afc4c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1afc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1afc50: 0x8d22004c  lw          $v0, 0x4C($t1)
    ctx->pc = 0x1afc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 76)));
    // 0x1afc54: 0xac620064  sw          $v0, 0x64($v1)
    ctx->pc = 0x1afc54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
    // 0x1afc58: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1afc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1afc5c: 0x95220050  lhu         $v0, 0x50($t1)
    ctx->pc = 0x1afc5cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x1afc60: 0xa4820068  sh          $v0, 0x68($a0)
    ctx->pc = 0x1afc60u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 104), (uint16_t)GPR_U32(ctx, 2));
    // 0x1afc64: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1afc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1afc68: 0x95220052  lhu         $v0, 0x52($t1)
    ctx->pc = 0x1afc68u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 82)));
    // 0x1afc6c: 0xa462006a  sh          $v0, 0x6A($v1)
    ctx->pc = 0x1afc6cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 106), (uint16_t)GPR_U32(ctx, 2));
    // 0x1afc70: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1afc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1afc74: 0x91220055  lbu         $v0, 0x55($t1)
    ctx->pc = 0x1afc74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 85)));
    // 0x1afc78: 0xa082006c  sb          $v0, 0x6C($a0)
    ctx->pc = 0x1afc78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 108), (uint8_t)GPR_U32(ctx, 2));
    // 0x1afc7c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1afc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1afc80: 0x91220056  lbu         $v0, 0x56($t1)
    ctx->pc = 0x1afc80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 86)));
    // 0x1afc84: 0xa062006d  sb          $v0, 0x6D($v1)
    ctx->pc = 0x1afc84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 109), (uint8_t)GPR_U32(ctx, 2));
    // 0x1afc88: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1afc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1afc8c: 0x91220057  lbu         $v0, 0x57($t1)
    ctx->pc = 0x1afc8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 87)));
    // 0x1afc90: 0xa082006e  sb          $v0, 0x6E($a0)
    ctx->pc = 0x1afc90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 110), (uint8_t)GPR_U32(ctx, 2));
    // 0x1afc94: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1afc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1afc98: 0x91220059  lbu         $v0, 0x59($t1)
    ctx->pc = 0x1afc98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 89)));
    // 0x1afc9c: 0xa062006f  sb          $v0, 0x6F($v1)
    ctx->pc = 0x1afc9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 2));
    // 0x1afca0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1afca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1afca4: 0x9122005a  lbu         $v0, 0x5A($t1)
    ctx->pc = 0x1afca4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 90)));
    // 0x1afca8: 0xa0820070  sb          $v0, 0x70($a0)
    ctx->pc = 0x1afca8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 2));
    // 0x1afcac: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1afcacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1afcb0: 0x9122005b  lbu         $v0, 0x5B($t1)
    ctx->pc = 0x1afcb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 91)));
    // 0x1afcb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1afcb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afcb8: 0xa0620071  sb          $v0, 0x71($v1)
    ctx->pc = 0x1afcb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 113), (uint8_t)GPR_U32(ctx, 2));
    // 0x1afcbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1afcbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1afcc0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1afcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1afcc4: 0x9122005c  lbu         $v0, 0x5C($t1)
    ctx->pc = 0x1afcc4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 92)));
    // 0x1afcc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1afcc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1afccc: 0xa0820072  sb          $v0, 0x72($a0)
    ctx->pc = 0x1afcccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 114), (uint8_t)GPR_U32(ctx, 2));
    // 0x1afcd0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1afcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1afcd4: 0x9122005d  lbu         $v0, 0x5D($t1)
    ctx->pc = 0x1afcd4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 93)));
    // 0x1afcd8: 0xa0620073  sb          $v0, 0x73($v1)
    ctx->pc = 0x1afcd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 115), (uint8_t)GPR_U32(ctx, 2));
    // 0x1afcdc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1afcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1afce0: 0x9122005e  lbu         $v0, 0x5E($t1)
    ctx->pc = 0x1afce0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 94)));
    // 0x1afce4: 0xa0820074  sb          $v0, 0x74($a0)
    ctx->pc = 0x1afce4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 116), (uint8_t)GPR_U32(ctx, 2));
    // 0x1afce8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1afce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1afcec: 0x9122005f  lbu         $v0, 0x5F($t1)
    ctx->pc = 0x1afcecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 95)));
    // 0x1afcf0: 0xa0620075  sb          $v0, 0x75($v1)
    ctx->pc = 0x1afcf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 117), (uint8_t)GPR_U32(ctx, 2));
    // 0x1afcf4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1afcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1afcf8: 0x91220060  lbu         $v0, 0x60($t1)
    ctx->pc = 0x1afcf8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 96)));
    // 0x1afcfc: 0xa0820076  sb          $v0, 0x76($a0)
    ctx->pc = 0x1afcfcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 118), (uint8_t)GPR_U32(ctx, 2));
    // 0x1afd00: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1afd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1afd04: 0x91220061  lbu         $v0, 0x61($t1)
    ctx->pc = 0x1afd04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 97)));
    // 0x1afd08: 0xa0620077  sb          $v0, 0x77($v1)
    ctx->pc = 0x1afd08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 119), (uint8_t)GPR_U32(ctx, 2));
    // 0x1afd0c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1afd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1afd10: 0x91220062  lbu         $v0, 0x62($t1)
    ctx->pc = 0x1afd10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 98)));
    // 0x1afd14: 0xa0820078  sb          $v0, 0x78($a0)
    ctx->pc = 0x1afd14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 120), (uint8_t)GPR_U32(ctx, 2));
    // 0x1afd18: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1afd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1afd1c: 0x91220063  lbu         $v0, 0x63($t1)
    ctx->pc = 0x1afd1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 99)));
    // 0x1afd20: 0xa0620079  sb          $v0, 0x79($v1)
    ctx->pc = 0x1afd20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 121), (uint8_t)GPR_U32(ctx, 2));
    // 0x1afd24: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1afd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1afd28: 0x91240064  lbu         $a0, 0x64($t1)
    ctx->pc = 0x1afd28u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 100)));
    // 0x1afd2c: 0xa044007a  sb          $a0, 0x7A($v0)
    ctx->pc = 0x1afd2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 122), (uint8_t)GPR_U32(ctx, 4));
    // 0x1afd30: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1afd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1afd34: 0x966200e8  lhu         $v0, 0xE8($s3)
    ctx->pc = 0x1afd34u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 232)));
    // 0x1afd38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1afd38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1afd3c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1afd3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1afd40: 0xa462007c  sh          $v0, 0x7C($v1)
    ctx->pc = 0x1afd40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 124), (uint16_t)GPR_U32(ctx, 2));
    // 0x1afd44: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFD44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFD44u;
            // 0x1afd48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AFD4Cu;
    // 0x1afd4c: 0x0  nop
    ctx->pc = 0x1afd4cu;
    // NOP
    // 0x1afd50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1afd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1afd54: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1afd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1afd58: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1afd58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afd5c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1afd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1afd60: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1afd60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afd64: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1afd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1afd68: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1afd68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afd6c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1afd6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1afd70: 0xc06a25c  jal         func_1A8970
    ctx->pc = 0x1AFD70u;
    SET_GPR_U32(ctx, 31, 0x1AFD78u);
    ctx->pc = 0x1AFD74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFD70u;
            // 0x1afd74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8970u;
    if (runtime->hasFunction(0x1A8970u)) {
        auto targetFn = runtime->lookupFunction(0x1A8970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD78u; }
        if (ctx->pc != 0x1AFD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8970_0x1a8970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD78u; }
        if (ctx->pc != 0x1AFD78u) { return; }
    }
    ctx->pc = 0x1AFD78u;
label_1afd78:
    // 0x1afd78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1afd78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afd7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1afd7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afd80: 0xc06bf6c  jal         func_1AFDB0
    ctx->pc = 0x1AFD80u;
    SET_GPR_U32(ctx, 31, 0x1AFD88u);
    ctx->pc = 0x1AFD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFD80u;
            // 0x1afd84: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AFDB0u;
    if (runtime->hasFunction(0x1AFDB0u)) {
        auto targetFn = runtime->lookupFunction(0x1AFDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD88u; }
        if (ctx->pc != 0x1AFD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFDB0_0x1afdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD88u; }
        if (ctx->pc != 0x1AFD88u) { return; }
    }
    ctx->pc = 0x1AFD88u;
label_1afd88:
    // 0x1afd88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1afd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afd8c: 0xc06a262  jal         func_1A8988
    ctx->pc = 0x1AFD8Cu;
    SET_GPR_U32(ctx, 31, 0x1AFD94u);
    ctx->pc = 0x1AFD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFD8Cu;
            // 0x1afd90: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8988u;
    if (runtime->hasFunction(0x1A8988u)) {
        auto targetFn = runtime->lookupFunction(0x1A8988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD94u; }
        if (ctx->pc != 0x1AFD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8988_0x1a8988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD94u; }
        if (ctx->pc != 0x1AFD94u) { return; }
    }
    ctx->pc = 0x1AFD94u;
label_1afd94:
    // 0x1afd94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1afd94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afd98: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1afd98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1afd9c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1afd9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1afda0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1afda0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1afda4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1afda4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1afda8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFDA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFDA8u;
            // 0x1afdac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AFDB0u;
}
